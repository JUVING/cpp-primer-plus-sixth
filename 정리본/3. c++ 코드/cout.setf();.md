
- 조정자 사용
  -헤더 파일 iomanip.h 필요하다. // (#include< iomanip >)  [[iomanip]]

# 출력 설정
|               용도                | 조정자    |               명령어                |
|:---------------------------------:| --------- |:-----------------------------------:|
|       뒤에 붙은 소수점 출력       | showpoint |   cout.setf(ios_base::showpoint);   |
|    뒤에 붙은 소수점 출력 안 함    |           | cout.setf(ios_base::boolshowpoint); |
|          true,false 출력          | boolalpha |   cout.setf(ios_base::boolalpha);   |
|             1, 0출력              | boolalpha |   cout.setf(ios_base::boolalpha);   |
| 출력에 진법 표시 접두어(0,0x)사용 | showbase  |   cout.setf(ios_base::showbase);    |
|  16진 출력,E 표기에 대문자 사용   | uppercase |   cout.setf(ios_base::uppercase);   |
|       양수 앞에 +부호 사용        | showpos          |    cout.setf(ios_base::showpos);    |

# 진법 변경
|  용도  | 조정자 |                     명령어                     |
|:------:| ------ |:----------------------------------------------:|
| 10진법 | dec    | cout.setf(ios_base::dec, ios_base::basefield); |
| 8진법  | oct    | cout.setf(ios_base::oct, ios_base::basefield); |
| 16진법 | hex    | cout.setf(ios_base::hex, ios_base::basefield); |


# 숫자 표기
| 용도          | 조정자 |                        명령어                         |
| ------------- | ------ |:-----------------------------------------------------:|
| 고정 소수점   | fixed  |   cout.setf(ios_base::fixed, ios_base::floatfield);   |
| 과학적 E 표기 | scientfic       | cout.setf(ios_base::scientfic, ios_base::floatfield); |


# 출력 정렬
| 용도                                            | 조정자  | 명령어                                                |
| ----------------------------------------------- | ------ | ----------------------------------------------------- |
| 왼쪽 정렬                                       | left   | cout.setf(ios_base::left, ios_base::adjustfield);     |
| 오른쪽 정렬                                     | light  | cout.setf(ios_base::light, ios_base::adjustfield);    |
| 부호 또는 진법 접두어 왼쪽 정렬 값  오른쪽 정렬 | iternal       | cout.setf(ios_base::internal, ios_base::adjustfield); |




- ## 테그 :  #setf