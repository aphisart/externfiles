.586
.model flat
.code

rarr proc C matr: DWORD, n: DWORD, m: DWORD
mov esi, matr
xor eax, eax
mov ebx, m
inc ebx
mov ecx, n
imul ecx, m
lp:
mov edx, [esi]
test edx, 1
jz evn
jmp next
evn:
add eax, [esi]
next:
add esi, ebx
loop lp
ret
rarr endp

end