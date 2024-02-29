
## *포인터 사용법*
![[Pasted image 20231013022655.png]]
포인터는 바로 값을 대입하지 못 한다.

![[Pasted image 20231013022833.png]]
이렇게 호출하면 주소 값을 출력한다.

![[Pasted image 20231013022945.png]]
이렇게 참조 연산자 *(' * ')* 를 사용하면 주소가 가리키는 값을 출력한다.

![[Pasted image 20231013023401.png]]
이렇게 포인터를 가리키는 포인터를 만들 수 있다.



## *포인터 값 출력
![[Pasted image 20231013024215.png]]
![[Pasted image 20231013025314.png]]

## *call by value & call by reference

- call by value
![[Pasted image 20231013030224.png]]
결과:
![[Pasted image 20231013030303.png]]
*swap 함수 안에서만 값을 변경하고 함수를 빠져 나오면 원래 값으로 돌아간다.


- call by reference
![[Pasted image 20231013030104.png]]
결과 : 
![[Pasted image 20231013030140.png]]
*주소를 전달하여 값 자체를 변경하여 함수를 빠져 나와도 값을 유지한다.


