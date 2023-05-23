

// # 전처리기 구문
// 16진수
#define HUNGRY  0x001
#define THIRSTY 0x002
#define TIRED   0x004
#define FIRE    0x008

#define COLD   0x010 // 16 한묶음 
#define POISON 0x020 //32는 16 두묶음
#define POISON 0x040 
#define POISON 0x080 

#define POISON 0x100 
#define POISON 0x200
#define POISON 0x400
#define POISON 0x800
 




int main() {

    // 자료형 (크기 단위 byte)
    // 1 byte는 256가지 표현 가능
    // 0 ~ 255 정수 표현 가능

    // 정수형 : char(1), short(2), int(4), long(4), long long(8)
    // 실수형 : float(4), double(8)

    int i = 0;
    unsigned char c = 0; // 1byte 양의 정수

    c = 0;
    // c = 255;
    // c = 256; // 0으로 표현됨
    // c = -1; // 1byte 1111 1111은 -1인데 -> unsigned일 경우 255로 표현

    // signed char c1 = 0; // signed 생략 가능
    // -128 ~ 0 ~ 127
    char c1 = 0; // 1 byte로 양수, 음수 정수 표현 가능 
    c1 = 255; // 1byte 1111 1111은 -1로 표현됨

    // 음의 정수 찾기 (2의 보수법)
    // 대응되는 양수의 부호를 반전 후, 1을 더한다.
    // 0000 0001의 2의 보수법
    // 1. 1111 1110 반전
    // 2. 0000 0001 덧셈
    // 3. 1111 1111 결과 (0000 0001의 음의정수)

    int a  = 4 + 4.0;
    
    // 정수표현 방식과 실수 표현방식은 다르다.
    // 실수 표현 방식은 정밀도에 의존한다.
    // 따라서 double 자료형이 float보다 더 많은 소수점까지 정확하게 표현이 가능하다
    
    // 정수는 정수끼리, 실수는 실수끼리 연산, 두 표현방식의 피 연산자가 될경우 명시적으로 표현 필요
    float f = 10.2415f + (float)20;


    
    // 연산자
    // 대입연산자, =

    // 산술 연산자
    // +, -, *, /, %(모듈러스, 나머지, 피연산자가 모두 정수)
    
    // ++, --
    // 한 단계 증가, 감소
    
    int data = 10 + 10;
    // data = data + 20;
    data += 20;
    data = 10 % 3;
    // data = 10. % 3.; // 나머지 연산자는 피연산자가 모두 정수인 경우만 사용 가능
    data = (int)(10.f / 3.f); //f를 붙여줄 경우 4byte float로 표현, 안적을 경우 double

    data = 0;
    ++data; // 전위(전치)
    data++; // 후위(후치) // 후위 연산자로 사용하는 경우, 연산자 우선순위가 가장 나중으로 밀림.

    data = 0;
    a = 10;
    // data = a++; // a를 data에 넣고 증가 -> data = 10
    data = ++a; // a를 증가하고 data에 넣음  -> data = 11

    data = 0;
    --data; // 전위 연산자로 사용 권장



    // 논리연산자 
    // !(역), &&(and), ||(or)
    // true (1), flase (0)
    bool trueflase = false; 
    bool IsTrue = 100;

    IsTrue = true;
    IsTrue = !IsTrue;

    int iTrue = 100;
    iTrue = !iTrue;  // iTrue = 0

    // int iTrue = 0;
    // iTrue = !iTrue;  // iTrue = 1

    iTrue = 100 && 200;
    iTrue = 0 || 0;

    // 비교 연산자
    // ==, !=, <, <=, >, >=



    // 구문
    // if, else
    int iTest = 20;
    if (iTest == 10) {
        data = 100;
    }

    if (iTest == 20) {
        // if가 참인 경우 수행
    }
    else if (iTest == 30) {

    }
    else {
        // if가 거짓인 경우 수행
    }

    // switch case
    int iTest = 20;
    switch (iTest) {
        
        case 10:
            break;

        case 20:
            break;

        case 30:
            break;

        default:
            break;
    }




    // 삼항 연산자
    // :?

    iTest == 20 ? iTest = 100 : iTest = 200; // 참이면 100 거짓이면 200



    // 비트 연산자
    // 쉬프트 <<, >> 
    unsigned char byte = 1;

    // byte = byte << 1;
    byte <<= 3; // 2^n 배수
    byte >>= 1; // 2^n 나눈 몫

    // 비트 단위 연산자 곱(&), 합(|), xor(^), 반전(~)
    // 비트 단위로 연산을 진행,
    // & 둘다 1인 경우 1
    // | 둘중 하나라도 1이면 1
    // ^ 같으면 0 다르면 1;
    // ~ 1은 0으로, 0은 1로

    unsigned int iStatus = 0; 

    // 상태 추가
    iStatus |= HUNGRY;
    iStatus |= THIRSTY;

    // 상태 확인 
    if (iStatus & THIRSTY) {

    }

    // 특정 자리 비트 제거
    iStatus &= ~THIRSTY; 
    // 반전해서 비트곱으로 특정자리 비트 0으로 변환
    // 1. 1111 0111 Status
    // 2. 0000 0010 THIRSTY
    // 3. 1111 1101 THIRSTY 반전
    // 4. 1111 0111 Status
    //    1111 1101 THIRSTY 반전 > 비트곱
    //    1111 0101 결과


    return 0;
}