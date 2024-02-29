
Node : 연결 리스트 에서 사용되는 하나의 데이터 덩어리이며, 데이터 & 링크 이 2가지의 필드를 담고있는 구조이다.

![[Pasted image 20231009033437.png]]

head : 시작 지점의 노드 주소를 저장해서 가리키는 8byte 크기의 포인터이다.
tail : 마지막 지점의 노드
*마지막 노드의 next는 null을 가리킨다.

![[Pasted image 20231009033632.png]]


*상황에 따라 연결 리스트가 빠르게 처리할 수 있습니다.

![[Pasted image 20231009034044.png]]

# 연결 리스트 종류

단일 연결 리스트 : 다음 노드를 가리키는 포인터도 가지고 있다.
![[Pasted image 20231009034203.png]]

이중 연결 리스트 : 다음 노드의 포인터와 이전 노드를 가리키는 포인터도 가지고 있다. 하지만 *2개의 데이터를 관리하기 때문에 데이터의 구조와 흐름이 복잡해질 가능성이 있다.
![[Pasted image 20231009034246.png]]

원형 연결 리스트 : 단일 연결 리스트와 같은 구조를 가지고 *마지막 노드가 null이 아닌 head 노드를 
가리키는 리스트 입니다.
![[Pasted image 20231009034631.png]]


# 연결 리스트 구현 방법

![[Pasted image 20231009035054.png]]
![[Pasted image 20231009035022.png]]

# 코드 구현

## *단일 연결 리스트 노드 맨 앞에 삽입

![[Pasted image 20231010004918.png]]
참고 자료 : https://www.youtube.com/watch?v=MYRcqQ76N2A&list=WL&index=1&t=17s


## *단일 연결 리스트 노드 순회

노드 순회 : 모든 노드를 빠짐 없이 방문하는 것
방법 : curnode가 현재 노드를 가지고 거기서 다음 노드 주소를 이용하여  다음 노드로 이동하는
방식을 마지막 노드까지 반복한다.

![[Pasted image 20231010012551.png]]
참고 자료: https://www.youtube.com/watch?v=2t37jLje1MQ


## *단일 연결 리스트 노드 맨 뒤에 삽입

방법 : 연결 리스트 순회 알고리즘을 사용하여 마지막 노드에 도달하여 마지막 노드 주소에 새로 만든 노드 주소를 전달한다.

![[Pasted image 20231010012214.png]]
참고 자료 : https://youtu.be/1rFIlNKH2z4?si=w6mdaMUzVjMQB7TX


## *단일 연결 리스트 전체 노드 삭제

방법 : 순회 알고리즘을 이용하여 다음 노드를 가리키는 head로 이동하고 이전 노드를 가리키던
delnode를 해제 후 현재 노드로 이동을 반복하여 전체 삭제하고 head와 delNode에는 nullptr을 저장한다.
![[Pasted image 20231010014130.png]]
참고 자료 : https://youtu.be/LFD6XAchtto?si=kAYtB157CsvgZlco


# *단일 리스트 정렬 삽입  

조건 : 
- 1. head == nullptr    - 2. 가장 작은 값 삽입    - 3. 일반적인 경우( 중간 삽입 )
- 4. 가장 큰 값 삽입

![[Pasted image 20231011033338.png]]
참고 자료 : https://youtu.be/Px8VQby67qQ?si=Bl2qk_7zi6Cmh2q7


# *이중 연결 리스트

![[Pasted image 20231011034630.png]]
참고 자료 : https://youtu.be/bWJma-gywpQ?si=OAIurkXnL0YeHBAW



# *이중 연결 리스트 역순 연결

![[Pasted image 20231011040622.png]]
참고 자료 : https://youtu.be/bWJma-gywpQ?si=WZ3MgJvJH_pwik_0


