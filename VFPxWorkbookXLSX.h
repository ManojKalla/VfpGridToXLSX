#DEFINE CR                               CHR(13)
#DEFINE LF                               CHR(10)
#DEFINE CRLF                             CR+LF
#DEFINE TAB                              CHR(9)
#DEFINE False                            .F.
#DEFINE True                             .T.
#DEFINE FOF_SILENT                       4

#DEFINE LIMITS_MAX_CELL_CHARS            32767
#DEFINE LIMITS_MAX_COLUMNS               16384
#DEFINE LIMITS_MAX_ROWS                  1048576
#DEFINE LIMITS_MAX_ROW_HEIGHT            409
#DEFINE LIMITS_MAX_COLUMN_WIDTH          255
#DEFINE LIMITS_MAX_HDR_FTR_CHARS         255
#DEFINE LIMITS_MAX_CELL_FORMATS          200
#DEFINE LIMITS_MAX_FILL_STYLES           256
#DEFINE LIMITS_MAX_LINE_STYLES           256
#DEFINE LIMITS_MAX_FONTS                 512
#DEFINE LIMITS_MAX_FORMULA_LENGTH        8192
#DEFINE LIMITS_MAX_SH_NAME               31         && Limit adjusted; found by Doug Hennig

#DEFINE INSERT_BEFORE                    "BEFORE"
#DEFINE INSERT_AFTER                     "AFTER"
#DEFINE INSERT_RIGHT                     "RIGHT"
#DEFINE INSERT_LEFT                      "LEFT"

#DEFINE SHIFT_CELLS_UP                   1
#DEFINE SHIFT_CELLS_LEFT                 2

#DEFINE FILTER_OP_EQUAL                  "equal"
#DEFINE FILTER_OP_GREATERTHAN            "greaterThan"
#DEFINE FILTER_OP_GREATOREQUAL           "greaterThanOrEqual"
#DEFINE FILTER_OP_LESSTHAN               "lessThan"
#DEFINE FILTER_OP_LESSOREQUAL            "lessThanOrEqual"
#DEFINE FILTER_OP_NOT_EQUAL              "notEqual"

#DEFINE SHARED_FORMULA_COLUMN            "C"
#DEFINE SHARED_FORMULA_ROW               "R"

#DEFINE START_NUMERIC_FORMAT_ID          165

#DEFINE SCOPE_WB_NAMED_RANGE             0                           && Scope of named range - workbook
#DEFINE SCOPE_SH_NAMED_RANGE             1                           && Scope of named range - limited to sheet

#DEFINE VISIBLE_SHEET_STATE              0                           && visible (default)
#DEFINE HIDDEN_SHEET_STATE               1                           && hidden
#DEFINE VERYHIDDEN_SHEET_STATE           2                           && veryHidden

#DEFINE NONE_VALID_TYPE                  1                           && none    
#DEFINE WHOLE_VALID_TYPE                 2                           && whole  
#DEFINE DECIMAL_VALID_TYPE               3                           && decimal
#DEFINE LIST_VALID_TYPE                  4                           && list 
#DEFINE DATE_VALID_TYPE                  5                           && date
#DEFINE TIME_VALID_TYPE                  6                           && time
#DEFINE TXTLEN_VALID_TYPE                7                           && textLength
#DEFINE CUSTOM_VALID_TYPE                8                           && custom

#DEFINE STOP_VALID_STYLE                 1                           && stop
#DEFINE WARN_VALID_STYLE                 2                           && warning
#DEFINE INFO_VALID_STYLE                 3                           && information

#DEFINE BETWEEN_VALID_OPER               1                           && between
#DEFINE NOTBETW_VALID_OPER               2                           && notBetween
#DEFINE EQUAL_VALID_OPER                 3                           && equal
#DEFINE NOTEQUAL_VALID_OPER              4                           && notEqual
#DEFINE LESSTHAN_VALID_OPER              5                           && lessThan
#DEFINE LESSOREQUAL_VALID_OPER           6                           && lessThanOrEqual
#DEFINE GREATTHAN_VALID_OPER             7                           && greaterThan
#DEFINE GREATOREQUAL_VALID_OPER          8                           && greaterThanOrEqual

#DEFINE PORTRAIT_PRINT_ORIENTATION       1
#DEFINE LANDSCAPE_PRINT_ORIENTATION      2

