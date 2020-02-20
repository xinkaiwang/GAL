    4376
"	VERSION 4.00A			Copyright(C) 1990 Data I/O Corp.
"==============================================================================
" constant.inc
"
Z,C,K,X,U,D,P,H,L = .Z., .C., .K., .X., .U., .D., .P., 1, 0;
TRUE, FALSE = !0, 0;


" E0320.INC

	MISER macro (a) { fuses [2912,2913] = [?a,?a]; };

	TURBO macro (a) { fuses [2914,2915] = [?a,?a]; };


" E0600.INC

	TURBO macro (a) { fuses [6480,6481] = [?a,?a]; };


" E0900.INC

	TURBO macro (a) { fuses [17400,17401] = [?a,?a]; };


" E1800.INC

	MISER_CLK_C macro (a) { fuses 42480 = ?a; };
	MISER_CLK_B macro (a) { fuses 42481 = ?a; };
	MISER_CLK_A macro (a) { fuses 42482 = ?a; };
	MISER_CLK_D macro (a) { fuses 42483 = ?a; };
	MISER_IN_C  macro (a) { fuses 42484 = ?a; };
	MISER_IN_B  macro (a) { fuses 42485 = ?a; };
	MISER_IN_A  macro (a) { fuses 42486 = ?a; };
	MISER_IN_D  macro (a) { fuses 42487 = ?a; };

	TURBO macro (a) { fuses [42488,42489] = [?a,?a]; };

" F6001.INC
SIGNATURE MACRO (string)
{
   @CONST cnt = 1;
   @CONST r1 = 8222;	" First address of signature word
   @IRPC A (?string)
   {
	@IF (cnt > 9) { @MESSAGE 'WORD TOO LONG'; @EXIT;}
   	FUSES [@EXPR r1;..@EXPR (r1+7);] = @EXPR '?A';;
	@CONST  r1 = r1 + 8;
	@CONST	cnt = cnt + 1;
   }
}
" P16V8 Electronic Signature Word
SIGNATURE MACRO (string)
{
   @CONST cnt = 1;
   @CONST r1 = 2056;	" First address of signature word
   @IRPC A (?string)
   {
	@IF (cnt > 8) { @MESSAGE 'WORD TOO LONG'; @EXIT;}
   	FUSES [@EXPR r1;..@EXPR (r1+7);] = @EXPR '?A';;
	@CONST  r1 = r1 + 8;
	@CONST	cnt = cnt + 1;
   }
}
" P16Z8 Electronic Signature Word
SIGNATURE MACRO (string)
{
   @CONST cnt = 1;
   @CONST r1 = 2056;	" First address of signature word
   @IRPC A (?string)
   {
	@IF (cnt > 8) { @MESSAGE 'WORD TOO LONG'; @EXIT;}
   	FUSES [@EXPR r1;..@EXPR (r1+7);] = @EXPR '?A';;
	@CONST  r1 = r1 + 8;
	@CONST	cnt = cnt + 1;
   }
}
" P20V8 Electronic Signature Word
SIGNATURE MACRO (string)
{
   @CONST cnt = 1;
   @CONST r1 = 2568;	" First address of signature word
   @IRPC A (?string)
   {
	@IF (cnt > 8) { @MESSAGE 'WORD TOO LONG'; @EXIT;}
   	FUSES [@EXPR r1;..@EXPR (r1+7);] = @EXPR '?A';;
	@CONST  r1 = r1 + 8;
	@CONST	cnt = cnt + 1;
   }
}
" P22V10G Electronic Signature Word
SIGNATURE MACRO (string)
{
   @CONST cnt = 1;
   @CONST r1 = 5828;	" First address of signature word
   @IRPC A (?string)
   {
	@IF (cnt > 8) { @MESSAGE 'WORD TOO LONG'; @EXIT;}
   	FUSES [@EXPR r1;..@EXPR (r1+7);] = @EXPR '?A';;
	@CONST  r1 = r1 + 8;
	@CONST	cnt = cnt + 1;
   }
}
" P26CV12 Electronic Signature Word
SIGNATURE MACRO (string)
{
   @CONST cnt = 1;
   @CONST r1 = 6368;	" First address of signature word
   @IRPC A (?string)
   {
	@IF (cnt > 8) { @MESSAGE 'WORD TOO LONG'; @EXIT;}
   	FUSES [@EXPR r1;..@EXPR (r1+7);] = @EXPR '?A';;
	@CONST  r1 = r1 + 8;
	@CONST	cnt = cnt + 1;
   }
}
" P18V10G Electronic Signature Word
SIGNATURE MACRO (string)
{
   @CONST cnt = 1;
   @CONST r1 = 3476;	" First address of signature word
   @IRPC A (?string)
   {
	@IF (cnt > 8) { @MESSAGE 'WORD TOO LONG'; @EXIT;}
   	FUSES [@EXPR r1;..@EXPR (r1+7);] = @EXPR '?A';;
	@CONST  r1 = r1 + 8;
	@CONST	cnt = cnt + 1;
   }
}
" P330.INC
"The following enables clock 2 (pin 3)
CLK2    macro () {FUSES[17070] = 1;}

"The following program the C3 bit in the Output Macrocell
"and selects feedback from the lower pin.
FEEDPIN_27 macro () {FUSES[17031] = 1;}
FEEDPIN_25 macro () {FUSES[17038] = 1;}
FEEDPIN_23 macro () {FUSES[17045] = 1;}
FEEDPIN_19 macro () {FUSES[17052] = 1;}
FEEDPIN_17 macro () {FUSES[17059] = 1;}
FEEDPIN_15 macro () {FUSES[17066] = 1;}


" P331.INC
	"The following program the C2 bit in the Output Macrocell
	"and selects feedback from the lower pin.
	FEEDPIN_27 macro () {FUSES[11906] = 1;}
	FEEDPIN_25 macro () {FUSES[11911] = 1;}
	FEEDPIN_23 macro () {FUSES[11916] = 1;}
	FEEDPIN_19 macro () {FUSES[11921] = 1;}
	FEEDPIN_17 macro () {FUSES[11926] = 1;}
	FEEDPIN_15 macro () {FUSES[11931] = 1;}

" F6001.INC
SIGNATURE MACRO (string)
{
   @CONST cnt = 1;
   @CONST r1 = 8222;	" First address of signature word
   @IRPC A (?string)
   {
	@IF (cnt > 9) { @MESSAGE 'WORD TOO LONG'; @EXIT;}
   	FUSES [@EXPR r1;..@EXPR (r1+7);] = @EXPR '?A';;
	@CONST  r1 = r1 + 8;
	@CONST	cnt = cnt + 1;
   }
}
16 
CONSTANT.INC 143 100 ""
E0320.INC 248 118 ""
E0600.INC 373 66 ""
E0900.INC 444 68 ""
E1800.INC 517 437 ""
F39V18.INC 4069 294 ""
F6001.INC 968 294 ""
P16V8.INC 1275 316 ""
P16Z8.INC 1604 316 ""
P18V10G.INC 2924 318 ""
P20V8.INC 1933 316 ""
P22V10G.INC 2262 318 ""
P26CV12.INC 2593 318 ""
P330.INC 3255 429 ""
P331.INC 3697 361 ""
VERSION.INC 10 131 ""
