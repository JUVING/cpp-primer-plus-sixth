헤더파일 : 
# Lvalue & Rvalue
![[Pasted image 20231008021320.png]]

'=' 을 기준으로 왼쪽이 Lvalue 오늘쪽이 Rvalue이다.

Lvalue : 다시 호출이 가능하다.
Rvalue : 다시 호출이 불가능하다.

# std::move();
Lvalue값을 Rvalue로 바꾸어 준다.
함수 생성시 매개변수를 &&로 사용하면 Rvalue로 매개변수를 요청이 가능하다.

*장점 : move()를 이용하여 매개변수를 전달하면 메모리를 복사 하는게 아니라 이동을 하여 메모리를 절역할 수 있다.

![[Pasted image 20231008022751.png]]


## 태그 : #lavalue #rvalue #move