#DEFINE PAPERSIZE_LTR                    1                           && Letter paper (8.5 in. BY 11 in.)
#DEFINE PAPERSIZE_LTR_SMALL              2                           && Letter small paper (8.5 in. BY 11 in.)
#DEFINE PAPERSIZE_TABLOID                3                           && Tabloid paper (11 in. BY 17 in.)
#DEFINE PAPERSIZE_LEDGER                 4                           && Ledger paper (17 in. BY 11 in.)
#DEFINE PAPERSIZE_LEGAL                  5                           && Legal paper (8.5 in. BY 14 in.)
#DEFINE PAPERSIZE_STATEMENT              6                           && Statement paper (5.5 in. BY 8.5 in.)
#DEFINE PAPERSIZE_EXECUTIVE              7                           && Executive paper (7.25 in. BY 10.5 in.)
#DEFINE PAPERSIZE_A3                     8                           && A3 paper (297 mm BY 420 mm)
#DEFINE PAPERSIZE_A4                     9                           && A4 paper (210 mm BY 297 mm)
#DEFINE PAPERSIZE_A4_SMALL              10                           && A4 small paper (210 mm BY 297 mm)
#DEFINE PAPERSIZE_A5                    11                           && A5 paper (148 mm BY 210 mm)
#DEFINE PAPERSIZE_B4                    12                           && B4 paper (250 mm BY 353 mm)
#DEFINE PAPERSIZE_B5                    13                           && B5 paper (176 mm BY 250 mm)
#DEFINE PAPERSIZE_FOLIO                 14                           && Folio paper (8.5 in. BY 13 in.)
#DEFINE PAPERSIZE_QUARTO                15                           && Quarto paper (215 mm BY 275 mm)
#DEFINE PAPERSIZE_STD10X14              16                           && Standard paper (10 in. BY 14 in.)
#DEFINE PAPERSIZE_STD11X17              17                           && Standard paper (11 in. BY 17 in.)
#DEFINE PAPERSIZE_NOTE                  18                           && NOTE paper (8.5 in. BY 11 in.)
#DEFINE PAPERSIZE_9ENV                  19                           && #9 envelope (3.875 in. BY 8.875 in.)
#DEFINE PAPERSIZE_10ENV                 20                           && #10 envelope (4.125 in. BY 9.5 in.)
#DEFINE PAPERSIZE_11ENV                 21                           && #11 envelope (4.5 in. BY 10.375 in.)
#DEFINE PAPERSIZE_12ENV                 22                           && #12 envelope (4.75 in. BY 11 in.)
#DEFINE PAPERSIZE_14ENV                 23                           && #14 envelope (5 in. BY 11.5 in.)
#DEFINE PAPERSIZE_C                     24                           && C paper (17 in. BY 22 in.)
#DEFINE PAPERSIZE_D                     25                           && D paper (22 in. BY 34 in.)
#DEFINE PAPERSIZE_E                     26                           && E paper (34 in. BY 44 in.)
#DEFINE PAPERSIZE_DL_ENV                27                           && DL envelope (110 mm BY 220 mm)
#DEFINE PAPERSIZE_C5_ENV                28                           && C5 envelope (162 mm BY 229 mm)
#DEFINE PAPERSIZE_C3_ENV                29                           && C3 envelope (324 mm BY 458 mm)
#DEFINE PAPERSIZE_C4_ENV                30                           && C4 envelope (229 mm BY 324 mm)
#DEFINE PAPERSIZE_C6_ENV                31                           && C6 envelope (114 mm BY 162 mm)
#DEFINE PAPERSIZE_C65_ENV               32                           && C65 envelope (114 mm BY 229 mm)
#DEFINE PAPERSIZE_B4_ENV                33                           && B4 envelope (250 mm BY 353 mm)
#DEFINE PAPERSIZE_B5_ENV                34                           && B5 envelope (176 mm BY 250 mm)
#DEFINE PAPERSIZE_B6_ENV                35                           && B6 envelope (176 mm BY 125 mm)
#DEFINE PAPERSIZE_ITALY_ENV             36                           && Italy envelope (110 mm BY 230 mm)
#DEFINE PAPERSIZE_MONARCH_ENV           37                           && Monarch envelope (3.875 in. BY 7.5 in.).
#DEFINE PAPERSIZE_6_3_4_ENV             38                           && 6 3/4 envelope (3.625 in. BY 6.5 in.)
#DEFINE PAPERSIZE_US_STD_FANFOLD        39                           && US standard fanfold (14.875 in. BY 11 in.)
#DEFINE PAPERSIZE_GERMAN_STD_FANFOLD    40                           && German standard fanfold (8.5 in. BY 12 in.)
#DEFINE PAPERSIZE_GERMAN_LGL_FANFOLD    41                           && German legal fanfold (8.5 in. BY 13 in.)
#DEFINE PAPERSIZE_ISO_B4                42                           && ISO B4 (250 mm BY 353 mm)
#DEFINE PAPERSIZE_JPN_DBL_POSTCARD      43                           && JPN DOUBLE postcard (200 mm BY 148 mm)
#DEFINE PAPERSIZE_STD_PAPER9X11         44                           && Standard paper (9 in. BY 11 in.)
#DEFINE PAPERSIZE_STD_PAPER10X11        45                           && Standard paper (10 in. BY 11 in.)
#DEFINE PAPERSIZE_STD_PAPER15X11        46                           && Standard paper (15 in. BY 11 in.)
#DEFINE PAPERSIZE_INVITE_ENV            47                           && Invite envelope (220 mm BY 220 mm)
#DEFINE PAPERSIZE_LTR_XTRA_PAPER        50                           && Letter extra paper (9.275 in. BY 12 in.)
#DEFINE PAPERSIZE_LEGAL_XTRA_PAPER      51                           && Legal extra paper (9.275 in. BY 15 in.)
#DEFINE PAPERSIZE_TABLOID_XTRA_PAPER    52                           && Tabloid extra paper (11.69 in. BY 18 in.)
#DEFINE PAPERSIZE_A4_XTRA_PAPER         53                           && A4 extra paper (236 mm BY 322 mm)
#DEFINE PAPERSIZE_LTR_TRANSVERSE        54                           && Letter transverse paper (8.275 in. BY 11 in.)
#DEFINE PAPERSIZE_A4_TRANSVERSE         55                           && A4 transverse paper (210 mm BY 297 mm)
#DEFINE PAPERSIZE_LTR_XTRA_TRANSV       56                           && Letter extra transverse paper (9.275 in. BY 12 in.)
#DEFINE PAPERSIZE_SUPERA_A4             57                           && SuperA/SuperA/A4 paper (227 mm BY 356 mm)
#DEFINE PAPERSIZE_SUPERB_A3             58                           && SuperB/SuperB/A3 paper (305 mm BY 487 mm)
#DEFINE PAPERSIZE_LTR_PLUS              59                           && Letter plus paper (8.5 in. BY 12.69 in.)
#DEFINE PAPERSIZE_A4_PLUS               60                           && A4 plus paper (210 mm BY 330 mm)
#DEFINE PAPERSIZE_A5_TRANSVERSE         61                           && A5 transverse paper (148 mm BY 210 mm)
#DEFINE PAPERSIZE_JIS_B5_TRANSVERS      62                           && JIS B5 transverse paper (182 mm BY 257 mm)
#DEFINE PAPERSIZE_A3_EXTRA              63                           && A3 extra paper (322 mm BY 445 mm)
#DEFINE PAPERSIZE_A5_EXTRA              64                           && A5 extra paper (174 mm BY 235 mm)
#DEFINE PAPERSIZE_ISO_B5_EXTRA          65                           && ISO B5 extra paper (201 mm BY 276 mm)
#DEFINE PAPERSIZE_A2                    66                           && A2 paper (420 mm BY 594 mm)
#DEFINE PAPERSIZE_A3_TRANSVERSE         67                           && A3 transverse paper (297 mm BY 420 mm)
#DEFINE PAPERSIZE_A3_EXTRA_TRANSVE      68                           && A3 extra transverse paper (322 mm BY 445 mm)
#DEFINE PAPERSIZE_JPN_DOUBLE            69                           && JPN DOUBLE Postcard (200 mm x 148 mm)
#DEFINE PAPERSIZE_A6                    70                           && A6 (105 mm x 148 mm)
#DEFINE PAPERSIZE_JPN_ENV_KAKU1         71                           && JPN Envelope Kaku #2
#DEFINE PAPERSIZE_JPN_ENV_KAKU2         72                           && JPN Envelope Kaku #3 
#DEFINE PAPERSIZE_JPN_ENV_CHOU3         73                           && JPN Envelope Chou #3 
#DEFINE PAPERSIZE_JPN_ENV_CHOU4         74                           && JPN Envelope Chou #4 
#DEFINE PAPERSIZE_LTR_ROT               75                           && Letter Rotated (11in x 8 1/2 11 IN) 
#DEFINE PAPERSIZE_A3_ROT                76                           && A3 Rotated (420 mm x 297 mm) 
#DEFINE PAPERSIZE_A4_ROT                77                           && A4 Rotated (297 mm x 210 mm) 
#DEFINE PAPERSIZE_A5_ROT                78                           && A5 Rotated (210 mm x 148 mm) 
#DEFINE PAPERSIZE_B4_JIS_ROT            79                           && B4 (JIS) Rotated (364 mm x 257 mm) 
#DEFINE PAPERSIZE_B5_JIS_ROT            80                           && B5 (JIS) Rotated (257 mm x 182 mm) 
#DEFINE PAPERSIZE_JPN_POSTCARD          81                           && JPN Postcard Rotated (148 mm x 100 mm) 
#DEFINE PAPERSIZE_DOUBLE_JPN            82                           && DOUBLE JPN Postcard Rotated (148 mm x 200 mm) 
#DEFINE PAPERSIZE_A6_ROT                83                           && A6 Rotated (148 mm x 105 mm) 
#DEFINE PAPERSIZE_JPN_ENV_KAKU2_ROT     84                           && JPN Envelope Kaku #2 Rotated 
#DEFINE PAPERSIZE_JPN_ENV_KAKU3_ROT     85                           && JPN Envelope Kaku #3 Rotated 
#DEFINE PAPERSIZE_JPN_ENV_CHOU3_ROT     86                           && JPN Envelope Chou #3 Rotated 
#DEFINE PAPERSIZE_JPN_ENV_CHOU4_ROT     87                           && JPN Envelope Chou #4 Rotated 
#DEFINE PAPERSIZE_B6_JIS                88                           && B6 (JIS) (128 mm x 182 mm) 
#DEFINE PAPERSIZE_B6_JIS_ROT            89                           && B6 (JIS) Rotated (182 mm x 128 mm) 
#DEFINE PAPERSIZE_12X11                 90                           && (12 IN x 11 IN) 
#DEFINE PAPERSIZE_JPN_ENV_YOU4          91                           && JPN Envelope You #4 
#DEFINE PAPERSIZE_JPN_ENV_YOU4_ROT      92                           && JPN Envelope You #4 Rotated 
#DEFINE PAPERSIZE_PRC_16K               93                           && PRC 16K (146 mm x 215 mm) 
#DEFINE PAPERSIZE_PRC_32K               94                           && PRC 32K (97 mm x 151 mm) 
#DEFINE PAPERSIZE_PRC_32K_BIG           95                           && PRC 32K(Big) (97 mm x 151 mm) 
#DEFINE PAPERSIZE_PRC_ENV_1             96                           && PRC Envelope #1 (102 mm x 165 mm) 
#DEFINE PAPERSIZE_PRC_ENV_2             97                           && PRC Envelope #2 (102 mm x 176 mm) 
#DEFINE PAPERSIZE_PRC_ENV_3             98                           && PRC Envelope #3 (125 mm x 176 mm) 
#DEFINE PAPERSIZE_PRC_ENV_4             99                           && PRC Envelope #4 (110 mm x 208 mm) 
#DEFINE PAPERSIZE_PRC_ENV_5            100                           && PRC Envelope #5 (110 mm x 220 mm) 
#DEFINE PAPERSIZE_PRC_ENV_6            101                           && PRC Envelope #6 (120 mm x 230 mm) 
#DEFINE PAPERSIZE_PRC_ENV_7            102                           && PRC Envelope #7 (160 mm x 230 mm) 
#DEFINE PAPERSIZE_PRC_ENV_8            103                           && PRC Envelope #8 (120 mm x 309 mm) 
#DEFINE PAPERSIZE_PRC_ENV_9            104                           && PRC Envelope #9 (229 mm x 324 mm) 
#DEFINE PAPERSIZE_PRC_ENV_10           105                           && PRC Envelope #10 (324 mm x 458 mm) 
#DEFINE PAPERSIZE_PRC_16K_ROT          106                           && PRC 16K Rotated 
#DEFINE PAPERSIZE_PRC_32K_ROT          107                           && PRC 32K Rotated 
#DEFINE PAPERSIZE_PRC_32K_BIG_ROT      108                           && PRC 32K(Big) Rotated 
#DEFINE PAPERSIZE_PRC_ENV_1_ROT        109                           && PRC Envelope #1 Rotated (165 mm x 102 mm) 
#DEFINE PAPERSIZE_PRC_ENV_2_ROT        110                           && PRC Envelope #2 Rotated (176 mm x 102 mm) 
#DEFINE PAPERSIZE_PRC_ENV_3_ROT        111                           && PRC Envelope #3 Rotated (176 mm x 125 mm) 
#DEFINE PAPERSIZE_PRC_ENV_4_ROT        112                           && PRC Envelope #4 Rotated (208 mm x 110 mm) 
#DEFINE PAPERSIZE_PRC_ENV_5_ROT        113                           && PRC Envelope #5 Rotated (220 mm x 110 mm) 
#DEFINE PAPERSIZE_PRC_ENV_6_ROT        114                           && PRC Envelope #6 Rotated (230 mm x 120 mm) 
#DEFINE PAPERSIZE_PRC_ENV_7_ROT        115                           && PRC Envelope #7 Rotated (230 mm x 160 mm) 
#DEFINE PAPERSIZE_PRC_ENV_8_ROT        116                           && PRC Envelope #8 Rotated (309 mm x 120 mm) 
#DEFINE PAPERSIZE_PRC_ENV_9_ROT        117                           && PRC Envelope #9 Rotated (324 mm x 229 mm) 
#DEFINE PAPERSIZE_PRC_ENV_10_ROT       118                           && PRC Envelope #10 Rotated (458 mm x 324 mm) 

