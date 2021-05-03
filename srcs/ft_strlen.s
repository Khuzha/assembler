global _ft_strlen					; make _ft_strlen avialible outer from module
section		.text					; define code memory section

_ft_strlen:	xor rax, rax			; put zero to rax
.loop:		cmp byte[rdi + rax], 0	; compare currenct char with \0 and define flags
			je .return				; jump to return tag if values are equal
			inc rax					; increase rax
			jmp .loop				; jump to loop tag
			
.return:	ret						; exit and return rax
