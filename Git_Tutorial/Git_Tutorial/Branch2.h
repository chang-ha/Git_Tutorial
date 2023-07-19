#pragma once

// 이번에는 브렌치 2에서 작업
// 메인도 작업중이다
class Branch2
{
public:
	// constructer destructer
	Branch2();
	~Branch2();

	// delete function
	Branch2(const Branch2& _Ohter) = delete;
	Branch2(Branch2&& _Ohter) noexcept = delete;
	Branch2& operator=(const Branch2& _Other) = delete;
	Branch2& operator=(Branch2&& _Other) noexcept = delete;

protected:

private:

};

