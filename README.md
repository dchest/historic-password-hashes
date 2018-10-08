# Historic Password Hashes

This is a collection of historic password hashing algorithms.
Please do not use most of them today!
Send pull request if you have more. 

### Unix

  * [Unix V6](unix-v6-crypt.c) (1975)
  * [Unix V7 DES-crypt](unix-v7-crypt.c) (1979)
  * [Net/2 DES-crypt](net2-crypt.c) (1991)
  * [Minix 1.5](minix1.5-crypt.c) (1991)
  * [Minix 2.0](minix2.0-pwdauth.c) (1996)
  * [FreeBSD 1.1.5 Nate's password scrambler](freebsd1.1.5-crypt.c) (1994)
  * [FreeBSD 2.0 phk's md5-crypt](freebsd2.0-crypt.c) (1994)
  * [OpenBSD 2.1 bcrypt](openbsd2.1-bcrypt.c) (1997)
  * [glibc SHA crypt](glibc-sha-crypt.txt) (2007)
  * [Solaris 9 MU2 Sun MD5](sunmd5.c) (2002)

### Windows

  * [Windows LM-Hash](winnt-owf.c) (1991)
  * (TODO) Windows NT-Hash (original: ?, [compatible open source](http://svnweb.freebsd.org/base/head/lib/libcrypt/crypt-nthash.c>)) (1993)

### Other

 * [Oberon](oberon.txt) (1990)
 * [VxWorks 6.9 and earlier](vxworks-6.9.c) (1990)

## See Also

* [Password Security: A Case History. (PostScript)](http://cm.bell-labs.com/who/dmr/passwd.ps) Robert Morris. Ken Thompson.
  Bell Laboratories. Murray Hill, New Jersey 07974.
* [Boris Hagelin's M-209 cipher machine (as in Unix V6 crypt)](https://en.wikipedia.org/wiki/M-209)
* [LM hash](https://en.wikipedia.org/wiki/LM_hash) and [NTLM](https://en.wikipedia.org/wiki/NTLM) on Wikipedia.
* [Md5crypt Password scrambler is no longer considered safe by author](http://www.freebsd.dk/sagas/md5crypt_eol.html) by Poul-Henning Kamp.
* [Minix 1.5 password insecurity](https://groups.google.com/d/msg/comp.os.minix/pMD8bSKj0TA/7WFOfOJecEIJ) from comp.os.minix. 1992-11-30.
* [Unix crypt with SHA-256/512](http://www.akkadia.org/drepper/sha-crypt.html). Ulrich Drepper. 2007-09-19.
* [OpenSolaris, Pluggable Crypt, and the SunMD5 Password Hash Algorithm](http://dropsafe.crypticide.com/article/1389). Alec Muffett. 2005-12-05.
* [Shiny Old VxWorks Vulnerabilities](https://blog.rapid7.com/2010/08/02/shiny-old-vxworks-vulnerabilities/). 2010-08-02.
* [Openwall](http://www.openwall.com/)
