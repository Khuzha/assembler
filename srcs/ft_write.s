global 		_ft_write			; make _ft_write avialible outer from module
section		.text				; define code memory section
extern		___error

_ft_write:	mov rax, 0x2000004
			syscall
			jc .catch
			ret

.catch		push rax
			call ___error
			pop rbx
			mov [rax], rbx
			mov rax, -1
			ret
