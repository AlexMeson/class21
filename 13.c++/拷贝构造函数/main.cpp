#include <iostream>

using namespace std;

class xxx {
public:
	xxx(){
		cout << "��ͨ���캯��" << endl; 
		a = new int; 
	}
	xxx( const xxx &p ){	/* �������캯��ͨ��ʹ�����ñ��� */
		cout << "�������캯��" << endl; 
		a = new int;
		*a = *p.a;
	}
	int *a;
};

int main(){

	xxx *i = new xxx;
	*i->a = 789;
	xxx j(*i);		//����ʹ��ǳ����(������ֵ����) ʹ��������� 
	*i->a = 123;

	cout << *j.a << endl;
	
//	xxx k = xxx(j);		xxx k(j);		xxx k = j;

	delete i;
	return 0;
}

/*
	���캯�� ��ʹ������ʱ δ��д���캯�� ������Ҳ���Զ����ɹ��캯��
	 
	�������캯��
		��Ϊ: ���϶��������ݳ�Ա��ֵһһ�����¶�������ݳ�Ա 		
		
*/
