#define COMSTRUCT {{'1',.0075e1f,"\\\\\\/////"},{ "\v\'\"\f\"\n\r\t\b\a\\",},}
#define a '\f'

#define data15 "\x41\102\103DEFG" "HI\JKLMNO\PQ\RSTUVW\X\Z\bYZ\b\012"
#define ss  '\"'
#define sa 23.45l
#define dtat22 ++-+-+- - .3423423
#define s22
#define a /*/
#define B 22
*/
#define sda .0075e2
#define aa 0.075e1
#define aaa .075e1
#define cccc 75e-2
#define a 15.75
#define b 1.575E1   /* = 15.75   */
#define c 1575e-2   /* = 15.75   */
#define d -2.5e-3   /* = -0.0025 */
#define e 25E-4     /* =  0.0025 */
#define f 100F
#define COMSTRUCT { {1, 2.0, "str"}, {'1', .0075e1f,    "\\\\\\\\\\\\\\\\\\//////////////////"},     { +0x1dcbaf, 1.2e+0,    "\v\'\"\f \"\n\r\t\b\a\\",},}
#define sss "dassa" "sadsad"
    #   define aaa 10
#define b 34242
'COMSTRUCT': ((1, 2.0, 'str'), (49, 0.075, '\\\\\\\\\\\\\\\\\\//////////////////'), (1952687, 1.2, '\x0b\'"\x0c "\n\r\t\x08\x07\\'))

#	define 058a 0o51//

#define strdef_1 "#define a 123"
#define strdef_2 "\\t"
#undef /**/ strdef_2
#define strdef_4 "\"\"\""
#define strdef_5 123/*
//*/
#define strdef_6 456


#define a1 "ABCDEFGHIJKL"

#define aaaa "sdfsds" "dsfsdfsd" "dasdadas"
#define dasd "\"756765\""
#define a "\n\r"
#define a '\t'
#define data5  11 /*
//*/
#define a 22


#ifndef MCTEST
#define MCTEST

#ifdef MC1

#define data1 0x20
#define  data2 2.5f
#define date3 L"this is a data"
#define data4 true


#ifdef MC2

#define data5 'a'
#define data6 { {2.0, "abc"}, {1.5, "def"}, {5.6f, "7.2"}}

#else

#define data5 {5.0, 7.5, 3.8}
#define data6 'c'

#endif //end MC2


#else

#define data1 1.0f
#define data2 2
#define date3  false
#define data4 "this is a data"


#ifdef MC2

#define data5 'B'
#define data6 {1, 6, 3}
#define data7 0xa

#else

#define data5 'D'
#define data6 {1, 6}

#endif //end MC2

#endif //MC1

#ifdef MC2
#undef MC2
#endif

#endif // !MC_TEST

#define sdata4 {'d',1}
#define sdata3 "\x66\\',,\"//\x64 \",,\n\r,,,,\t\x67,,,\x68\\\\"
#define sdata2 { {{0,1}, {2,3,4}, {5}},  {{12,016}, {1,30,0}}, 23 }
#/**/define sdata0 {{},{-/*zero*/0,0,'\0',"\0",L""},'\101', {'\"'},{'"',"'",",'",','},{"",'{',"//",'}'}}
#define sdata1 {{},{0,0,0,"\x0",L""},65,{34},{34,"\'",",\'",44},{"",123,"//",125}}