#DEFINE HEADERFOOTER_SECT_HDR_LEFT            1
#DEFINE HEADERFOOTER_SECT_HDR_CENTER          2
#DEFINE HEADERFOOTER_SECT_HDR_RIGHT           3
#DEFINE HEADERFOOTER_SECT_FTR_LEFT            4
#DEFINE HEADERFOOTER_SECT_FTR_CENTER          5
#DEFINE HEADERFOOTER_SECT_FTR_RIGHT           6
#DEFINE HEADERFOOTER_FONT_STYLE_NORMAL        0
#DEFINE HEADERFOOTER_FONT_STYLE_BOLD          1
#DEFINE HEADERFOOTER_FONT_STYLE_ITALIC        2
#DEFINE HEADERFOOTER_FONT_STYLE_BOLDITALIC    3
#DEFINE HEADERFOOTER_FIRST_PAGE               0
#DEFINE HEADERFOOTER_ODD_PAGE                 1
#DEFINE HEADERFOOTER_EVEN_PAGE                2
#DEFINE HEADERFOOTER_SAME_PAGE                3

#DEFINE HYPERLINK_TYPE_FILE              "F"
#DEFINE HYPERLINK_TYPE_SHEET             "S"

#DEFINE DATA_TYPE_NONE                   "X"
#DEFINE DATA_TYPE_DATE                   "D"
#DEFINE DATA_TYPE_DATETIME               "T"
#DEFINE DATA_TYPE_CHAR                   "C"
#DEFINE DATA_TYPE_INT                    "I"
#DEFINE DATA_TYPE_FLOAT                  "N"
#DEFINE DATA_TYPE_CURRENCY               "Y"
#DEFINE DATA_TYPE_GENERAL                "G"
#DEFINE DATA_TYPE_FORMULA                "F"
#DEFINE DATA_TYPE_TIME                   "Z"
#DEFINE DATA_TYPE_PERCENT                "P"
#DEFINE DATA_TYPE_LOGICAL                "L"
#DEFINE DATA_TYPE_VCHAR                  "V"

