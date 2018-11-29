#include <Windows.h>
#include "input.h"

////////// Input Ŭ������ ����(static) ��� ���� �� �ʱ�ȭ //////////
int Input::state[MAX_KEY] = { 0, };

bool Input::init()
{

    ///////////Ű����(���콺 ��ư) ���� �迭�� �ʱ�ȭ��////
    for (int i = 0; i <MAX_KEY; i++)
    {
        state[i] = KEY_UP_REP;  //Ű���� �ʱ� ���� - ������ ����
    }

    return true;
}

void Input::update()
{
    /////////////////////Ű����� ���콺 �Է� ���� ����///////////
    for (int i = 1; i < MAX_KEY; i++)  //��� Ű������ Ű�� �˻���
    {
        int key = GetAsyncKeyState(i); //i ��° Ű�� �о��

        if (Input::state[i] == KEY_UP_REP)  //Ű�� ������ ���� ����
        {
            if ((key & 0x8000) == 0x8000) //Ű�� ����
            {
                Input::state[i] = KEY_DOWN;  //Ű�� ����(�ѹ�)
            }
            else {
                Input::state[i] = KEY_UP_REP; //������ ���� ����
            }
        }
        else if (Input::state[i] == KEY_DOWN) { //Ű�� �ѹ� ����

            if ((key & 0x8000) == 0x8000) //Ű�� ����
            {
                Input::state[i] = KEY_DOWN_REP;  //Ű�� ���� ����

            }
            else {

                Input::state[i] = KEY_UP;        //Ű�� ���ȴٰ� ������ ���� 
            }
        }
        else if (Input::state[i] == KEY_DOWN_REP) {  //Ű�� ������ ����

            if ((key & 0x8000) == 0x8000) //Ű�� ����
            {
                Input::state[i] = KEY_DOWN_REP;  //Ű�� ���� ����

            }
            else {

                Input::state[i] = KEY_UP;        //Ű�� ���ȴٰ� ������ ���� 
            }
        }
        else if (Input::state[i] == KEY_UP) {  //Ű�� ���ȴ� ������ (�ѹ�)

            if ((key & 0x8000) == 0x8000) //Ű�� ����
            {
                Input::state[i] = KEY_DOWN;  //Ű�� ���� �ѹ�
            }
            else {
                Input::state[i] = KEY_UP_REP;  //Ű�� ���ȴٰ� ������ ���� 
            }
        }
    }
}

void Input::exit()
{
    //Ű����(���콺) ��ġ ����� Ư���� ������ ������ ����
}

/////////////// Ű(���콺)�Է� �Լ� ����� ����////////////
bool Input::getKey(int keycode)  //�����ؼ� �����ִ��� �˻�
{
    if (Input::state[keycode] == KEY_DOWN || Input::state[keycode] == KEY_DOWN_REP)
    {
        return true;
    }
    else {
        return false;

    }
}

bool Input::getKeyDown(int keycode)
{
    if (Input::state[keycode] == KEY_DOWN)
    {
        return true;
    }
    else {

        return false;
    }
}

bool Input::getKeyUp(int keycode)
{

    if (Input::state[keycode] == KEY_UP)
    {
        return true;
    }
    else {
        return false;
    }
}

/////////////////���콺 ��ư ���� �о� ����//////////////////////// 
bool Input::getMouseButton(MouseButton btn)
{
    return Input::getKey(btn);
}

bool Input::getMouseButtonUp(MouseButton btn)
{
    return Input::getKeyUp(btn);
}

bool Input::getMouseButtonDown(MouseButton btn)
{

    return Input::getKeyDown(btn);
}