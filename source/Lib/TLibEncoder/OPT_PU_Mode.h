class CandModePU{
public:
	CandModePU()
	{
		p=acc_p=0;
	}
	~CandModePU(){;}
	CandModePU & operator = (CandModePU & in)
	{
		pu_mode=in.pu_mode;
		p = in.p;
		acc_p=in.acc_p;
		testflag=in.testflag;
		return *this;
	}
public:
	int pu_mode;
	double p;
	double acc_p;
	bool testflag;

};
//Depth
class CandMode{
public:
	CandMode()
	{
		p=acc_p=0;
	}
	~CandMode(){;}
	CandMode & operator = (CandMode & in)
	{
		depth=in.depth;
		p = in.p;
		acc_p=in.acc_p;
		testflag=in.testflag;
		return *this;
	}
public:
	int depth;
	double p;
	double acc_p;
	bool testflag;

};