#DEFINE FIELD_TYPE_DATE                  "D"
#DEFINE FIELD_TYPE_DATETIME              "T"
#DEFINE FIELD_TYPE_CHAR                  "C"
#DEFINE FIELD_TYPE_INT                   "I"
#DEFINE FIELD_TYPE_FLOAT                 "F"
#DEFINE FIELD_TYPE_CURRENCY              "Y"
#DEFINE FIELD_TYPE_LOGICAL               "L"
#DEFINE FIELD_TYPE_DOUBLE                "B"
#DEFINE FIELD_TYPE_MEMO                  "M"
#DEFINE FIELD_TYPE_NUMERIC               "N"
#DEFINE FIELD_TYPE_VCHAR                 "V"

#DEFINE BORDER_LEFT                      1
#DEFINE BORDER_RIGHT                     2
#DEFINE BORDER_TOP                       4
#DEFINE BORDER_BOTTOM                    8
#DEFINE BORDER_DIAGDOWN                 16
#DEFINE BORDER_DIAGUP                   32

#DEFINE BORDER_STYLE_NONE				"none"
#DEFINE BORDER_STYLE_THIN				"thin"
#DEFINE BORDER_STYLE_HAIR				"hair"
#DEFINE BORDER_STYLE_DOTTED				"dotted"
#DEFINE BORDER_STYLE_DASHDOTDOT			"dashDotDot"
#DEFINE BORDER_STYLE_DASHDOT			"dashDot"
#DEFINE BORDER_STYLE_DASHED				"dashed"
#DEFINE BORDER_STYLE_MEDIUMDASHDOTDOT	"mediumDashDotDot"
#DEFINE BORDER_STYLE_SLANTDASHDOT		"slantDashDot"
#DEFINE BORDER_STYLE_MEDIUMDASHDOT		"mediumDashDot"
#DEFINE BORDER_STYLE_MEDIUMDASHED		"mediumDashed"
#DEFINE BORDER_STYLE_MEDIUM				"medium"
#DEFINE BORDER_STYLE_THICK				"thick"
#DEFINE BORDER_STYLE_DOUBLE				"double"

