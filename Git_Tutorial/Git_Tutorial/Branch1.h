#pragma once

// ���� �귻ġ1�� �۾� ���ε�
// ������ �۾��� ���ϳ�.....
// �۾�2
// �۾�3
class Branch1
{
public:
	// constructer destructer
	Branch1();
	~Branch1();

	// delete function
	Branch1(const Branch1& _Ohter) = delete;
	Branch1(Branch1&& _Ohter) noexcept = delete;
	Branch1& operator=(const Branch1& _Other) = delete;
	Branch1& operator=(Branch1&& _Other) noexcept = delete;

protected:

private:

};

