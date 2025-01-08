//전반선언.
// Rect 클래스는 Display 클래스를 참조 , Display클래스는 Rect 클래스를 참조
// 이처럼 두 클래스의 선언 내에서 서로 참조하는 상황을 "순환 참조"라고 함.

//이러한 순환 참조를 피하기 위해서는 한 클래스를 다른 클래스의 앞에 미리 선언하는 전방 선언을
// 사용해야 함.

// 전방 선언.
//class 클래스 이름;

//순환 참조를 피하고자 Rect클래스를 전방선언
//---- 프렌드 멤버 함수를 선언할 때에는 각 클래스의 선언 위치도 신경써야 함.
// ----Rect클래스와 Display클래스를 다음과 같은 순서로 선언----
//class Rect;	전방 선언.
//class Display{~~~};	Display 클래스 선언
//class Rect{~~~};	Rect 클래스 선언