#DEFINE FILL_STYLE_NONE		  		    "none"
#DEFINE FILL_STYLE_SOLID	  		    "solid"
#DEFINE FILL_STYLE_GRAY125              "gray125"

#DEFINE CELL_HORIZ_ALIGN_LEFT           "left"
#DEFINE CELL_HORIZ_ALIGN_RIGHT          "right"
#DEFINE CELL_HORIZ_ALIGN_CENTER         "center"
#DEFINE CELL_VERT_ALIGN_TOP             "top"
#DEFINE CELL_VERT_ALIGN_BOTTOM          "bottom"
#DEFINE CELL_VERT_ALIGN_CENTER          "center"

#DEFINE UNDERLINE_SINGLE				"single"
#DEFINE UNDERLINE_DOUBLE				"double"
#DEFINE UNDERLINE_SINGLEACCOUNTING		"singleAccounting"
#DEFINE UNDERLINE_DOUBLEACCOUNTING		"doubleAccounting"
#DEFINE UNDERLINE_NONE					"none"

#DEFINE FONT_VERTICAL_BASELINE			"baseline"
#DEFINE FONT_VERTICAL_SUBSCRIPT			"subscript"
#DEFINE FONT_VERTICAL_SUPERSCRIPT		"superscript"

#DEFINE CELL_FORMAT_INTEGER                     1    && 0
#DEFINE CELL_FORMAT_FLOAT                       2    && 0.00
#DEFINE CELL_FORMAT_COMMA_INTEGER               3    && #,##0
#DEFINE CELL_FORMAT_COMMA_FLOAT                 4    && #,##0.00
#DEFINE CELL_FORMAT_CURRENCY_PAREN              7    && $#,##0.00;($#,##0.00)
#DEFINE CELL_FORMAT_CURRENCY_RED_PAREN          8    && $#,##0.00;[Red]($#,##0.00)
#DEFINE CELL_FORMAT_PERCENT_INTEGER             9    && ###%
#DEFINE CELL_FORMAT_PERCENT_FLOAT              10    && ###.00%
#DEFINE CELL_FORMAT_EXPONENT                   11    && 0.00E+00
#DEFINE CELL_FORMAT_FRACTION_1                 12    && # ?/?
#DEFINE CELL_FORMAT_FRACTION_2                 13    && # ??/??
#DEFINE CELL_FORMAT_DATE_MMDDYY                14    && mm-dd-yy
#DEFINE CELL_FORMAT_DATE_DMMMYY                15    && d-mmm-yy
#DEFINE CELL_FORMAT_DATE_DMMM                  16    && d-mmm
#DEFINE CELL_FORMAT_DATE_MMMYY                 17    && mmm-yy
#DEFINE CELL_FORMAT_TIME_HMMAMPM               18    && h:mm AM/PM
#DEFINE CELL_FORMAT_TIME_HMMSSAMPM             19    && h:mm:ss AM/PM
#DEFINE CELL_FORMAT_TIME_HMM                   20    && h:mm
#DEFINE CELL_FORMAT_TIME_HMMSS                 21    && h:mm:ss
#DEFINE CELL_FORMAT_DATETIME_MDYYHMM           22    && m/d/yy h:mm
#DEFINE CELL_FORMAT_DATETIME_DDMMMYYYY_TTAM    29    && [$-409]dd/mmm/yyyy\ h:mm\ AM/PM;@
#DEFINE CELL_FORMAT_DATETIME_DDMMMYYYY_TT24    30    && dd/mmm/yyyy\ h:mm;@
#DEFINE CELL_FORMAT_DATETIME_MMMDDYYYY_TTAM    31    && [$-409]mmm\ d\,\ yyyy\ h:mm\ AM/PM;@
#DEFINE CELL_FORMAT_DATETIME_MMMDDYYYY_TT24    32    && [$-409]mmm\ d\,\ yyyy\ h:mm;@
#DEFINE CELL_FORMAT_DATETIME_MDYY_TTAM         33    && m/d/yy\ h:mm\ AM/PM;@
#DEFINE CELL_FORMAT_DATETIME_MDYY_TT24         34    && m/d/yy\ h:mm;@
#DEFINE CELL_FORMAT_COMMA_INTEGER_PAREN        37    && #,##0;(#,##0)
#DEFINE CELL_FORMAT_COMMA_INTEGER_RED_PAREN    38    && #,##0;[Red](#,##0)
#DEFINE CELL_FORMAT_COMMA_FLOAT_PAREN          39    && #,##0.00;(#,##0.00)
#DEFINE CELL_FORMAT_COMMA_FLOAT_RED_PAREN      40    && #,##0.00;[Red](#,##0.00)
#DEFINE CELL_FORMAT_ACC_CURR_US_PAREN          44    && _("$"* #,##0.00_)
#DEFINE CELL_FORMAT_TIME_MMSS                  45    && mm:ss
#DEFINE CELL_FORMAT_TIME_H_MMSS                46    && [h]:mm:ss
#DEFINE CELL_FORMAT_TEXT                       49    && Text
#DEFINE CELL_FORMAT_CURRENCY_RED              901    && $#,##0.00;[Red]$#,##0.00
#DEFINE CELL_FORMAT_ACC_CURR_POUNDS           902    && Accounting British Pounds, £#,##0.00
#DEFINE CELL_FORMAT_ACC_CURR_EURO             903    && Accounting Euro, €#,##0.00
#DEFINE CELL_FORMAT_CURR_POUNDS_RED           904    && British Pounds, £#,##0.00 RED
#DEFINE CELL_FORMAT_CURR_EURO_RED             905    && Euro, €#,##0.00 RED

