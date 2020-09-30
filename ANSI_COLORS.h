 //-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 // ANSI ESCAPE CODES:
 //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 // SGR 20 = ( some old symbol font )
 // SGR 26 ( reserved for proportional spacing as specified in CCITT Recommendation T.61 )
 // SGR 56-59 ( reserved for future standardization )
 // SGR 0-65 are defined in ECMA-48 circa 1998 : "Control Functions for Coded Character Sets". : http://www.ecma.ch
 // http://ascii-table.com/ansi-escape-sequences.php
 // https://en.wikipedia.org/wiki/ANSI_escape_code#Unix-like_systems
 // https://manpages.ubuntu.com/manpages/artful/man4/console_codes.4.html
 // http://www.isthe.com/chongo/tech/comp/ansi_escapes.html
 // The VT100 User's Guide.        http://vt100.net/docs/vt100-ug/
 // CC_ is an abbreviation for Console Code , whether or not that is proper.
 //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 //                                                                 S.G.R. CODES ( SET GRAPHICS RENDITION )
 //                                           ESCAPE CODE.          Ubuntu 18.04 Terminal.               Eclipse IDE console.
 //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define CC_DEFAULT_RENDITION                   "\x1B[0m"                  // verified.                       // verified.
#define CC_INCREASED_INTENSITY                 "\x1b[1m"                  // verified.                       // verified.
#define CC_HALF_BRIGHT                         "\x1b[2m"                  // verified.                       // Ignored.
#define CC_ITALICIZED                          "\x1b[3m"                  // verified.                       // verified.
#define CC_SINGLE_UNDERLINE                    "\x1b[4m"                  // verified.                       // verified.
#define CC_SLOW_BLINK                          "\x1b[5m"                  // verified.                       // Ignored.
#define CC_RAPID_BLINK                         "\x1b[6m"                  // Ignored.                        // Ignored.
#define CC_NEGATIVE_IMAGE                      "\x1b[7m"                  // verified.                       // verified.
#define CC_CONCEALED_CHARACHTERS               "\x1b[8m"                  // verified.                       // verified.
#define CC_CROSSED_OUT_CHARACHTERS             "\x1b[9m"                  // verified.                       // verified.
 //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define CC_PRIMARY_FONT                        "\x1b[10m"                 // Ignored.                        // Ignored.
#define CC_ALTERNATE_FONT1                     "\x1b[11m"                 // Ignored.                        // Ignored.
#define CC_ALTERNATE_FONT2                     "\x1b[12m"                 // Ignored.                        // Ignored.
#define CC_ALTERNATE_FONT3                     "\x1b[13m"                 // Ignored.                        // Ignored.
#define CC_ALTERNATE_FONT4                     "\x1b[14m"                 // Ignored.                        // Ignored.
#define CC_ALTERNATE_FONT5                     "\x1b[15m"                 // Ignored.                        // Ignored.
#define CC_ALTERNATE_FONT6                     "\x1b[16m"                 // Ignored.                        // Ignored.
#define CC_ALTERNATE_FONT7                     "\x1b[17m"                 // Ignored.                        // Ignored.
#define CC_ALTERNATE_FONT8                     "\x1b[18m"                 // Ignored.                        // Ignored.
#define CC_ALTERNATE_FONT9                     "\x1b[19m"                 // Ignored.                        // Ignored.
#define CC_FRAKTUR_GOTHIC                      "\x1b[20m"                 // Ignored.                        // Ignored.
 //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define CC_DOUBLE_UNDERLINE                    "\x1b[21m"                 // verified.                       // verified.
