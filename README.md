# Historic Password Hashes

This is a collection of historic password hashing algorithms.
Please do not use most of them today!
Send pull request if you have more. 

### Unix

  * [Unix V6](unix-v6-crypt.c) (1975)
  * [Unix V7 DES-crypt](unix-v7-crypt.c) (1979)
  * [4.4BSD DES-crypt](4.4bsd-crypt.c) (1993)
  * [Minix 1.5](minix1.5-crypt.c) (1994)
  * [Minix 2.0](minix2.0-pwdauth.c) (1994)
  * [FreeBSD 1.1.5 Nate's password scrambler](freebsd1.1.5-crypt.c) (1994)
  * [FreeBSD 2.0 phk's md5-crypt](freebsd2.0-crypt.c) (1994)
  * [OpenBSD 2.1 bcrypt](openbsd2.1-bcrypt.c) (1997)
  * (TODO) glibc SHA2 crypt ([ref](http://www.akkadia.org/drepper/sha-crypt.html)) (2007)
  * (TODO) Sun MD5 ([ref](http://docs.oracle.com/cd/E19253-01/816-5175/crypt-sunmd5-5/index.html),
	  [source](https://github.com/illumos/illumos-gate/blob/7256a34efe9df75b638b9e812912ef7c5c68e208/usr/src/lib/crypt_modules/sunmd5/sunmd5.c)) (?)

### Oberon

 * [Oberon](oberon.txt) (1990)

### Windows (TODO)

  * Windows LM-Hash (original: nt4/private/rpc/runtime/security/ntlmssp/owf.c)
  * Windows NT-Hash (original: ?, compatible: <http://svnweb.freebsd.org/base/head/lib/libcrypt/crypt-nthash.c>)

## See Also

* [Password Security: A Case History. (PostScript)](http://cm.bell-labs.com/who/dmr/passwd.ps) Robert Morris. Ken Thompson.
  Bell Laboratories. Murray Hill, New Jersey 07974.
* [Boris Hagelin's C-35 cipher machine (as in Unix V6 crypt)](https://en.wikipedia.org/wiki/C-36_(cipher_machine%29)
* [LM hash](https://en.wikipedia.org/wiki/LM_hash) and [NTLM](https://en.wikipedia.org/wiki/NTLM) on Wikipedia.
* [Md5crypt Password scrambler is no longer considered safe by author](http://www.freebsd.dk/sagas/md5crypt_eol.html) by Poul-Henning Kamp.
* [Minix 1.5 password insecurity](https://groups.google.com/d/msg/comp.os.minix/pMD8bSKj0TA/7WFOfOJecEIJ) from comp.os.minix.
* [Openwall](http://www.openwall.com/)
