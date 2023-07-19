#pragma once

// 나는 Branch3에서 작업하고 있다
// 열심히 작업 하다가 메인을 고치고싶어졌다
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

