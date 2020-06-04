.section .text

.global add
.type add, @function

.global inc
.type inc, @function

add:
	add a0, a0, a1
	ret

inc:
	addi a0, a0, 1
	ret