#define CC_NORMAL_INTENSITY                    "\x1b[22m"                 // verified.                       // verified.
#define CC_ITALICO_GOTHIC_OFF                  "\x1b[23m"                 // verified.                       // verified.
#define CC_UNDERLINE_OFF                       "\x1B[24m"                 // verified.                       // verified.
#define CC_BLINK_OFF                           "\x1b[25m"                 // verified.                       // verified.
#define CC_RESERVED1                           "\x1b[26m"                 // Ignored.                        // Ignored.
#define CC_POSITIVE_IMAGE                      "\x1b[27m"                 // verified.                       // verified.
#define CC_REVEALED_CHARACHTERS                "\x1b[28m"                 // verified.                       // verified. ( in eclipse , selecting text shows the hidden text ! )
#define CC_NOT_CROSSED_OUT                     "\x1b[29m"                 // verified.                       // verified.
#define CC_BLACK_DISPLAY                       "\x1b[30m"                 // verified.                       // verified.
#define CC_RED_DISPLAY                         "\x1B[31m"                 // verified.                       // verified.
#define CC_GREEN_DISPLAY                       "\x1B[32m"                 // verified.                       // verified.
#define CC_YELLOW_DISPLAY                      "\x1B[33m"                 // verified.                       // verified.
#define CC_BLUE_DISPLAY                        "\x1B[34m"                 // verified.                       // verified.
#define CC_MAGENTA_DISPLAY                     "\x1B[35m"                 // verified.                       // verified.
#define CC_CYAN_DISPLAY                        "\x1B[36m"                 // verified.                       // verified.
#define CC_WHITE_DISPLAY                       "\x1B[37m"                 // verified.                       // verified.
#define CC_SET_FOREGROUND_COLOR                "\x1B[38m"                 // verified.                       // verified.     Next args are 5;n or 2;r;g;b
#define CC_DEFAULT_DISPLAY_COLOR               "\x1B[39m"                 // verified.                       // verified.     Next args are 5;n or 2;r;g;b
#define CC_BLACK_BACKGROUND                    "\x1b[40m"                 // verified.                       // verified.
#define CC_RED_BACKGROUND                      "\x1B[41m"                 // verified.                       // verified.
#define CC_GREEN_BACKGROUND                    "\x1B[42m"                 // verified.                       // verified.
#define CC_YELLOW_BACKGROUND                   "\x1B[43m"                 // verified.                       // verified.
#define CC_BLUE_BACKGROUND                     "\x1B[44m"                 // verified.                       // verified.
#define CC_MAGENTA_BACKGROUND                  "\x1B[45m"                 // verified.                       // verified.
#define CC_CYAN_BACKGROUND                     "\x1B[46m"                 // verified.                       // verified.
#define CC_WHITT_BACKGROUND                    "\x1B[47m"                 // verified.                       // verified.
#define SET_BACKGROUND_COLOR                   "\x1B[48m"                 // verified.                       // verified.     Next args are 5;n or 2;r;g;b
#define CC_DEFAUTL_BACKGROUND_COLOR            "\x1B[49m"                 // verified.                       // verified.     Next args are 5;n or 2;r;g;b
 //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define CC_FRAMED                              "\x1B[51m"                 // Ignored.                        // verified.
#define CC_ENCIRCLED                           "\x1B[52m"                 // Ignored.                        // verified.
#define CC_OVERLINED                           "\x1B[53m"                 // verified.                       // Ignored.
#define CC_NOT_FRAMED_OR_ENCIRCLED             "\x1B[54m"                 // Ignored.                        // Ignored.
#define CC_NOT_OVERLINED                       "\x1B[55m"                 // verified.                       // Ignored.
 //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define IDEOGRAM_UNDERLINE_RIGHT               "\x1B[60m"                 // Ignored.                        // Ignored.
#define IDEOGRAM_DOUBLE_UNDERLINE_RIGHT        "\x1B[61m"                 // Ignored.                        // Ignored.
#define IDEOGRAM_LEFT_SIDE_LINE                "\x1B[62m"                 // Ignored.                        // Ignored.
#define IDEOGRAM_DOUBLE_OVERLINE_LEFT          "\x1B[63m"                 // Ignored.                        // Ignored.
#define IDEOGRAM_STRESS_MARKING                "\x1B[64m"                 // Ignored.                        // Ignored.
#define IDEOGRAM_ARRTIBUTES_OFF                "\x1B[65m"                 // Ignored.                        // Ignored.
 //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define CC_DARK_GREY                           "\x1B[90m"                 // verified.                       // verified.