#DEFINE RELS_SRC_WORKBOOK                    "W"
#DEFINE RELS_SRC_SHEET                       "S"
#DEFINE RELS_SRC_DRAWING                     "D"

#DEFINE RELS_TYPE_CALCCHAIN                  "C"     && calcChain
#DEFINE RELS_TYPE_DRAWING                    "D"     && drawings
#DEFINE RELS_TYPE_EXTNLINK                   "E"     && externalLink
#DEFINE RELS_TYPE_HYPERLINK                  "H"     && hyperlink
#DEFINE RELS_TYPE_IMAGE                      "I"     && image
#DEFINE RELS_TYPE_SHAREDSTRINGS              "S"     && sharedStrings
#DEFINE RELS_TYPE_STYLES                     "Y"     && styles
#DEFINE RELS_TYPE_THEME                      "T"     && theme
#DEFINE RELS_TYPE_VBAPROJECT                 "V"     && VBA Macros
#DEFINE RELS_TYPE_WORKSHEET                  "W"     && worksheet
#DEFINE RELS_TYPE_UNKNOWN                    "U"     && unknown relationship type

#DEFINE IMAGE_ANCHOR_TYPE_ABS                "A"
#DEFINE IMAGE_ANCHOR_TYPE_ONE                "O"
#DEFINE IMAGE_ANCHOR_TYPE_TWO                "T"

#DEFINE IMAGE_ANCHOR_MOVE_ABS                "absolute"
#DEFINE IMAGE_ANCHOR_MOVE_ONE                "oneCell"
#DEFINE IMAGE_ANCHOR_MOVE_TWO                "twoCell"