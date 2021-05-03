global 		_ft_strdup			; make _ft_strdup avialible outer from module
section		.text				; define code memory section
extern		___error
extern		_ft_strcpy
extern		_ft_strlen		
extern		_malloc

_ft_strdup:	push rdi
			call _ft_strlen
			inc	rax
			mov rdi, rax
			call _malloc
			cmp rax, 0
			je .catch
			mov rdi, rax
			pop rsi
			call _ft_strcpy
			ret

.catch:		pop rdi
			ret