#define CC_LIGHT_RED                           "\x1B[91m"                 // verified.                       // verified.
#define CC_LIGHT_GREEN                         "\x1B[92m"                 // verified.                       // verified.
#define CC_LIGHT_YELLOW                        "\x1B[93m"                 // verified.                       // verified.
#define CC_LIGHT_BLUE                          "\x1B[94m"                 // verified.                       // verified.
#define CC_LIGHT_MAGENTA                       "\x1B[95m"                 // verified.                       // verified.
#define CC_LIGHT_CYAN                          "\x1B[96m"                 // verified.                       // verified.
#define CC_LIGHT_WHITE                         "\x1B[97m"                 // verified.                       // verified.
 //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define CC_DARK_GREY_BACKGROUND                "\x1B[100m"                // verified.                       // verified.
#define CC_LIGHT_RED_BACKGROUND                "\x1B[101m"                // verified.                       // verified.
#define CC_LIGHT_GREEN_BACKGROUND              "\x1B[102m"                // verified.                       // verified.
#define CC_LIGHT_YELLOW_BACKGROUND             "\x1B[103m"                // verified.                       // verified.
#define CC_LIGHT_BLUE_BACKGROUND               "\x1B[104m"                // verified.                       // verified.
#define CC_LIGHT_MAGENTA_BACKGROUND            "\x1B[105m"                // verified.                       // verified.
#define CC_LIGHT_CYAN_BACKGROUND               "\x1B[106m"                // verified.                       // verified.
#define CC_LIGHT_WHITE_BACKGROUND              "\x1B[107m"                // verified.                       // verified.
 //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 //--------------------------------------------------------------       NON SGR CODES      --------------------------------------------------------------------------------------------------------------
 //                                           ESCAPE CODE.          Ubuntu 18.04 Terminal.               Eclipse IDE console.
 //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define CURSOR_TO_TOP_YX                       "\x1B[5;2"                 // verified.                        // Ignored.        Terminal- "\x1B[5;2" is the proper format. check this one.
#define CURSOR_TO_TOP_YX1                      "\x1B[f"                   // verified.                        // Ignored.        Terminal- "\x1B[5;5f" is the proper format.
#define CURSOR_TO_TOP_YX2                      "\x1B[H"                   // verified.                        // Ignored.        Cursor to home   test"\x1B[5;5H" is the proper format.
#define CLR_FROM_CURSOR_DOWN                   "\x1B[2J"                  // verified.                        // Ignored.
#define CLR_FROM_CURSOR_DOWN2                  "\x1B[0J"                  // verified.                        // Ignored.
#define CLR_FROM_CURSOR_UP                     "\x1B[1J"                  // verified.                        // Ignored.
#define CLR_ENTIRE_SCREEN                      "\x1B[2J"                  // verified.                        // Ignored.
#define CLEAR_SCREEN_BTM_TO_CUR                "\x1B[J"                   // verified.                        // Ignored.
#define CLR_TO_EOL                             "\x1B[K"                   // verified.                        // Ignored.
#define CLR_LINE_TO_RIGHT                      "\x1B[0K"                  // verified.                        // Ignored.        Includes the character the cursor is on.
#define CLR_LINE_TO_LEFT                       "\x1B[1K"                  // verified.                        // Ignored.        Includes the character the cursor is on.
#define CLR_ENTIRE_LINE                        "\x1B[2K"                  // verified.                        // Ignored.
#define CLR_ENTIRE_LINE2                       "\x1B[M"                   // verified.                        // Ignored.
#define INDENT_N_TIMES                         "\x1B[I"                   // verified.                        // Ignored.        Reverse line feed takes params, think its indent no eclipse
#define SAVE_CURSOR_POSITION                   "\x1B[s"                   // verified.                        // Ignored.
#define RESTORE_CURSOR_POSITION                "\x1B[u"                   // verified.                        // Ignored.
#define QUERRY_TERM_TYPE                       "\x1BZ"                    // verified.                        // Ignored.        IDENTIFIES TERMINAL TYPE WITH a escape sequence.
 //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define CURSOR_UP                              "\x1B[1A"                  // verified.                        // Ignored.
