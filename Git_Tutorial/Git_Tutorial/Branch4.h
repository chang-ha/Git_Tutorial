#pragma once

// 나는 Branch4에서 작업 중
// main을 수정해야 겠는데?
// 수정하러 간다
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

