#pragma once
template <class T>
class CPart
{
public:
	CPart():bIsGood(true) { ; }
	~CPart() { ; }
	
	bool TestPart(T& Part)
	{
		// Note : Not current using <T> but will do in future.
		return bIsGood; // temp for now

	}

private:

	bool bIsGood;
};


