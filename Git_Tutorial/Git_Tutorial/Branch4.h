#pragma once

// ���� Branch4���� �۾� ��
class Branch4
{
public:
	// constructer destructer
	Branch4();
	~Branch4();

	// delete function
	Branch4(const Branch4& _Ohter) = delete;
	Branch4(Branch4&& _Ohter) noexcept = delete;
	Branch4& operator=(const Branch4& _Other) = delete;
	Branch4& operator=(Branch4&& _Other) noexcept = delete;

protected:

private:

};

