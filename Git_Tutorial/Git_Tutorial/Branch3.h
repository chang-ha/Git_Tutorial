#pragma once

// ���� Branch3���� �۾��ϰ� �ִ�
// ������ �۾� �ϴٰ� ������ ��ġ��;�����
class Branch3
{
public:
	// constructer destructer
	Branch3();
	~Branch3();

	// delete function
	Branch3(const Branch3& _Ohter) = delete;
	Branch3(Branch3&& _Ohter) noexcept = delete;
	Branch3& operator=(const Branch3& _Other) = delete;
	Branch3& operator=(Branch3&& _Other) noexcept = delete;

protected:

private:

};