#define CURSOR_DOWN                            "\x1B[1B"                  // verified.                        // Ignored.
#define CURSOR_RIGHT                           "\x1B[1C"                  // verified.                        // Ignored.
#define CURSOR_LEFT                            "\x1B[1D"                  // verified.                        // Ignored.
#define SCROLL_DOWN_N_LINES                    "\x1B[1S"                  // verified.                        // Ignored.
#define SCROLL_UP_N_LINES                      "\x1B[1T"                  // verified.                        // Ignored.
#define SCROLL_DOWN_N_LINES                    "\x1B[1S"                  // verified.                        // Ignored.
#define SCROLL_UP_N_LINES                      "\x1B[1T"                  // verified.                        // Ignored.
 //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define ADD_CR_TO_ECHO_ON                      "\x1B[20h"                 // verified.                        // Ignored.        LF/NL (default off): Automatically follow echo of LF, VT or FF with CR.  YESUB NOEC
#define ADD_CR_TO_ECHO_OFF                     "\x1B[20l"                 // verified.                        // Ignored.        LF/NL (default off): Automatically follow echo of LF, VT or FF with CR.  YESUB NOEC
#define REVERSE_VIDEO_ON                       "\x1B[?5h"                 // verified.                        // Ignored.        Sets reverse video mode  YES_UB NO_ECLIPSE
#define REVERSE_VIDEO_OFF                      "\x1B[?5l"                 // verified.                        // Ignored.        Turns off reverse video mode  YES_UB NO_ECLIPSE
#define KEYBOARD_REPEAT_ON                     "\x1B[?8h"                 // Ignored.                         // Ignored.        Keyboard auto-repeat on/off  NO_UB NO_ECLIPSE
#define KEYBOARD_REPEAT_OFF                    "\x1B[?8l"                 // Ignored.                         // Ignored.        Keyboard auto-repeat on/off  NO_UB NO_ECLIPSE
#define MOUSE_REPORTING_ON                     "\x1B[?9h"                 // verified.                        // Ignored.        Mouse reporting  YES_UB NO_ECLIPSE
#define MOUSE_REPORTING_FF                     "\x1B[?9l"                 // verified.                        // Ignored.        Mouse reporting  YES_UB NO_ECLIPSE
#define HIDE_CURSOR                            "\x1B[?25h"                // verified.                        // Ignored.        h,l h is on l is off : make cursor invisible YES_UB NO_ECLIPSE
#define UNHIDE_CURSOR                          "\x1B[?25l"                // verified.                        // Ignored.        h,l h is on l is off : make cursor invisible YES_UB NO_ECLIPSE

 // #define "\x1B[5n" ) ; // LF/NL (default off): Automatically follow echo of LF, VT or FF with CR.  NO_UB NO_EC
 // #define "\x1B[6n" ) ; // suppose to report x,y , but only reports columns NO_UB NO_ECL
 //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 //                                                                 MACROS FOR FPRINTF
 //                                USAGE: ex To make a green integer: GRN_INT( "PROMPT:" , integer_variable )
 //                                OUTPUT on STDERR:  PROMPT: VALUE.OF.INT.IN.GREEN.TEXT
 //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//#define REV "\x1b[7m"
//#define NRM "\x1b[1m\x1B[0m"
//#define BLK "\x1b[1m\x1B[30m"
//#define RED "\x1b[1m\x1B[31m"
//#define GRN "\x1b[1m\x1B[32m"
//#define YEL "\x1b[1m\x1B[33m"
//#define BLU "\x1b[1m\x1B[34m"
//#define MAG "\x1b[1m\x1B[35m"
//#define CYN "\x1b[1m\x1B[36m"
//#define WHT "\x1b[1m\x1B[37m"

