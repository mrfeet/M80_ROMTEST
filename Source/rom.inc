; Compile options

; ASCII 16K Mapper
BNKADR4	EQU	06000H  ; Mapper address for page in 4000H-7FFFH
BNKADR8	EQU	07000H  ; Mapper address for page in 8000H-BFFFH

PAGESIZE EQU 4000h

ASCII_CR EQU    13
ASCII_LF EQU    10

; Switch the bank for the 4000-7FFF range
BNKCHG4	MACRO
	LD	(BNKADR4),A
	ENDM

; Switch the bank for the 8000-BFFF range
BNKCHG8	MACRO
	LD	(BNKADR8),A
	ENDM

; Generate a block of bytes
BYTE_BLOCK MACRO SIZE
    .XLIST
    REPT    SIZE
    DB  0
    ENDM    ; REPT
    .LIST
    ENDM    ; MACRO