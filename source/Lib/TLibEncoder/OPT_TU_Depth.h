class CandDepthTU{
public:
	CandDepthTU()
	{
		p=acc_p=0;
	}
	~CandDepthTU(){;}
	CandDepthTU & operator = (CandDepthTU & in)
	{
		tu_depth=in.tu_depth;
		p = in.p;
		acc_p=in.acc_p;
		testflag=in.testflag;
		return *this;
	}
public:
	int tu_depth;
	double p;

	double acc_p;
	bool testflag;

};


class FMDModule_TU{
public:

	FMDModule_TU();
	~FMDModule_TU();


	void BubbleSortList()
	{
		//		int i,j;
		CandDepthTU tmp;
		for (int i=0;i<4;i++)
		{
			for (int j=3;j>i;j--)
			{
				if (TUDepthList[i].p<TUDepthList[j].p)
				{
					tmp.p=TUDepthList[i].p;
					TUDepthList[i].p=TUDepthList[j].p;
					TUDepthList[j].p=tmp.p;
				}

			}
		}


		TUDepthList[0].acc_p = TUDepthList[0].p;
		for (int i=1; i<4; i++)
			TUDepthList[i].acc_p = TUDepthList[i-1].acc_p + TUDepthList[i].p;
	}
	void CalcOptStop();



	CandDepthTU TUDepthList[8];

};
