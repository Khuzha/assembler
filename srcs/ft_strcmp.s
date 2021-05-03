global _ft_strcmp						; make _ft_strcmp avialible outer from module
section		.text						; define code memory section

_ft_strcmp:	xor rcx, rcx				; put zero to rcx
.loop:		mov bl, byte[rdi + rcx]		; put first arguement's first char to bl
			cmp bl, byte[rsi + rcx]		; compare second and first arguement's first chars
			jne .return					; jump if not equal
			cmp bl, 0					; check if end of string
			je .return					; return if end
			inc	rcx						; increase counter
			jmp .loop					; loop again

.return:	movzx eax, bl				; copies 8 bits from bl to eax and other bits make 0
			movzx ebx, byte[rsi + rcx]	; copies 8 bits from rsi to eax and other bits make 0
			sub eax, ebx				; substract
			ret							; return