#define CC_SBC_BLK    "\x1B[40m" // Next arguments are 5;n or 2;r;g;b, see below
#define CC_NORM       "\x1B[0m"
#define CC_BRT        "\x1b[1m"
#define CC_BLK        "\x1B[30m"
#define CC_RED        "\x1B[31m"
#define CC_GRN        "\x1B[32m"
#define CC_YEL        "\x1B[33m"
#define CC_BLU        "\x1B[34m"
#define CC_MAG        "\x1B[35m"
#define CC_CYN        "\x1B[36m"
#define CC_WHT        "\x1B[37m"
#define CC_UDL        "\x1b[4m"
#define CC_UDLO       "\x1B[24m"



#define _black_int    "%s\x1b[1m\x1B[30m%d\x1B[0m"
#define _red_int      "%s\x1b[1m\x1B[31m%d\x1B[0m"
#define _green_int    "%s\x1b[1m\x1B[32m%d\x1B[0m"
#define _yellow_int   "%s\x1b[1m\x1B[33m%d\x1B[0m"
#define _blue_int     "%s\x1b[1m\x1B[34m%d\x1B[0m"
#define _magenta_int  "%s\x1b[1m\x1B[35m%d\x1B[0m"
#define _cyan_int     "%s\x1b[1m\x1B[36m%d\x1B[0m"
#define _white_int    "%s\x1b[1m\x1B[37m%d\x1B[0m"

#define BLK_INT( prompt , variable ) fprintf( stderr , _black_int , (prompt) , (variable) )
#define RED_INT( prompt , variable ) fprintf( stderr , _red_int , (prompt) , (variable) )
#define GRN_INT( prompt , variable ) fprintf( stderr , _green_int , (prompt) , (variable) )
#define YEL_INT( prompt , variable ) fprintf( stderr , _yellow_int , (prompt) , (variable) )
#define BLU_INT( prompt , variable ) fprintf( stderr , _blue_int , (prompt) , (variable) )
#define MAG_INT( prompt , variable ) fprintf( stderr , _magenta_int , (prompt) , (variable) )
#define CYN_INT( prompt , variable ) fprintf( stderr , _cyan_int , (prompt) , (variable) )
#define WHT_INT( prompt , variable ) fprintf( stderr , _white_int , (prompt) , (variable) )

#define _black_char     "%s\x1b[1m\x1B[30m%c\x1B[0m"
#define _red_char       "%s\x1b[1m\x1B[31m%c\x1B[0m"
#define _green_char     "%s\x1b[1m\x1B[32m%c\x1B[0m"
#define _yellow_char    "%s\x1b[1m\x1B[33m%c\x1B[0m"
#define _blue_char      "%s\x1b[1m\x1B[34m%c\x1B[0m"
#define _magenta_char   "%s\x1b[1m\x1B[35m%c\x1B[0m"
#define _cyan_char      "%s\x1b[1m\x1B[36m%c\x1B[0m"
#define _white_char     "%s\x1b[1m\x1B[37m%c\x1B[0m"

#define BLK_CHR( prompt , variable ) fprintf( stderr , _black_char , (prompt) , (variable) )
#define RED_CHR( prompt , variable ) fprintf( stderr , _red_char , (prompt) , (variable) )
#define GRN_CHR( prompt , variable ) fprintf( stderr , _green_char , (prompt) , (variable) )
#define YEL_CHR( prompt , variable ) fprintf( stderr , _yellow_char , (prompt) , (variable) )
#define BLU_CHR( prompt , variable ) fprintf( stderr , _blue_char , (prompt) , (variable) )
#define MAG_CHR( prompt , variable ) fprintf( stderr , _magenta_char , (prompt) , (variable) )
#define CYN_CHR( prompt , variable ) fprintf( stderr , _cyan_char , (prompt) , (variable) )
#define WHT_CHR( prompt , variable ) fprintf( stderr , _white_char , (prompt) , (variable) )

