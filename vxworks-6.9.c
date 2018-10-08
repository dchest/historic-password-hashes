/*
 * VxWorks 6.9 password hash.
 * Source: http://read.pudn.com/downloads115/sourcecode/embed/486003/vxWorks/target/src/ostool/loginLib.c__.htm
 */
/****************************************************************************** 
* 
* loginDefaultEncrypt - default password encryption routine 
* 
* This routine provides default encryption for login passwords.  It employs 
* a simple encryption algorithm.  It takes as arguments a string <in> and a 
* pointer to a buffer <out>.  The encrypted string is then stored in the 
* buffer. 
* 
* The input strings must be at least 8 characters and no more than 40 
* characters. 
* 
* If a more sophisticated encryption algorithm is needed, this routine can 
* be replaced, as long as the new encryption routine retains the same 
* declarations as the default routine.  The routine vxencrypt 
* in \f3host/<hostOs>/bin\fP 
* should also be replaced by a host version of <encryptionRoutine>.  For more 
* information, see the manual entry for loginEncryptInstall(). 
* 
* RETURNS: OK, or ERROR if the password is invalid. 
* 
* SEE ALSO: loginEncryptInstall(), vxencrypt 
* 
* INTERNAL 
* The encryption is done by summing the password and multiplying it by 
* a magic number. 
*/  
  
STATUS loginDefaultEncrypt  
    (  
    char *in,                           /* input string */  
    char *out                           /* encrypted string */  
    )  
    {  
    int            ix;  
    unsigned long  magic     = 31695317;  
    unsigned long  passwdInt = 0;  
  
   if (strlen (in) < 8 || strlen (in) > 40)  
        {  
    errnoSet (S_loginLib_INVALID_PASSWORD);  
        return (ERROR);  
        }  
  
    for (ix = 0; ix < strlen(in); ix++)         /* sum the string */  
        passwdInt += (in[ix]) * ix ^ ix;  
  
    sprintf (out, "%u", (long) (passwdInt * magic)); /* convert interger 
                            to string */  
    /* make encrypted passwd printable */  
  
    for (ix = 0; ix < strlen (out); ix++)  
        {  
        if (out[ix] < '3')  
            out[ix] = out[ix] + '!';    /* arbitrary */  
  
        if (out[ix] < '7')  
            out[ix] = out[ix] + '/';    /* arbitrary */  
  
        if (out[ix] < '9')  
            out[ix] = out[ix] + 'B';    /* arbitrary */  
        }  
  
    return (OK);  
    }  
