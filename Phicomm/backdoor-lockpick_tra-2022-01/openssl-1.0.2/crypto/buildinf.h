#ifndef MK1MF_BUILD
    /* auto-generated by util/mkbuildinf.pl for crypto/cversion.c */
    #define CFLAGS cflags
    /*
     * Generate CFLAGS as an array of individual characters. This is a
     * workaround for the situation where CFLAGS gets too long for a C90 string
     * literal
     */
    static const char cflags[] = {
        'c','o','m','p','i','l','e','r',':',' ','m','u','s','l','-','g','c','c',
        ' ','-','I','.',' ','-','I','.','.',' ','-','I','.','.','/','i','n','c',
        'l','u','d','e',' ',' ','-','D','O','P','E','N','S','S','L','_','N','O',
        '_','E','R','R',' ','-','m','6','4',' ','-','D','L','_','E','N','D','I',
        'A','N',' ','-','D','T','E','R','M','I','O','S',' ','-','O','s',' ','-',
        'W','a','l','l','\0'
    };
    #define PLATFORM "platform: linux-x86_64-musl"
    #define DATE "built on: Wed Oct  6 14:16:08 2021"
#endif