#define _black_float     "%s\x1b[1m\x1B[30m%f\x1B[0m"
#define _red_float       "%s\x1b[1m\x1B[31m%f\x1B[0m"
#define _green_float     "%s\x1b[1m\x1B[32m%f\x1B[0m"
#define _yellow_float    "%s\x1b[1m\x1B[33m%f\x1B[0m"
#define _blue_float      "%s\x1b[1m\x1B[34m%f\x1B[0m"
#define _magenta_float   "%s\x1b[1m\x1B[35m%f\x1B[0m"
#define _cyan_float      "%s\x1b[1m\x1B[36m%f\x1B[0m"
#define _white_float     "%s\x1b[1m\x1B[37m%f\x1B[0m"

#define BLK_FLT( prompt , variable ) fprintf( stderr , _black_float , (prompt) , (variable) )
#define RED_FLT( prompt , variable ) fprintf( stderr , _red_float , (prompt) , (variable) )
#define GRN_FLT( prompt , variable ) fprintf( stderr , _green_float , (prompt) , (variable) )
#define YEL_FLT( prompt , variable ) fprintf( stderr , _yellow_float , (prompt) , (variable) )
#define BLU_FLT( prompt , variable ) fprintf( stderr , _blue_float , (prompt) , (variable) )
#define MAG_FLT( prompt , variable ) fprintf( stderr , _magenta_float , (prompt) , (variable) )
#define CYN_FLT( prompt , variable ) fprintf( stderr , _cyan_float , (prompt) , (variable) )
#define WHT_FLT( prompt , variable ) fprintf( stderr , _white_float , (prompt) , (variable) )

#define _black_pointer      "%s\x1b[1m\x1B[30m%p\x1B[0m"
#define _red_pointer        "%s\x1b[1m\x1B[31m%p\x1B[0m"
#define _green_pointer      "%s\x1b[1m\x1B[32m%p\x1B[0m"
#define _yellow_pointer     "%s\x1b[1m\x1B[33m%p\x1B[0m"
#define _blue_pointer       "%s\x1b[1m\x1B[34m%p\x1B[0m"
#define _magenta_pointer    "%s\x1b[1m\x1B[35m%p\x1B[0m"
#define _cyan_pointer       "%s\x1b[1m\x1B[36m%p\x1B[0m"
#define _white_pointer      "%s\x1b[1m\x1B[37m%p\x1B[0m"

#define BLK_PNT( prompt , variable ) fprintf( stderr , _black_pointer , (prompt) , (variable) )
#define RED_PNT( prompt , variable ) fprintf( stderr , _red_pointer , (prompt) , (variable) )
#define GRN_PNT( prompt , variable ) fprintf( stderr , _green_pointer , (prompt) , (variable) )
#define YEL_PNT( prompt , variable ) fprintf( stderr , _yellow_pointer , (prompt) , (variable) )
#define BLU_PNT( prompt , variable ) fprintf( stderr , _blue_pointer , (prompt) , (variable) )
#define MAG_PNT( prompt , variable ) fprintf( stderr , _magenta_pointer , (prompt) , (variable) )
#define CYN_PNT( prompt , variable ) fprintf( stderr , _cyan_pointer , (prompt) , (variable) )
#define WHT_PNT( prompt , variable ) fprintf( stderr , _white_pointer , (prompt) , (variable) )

#define _black_string      "%s\x1b[1m\x1B[30m%s\x1B[0m"
#define _red_string        "%s\x1b[1m\x1B[31m%s\x1B[0m"
#define _green_string      "%s\x1b[1m\x1B[32m%s\x1B[0m"
#define _yellow_string     "%s\x1b[1m\x1B[33m%s\x1B[0m"
#define _blue_string       "%s\x1b[1m\x1B[34m%s\x1B[0m"
#define _magenta_string    "%s\x1b[1m\x1B[35m%s\x1B[0m"
#define _cyan_string       "%s\x1b[1m\x1B[36m%s\x1B[0m"
#define _white_string      "%s\x1b[1m\x1B[37m%s\x1B[0m"

