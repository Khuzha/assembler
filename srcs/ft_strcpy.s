global _ft_strcpy					; make _ft_strcpy avialible outer from module
section		.text					; define code memory section

_ft_strcpy:	xor rax, rax			; put zero to rax
.loop:		mov	bl, byte[rsi + rax]	;
			mov byte[rdi + rax], bl	;
			cmp bl, 0				;
			je	.return				;
			inc	rax					;
			jmp .loop				;

.return:	mov rax, rdi			;
			ret						; exit and return rax