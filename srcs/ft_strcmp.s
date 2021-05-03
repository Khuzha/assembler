global _ft_strcmp						; make _ft_strlen avialible outer from module
section		.text						; define code memory section

_ft_strcmp:	xor rcx, rcx				; put zero to rcx
.loop:		mov bl, byte[rdi + rcx]		;
			cmp bl, byte[rsi + rcx]		;
			jne .return					;
			cmp bl, 0					;
			je .return					;
			inc	rcx						;
			jmp .loop					;

.return:	movzx eax, bl				;
			movzx ebx, byte[rsi + rcx]	;
			sub eax, ebx
			ret