#define BLK_STR( prompt , variable ) fprintf( stderr , _black_string , (prompt) , (variable) )
#define RED_STR( prompt , variable ) fprintf( stderr , _red_string , (prompt) , (variable) )
#define GRN_STR( prompt , variable ) fprintf( stderr , _green_string , (prompt) , (variable) )
#define YEL_STR( prompt , variable ) fprintf( stderr , _yellow_string , (prompt) , (variable) )
#define BLU_STR( prompt , variable ) fprintf( stderr , _blue_string , (prompt) , (variable) )
#define MAG_STR( prompt , variable ) fprintf( stderr , _magenta_string , (prompt) , (variable) )
#define CYN_STR( prompt , variable ) fprintf( stderr , _cyan_string , (prompt) , (variable) )
#define WHT_STR( prompt , variable ) fprintf( stderr , _white_string , (prompt) , (variable) )

#define _black_short     "%s\x1b[1m\x1B[30m%u\x1B[0m"
#define _red_short       "%s\x1b[1m\x1B[31m%u\x1B[0m"
#define _green_short     "%s\x1b[1m\x1B[32m%u\x1B[0m"
#define _yellow_short    "%s\x1b[1m\x1B[33m%u\x1B[0m"
#define _blue_short      "%s\x1b[1m\x1B[34m%u\x1B[0m"
#define _magenta_short   "%s\x1b[1m\x1B[35m%u\x1B[0m"
#define _cyan_short      "%s\x1b[1m\x1B[36m%u\x1B[0m"
#define _white_short     "%s\x1b[1m\x1B[37m%u\x1B[0m"

#define BLK_SHT( prompt , variable ) fprintf( stderr , _black_short , (prompt) , (variable) )
#define RED_SHT( prompt , variable ) fprintf( stderr , _red_short , (prompt) , (variable) )
#define GRN_SHT( prompt , variable ) fprintf( stderr , _green_short , (prompt) , (variable) )
#define YEL_SHT( prompt , variable ) fprintf( stderr , _yellow_short , (prompt) , (variable) )
#define BLU_SHT( prompt , variable ) fprintf( stderr , _blue_short , (prompt) , (variable) )
#define MAG_SHT( prompt , variable ) fprintf( stderr , _magenta_short , (prompt) , (variable) )
#define CYN_SHT( prompt , variable ) fprintf( stderr , _cyan_short , (prompt) , (variable) )
#define WHT_SHT( prompt , variable ) fprintf( stderr , _white_short , (prompt) , (variable) )

#define _black_long_int      "%s\x1b[1m\x1B[30m%ld\x1B[0m"
#define _red_long_int        "%s\x1b[1m\x1B[31m%ld\x1B[0m"
#define _green_long_int      "%s\x1b[1m\x1B[32m%ld\x1B[0m"
#define _yellow_long_int     "%s\x1b[1m\x1B[33m%ld\x1B[0m"
#define _blue_long_int       "%s\x1b[1m\x1B[34m%ld\x1B[0m"
#define _magenta_long_int    "%s\x1b[1m\x1B[35m%ld\x1B[0m"
#define _cyan_long_int       "%s\x1b[1m\x1B[36m%ld\x1B[0m"
#define _white_long_int      "%s\x1b[1m\x1B[37m%ld\x1B[0m"

#define BLK_LINT( prompt , variable ) fprintf( stderr , _black_long_int , (prompt) , (variable) )
#define RED_LINT( prompt , variable ) fprintf( stderr , _red_long_int , (prompt) , (variable) )
#define GRN_LINT( prompt , variable ) fprintf( stderr , _green_long_int , (prompt) , (variable) )
#define YEL_LINT( prompt , variable ) fprintf( stderr , _yellow_long_int , (prompt) , (variable) )
#define BLU_LINT( prompt , variable ) fprintf( stderr , _blue_long_int , (prompt) , (variable) )
#define MAG_LINT( prompt , variable ) fprintf( stderr , _magenta_long_int , (prompt) , (variable) )
#define CYN_LINT( prompt , variable ) fprintf( stderr , _cyan_long_int , (prompt) , (variable) )
#define WHT_LINT( prompt , variable ) fprintf( stderr , _white_long_int , (prompt) , (variable) )

