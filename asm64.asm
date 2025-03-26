

.DATA
    left dword 0
    right dword 999
EXTERN quicksort : PROC
EXTERN ttR: PROC
EXTERN tab: DB
.DATA?
    wynik1 dword ?
    wynik2 dword ?
.CODE
main PROC
    cpuid
    sub rsp, 20h
    rdtsc
    mov wynik1,eax
    mov wynik2,edx
    lea rcx, tab
    mov edx, [left]
    mov r8d, [right]
    call quicksort
    add rsp, 20h
    mov ebx, [wynik1]
    mov r9d, [wynik2]
    rdtsc
    sub eax,ebx
    sbb edx,r9d
    mov ecx, eax
    call ttR
    xor eax, eax
   
   
main ENDP
END 
