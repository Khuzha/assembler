global 		_ft_read			; make _ft_read avialible outer from module
section		.text				; define code memory section
extern		___error

_ft_read:	mov rax, 0x2000003
			syscall
			jc .catch
			ret

.catch:		push rax
			call ___error
			pop rbx
			mov [rax], rbx
			mov rax, -1
			ret
