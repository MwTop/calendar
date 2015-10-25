/***calendar***/

#include<stdio.h>
int main(void)
{	int i,j,k,w,c,y,m,d;
    int s;
    printf("请输入您所需要的日历的年份:");
    scanf("%d",&s);
	c=s/100;y=s%100-1;m=13;d=1;
	w=(y+y/4+c/4-2*c+26*(m+1)/10+d-1)%7;
    k=w;
    if(s%4==0&&s%100!=0||s%400==0) j=1;
    else j=0;
	printf("             %d年1月            \n",s);
	printf("**********************************\n");
	printf("周日 周一 周二 周三 周四 周五 周六\n");
	printf("**********************************\n");
	switch(k)
	{	case 0:break;
		case 1:printf("%5c",' ');break;
	    case 2:printf("%10c",' ');break;
		case 3:printf("%15c",' ');break; 
		case 4:printf("%20c",' ');break;
		case 5:printf("%25c",' ');break; 
		case 6:printf("%30c",' ');break;
        default:;		}
	for(i=1;i<=31;i++)
	{	k++;
		printf("%4d ",i);
		if(k%7==0)
		{	printf("\n");	}  }
	printf("\n");
	printf("             %d年2月            \n",s);
	printf("**********************************\n");
	printf("周日 周一 周二 周三 周四 周五 周六\n");
	printf("**********************************\n");
	switch(k%7)
	{	case 0:break;
		case 1:printf("%5c",' ');break;case 2:printf("%10c",' ');break;
		case 3:printf("%15c",' ');break;case 4:printf("%20c",' ');break;
		case 5:printf("%25c",' ');break;case 6:printf("%30c",' ');break;
		default:;		}
	switch(j)
	{	case 0:
		{	for(i=1;i<=28;i++)
			{	k++;printf("%4d ",i);
				if(k%7==0)
				{	printf("\n");	}	}	}break;
		case 1:
		{	for(i=1;i<=29;i++)
			{	k++;printf("%4d ",i);
				if(k%7==0)
				{	printf("\n");	}	}	}break;
	default:;		}
	printf("\n");
	printf("             %d年3月            \n",s);
	printf("**********************************\n");
	printf("周日 周一 周二 周三 周四 周五 周六\n");
	printf("**********************************\n");
	switch(k%7)
	{	case 0:break;
	    case 1:printf("%5c",' ');break;
		case 2:printf("%10c",' ');break;
		case 3:printf("%15c",' ');break;
		case 4:printf("%20c",' ');break;
	    case 5:printf("%25c",' ');break;
		case 6:printf("%30c",' ');break;
		default:;		}
	for(i=1;i<=31;i++)
	{	k++;printf("%4d ",i);
		if(k%7==0)
		{	printf("\n");	}	}
	printf("\n");
	printf("             %d年4月            \n",s);
	printf("**********************************\n");
	printf("周日 周一 周二 周三 周四 周五 周六\n");
	printf("**********************************\n");
	switch(k%7)
	{	case 0:break;
	    case 1:printf("%5c",' ');break;
		case 2:printf("%10c",' ');break;
		case 3:printf("%15c",' ');break;
		case 4:printf("%20c",' ');break;
		case 5:printf("%25c",' ');break;
		case 6:printf("%30c",' ');break;
		default:;		}
	for(i=1;i<=30;i++)
	{	k++;printf("%4d ",i);
		if(k%7==0)
		{	printf("\n");	}	}
	printf("\n");
	printf("             %d年5月            \n",s);
	printf("**********************************\n");
	printf("周日 周一 周二 周三 周四 周五 周六\n");
	printf("**********************************\n");
	switch(k%7)
	{	case 0:break;
	    case 1:printf("%5c",' ');break;
		case 2:printf("%10c",' ');break;
		case 3:printf("%15c",' ');break;
		case 4:printf("%20c",' ');break;
		case 5:printf("%25c",' ');break;
		case 6:printf("%30c",' ');break;
		default:;    	}
	for(i=1;i<=31;i++)
	{	k++;printf("%4d ",i);
		if(k%7==0)
		{	printf("\n");	}	}
	printf("\n");
	printf("             %d年6月            \n",s);
	printf("**********************************\n");
	printf("周日 周一 周二 周三 周四 周五 周六\n");
	printf("**********************************\n");
	switch(k%7)
	{	case 0:break;
	    case 1:printf("%5c",' ');break;
	    case 2:printf("%10c",' ');break;
		case 3:printf("%15c",' ');break;
		case 4:printf("%20c",' ');break;
		case 5:printf("%25c",' ');break;
		case 6:printf("%30c",' ');break;
		default:;		}
	for(i=1;i<=30;i++)
	{	k++;	printf("%4d ",i);
		if(k%7==0)
		{	printf("\n");	}	}
	printf("\n");
	printf("             %d年7月            \n",s);
	printf("**********************************\n");
	printf("周日 周一 周二 周三 周四 周五 周六\n");
	printf("**********************************\n");
	switch(k%7)
	{	case 0:break;
	    case 1:printf("%5c",' ');break;
		case 2:printf("%10c",' ');break;
		case 3:printf("%15c",' ');break;
		case 4:printf("%20c",' ');break;
		case 5:printf("%25c",' ');break;
		case 6:printf("%30c",' ');break;
		default:;		}
	for(i=1;i<=31;i++)
	{	k++;printf("%4d ",i);
		if(k%7==0)
		{	printf("\n");	}	}
	printf("\n");
	printf("             %d年8月            \n",s);
	printf("**********************************\n");
	printf("周日 周一 周二 周三 周四 周五 周六\n");
	printf("**********************************\n");
	switch(k%7)
	{	case 0:break;
	    case 1:printf("%5c",' ');break;
		case 2:printf("%10c",' ');break;
		case 3:printf("%15c",' ');break;
		case 4:printf("%20c",' ');break;
		case 5:printf("%25c",' ');break;
		case 6:printf("%30c",' ');break;
		default:;		}
	for(i=1;i<=31;i++)
	{	k++;	printf("%4d ",i);
		if(k%7==0)
		{	printf("\n");	}	}
	printf("\n");
	printf("             %d年9月            \n",s);
	printf("**********************************\n");
	printf("周日 周一 周二 周三 周四 周五 周六\n");
	printf("**********************************\n");
	switch(k%7)
	{	case 0:break;
	    case 1:printf("%5c",' ');break;
		case 2:printf("%10c",' ');break;
		case 3:printf("%15c",' ');break;
		case 4:printf("%20c",' ');break;
		case 5:printf("%25c",' ');break;
		case 6:printf("%30c",' ');break;
		default:;		}
	for(i=1;i<=30;i++)
	{	k++;	printf("%4d ",i);
		if(k%7==0)
		{	printf("\n");	}	}
	printf("\n");
	printf("             %d年10月            \n",s);
	printf("**********************************\n");
	printf("周日 周一 周二 周三 周四 周五 周六\n");
	printf("**********************************\n");
	switch(k%7)
	{	case 0:break;
		case 1:printf("%5c",' ');break;
		case 2:printf("%10c",' ');break;
		case 3:printf("%15c",' ');break;
		case 4:printf("%20c",' ');break;
		case 5:printf("%25c",' ');break;
		case 6:printf("%30c",' ');break;
		default:;		}
	for(i=1;i<=31;i++)
	{	k++;
		printf("%4d ",i);
		if(k%7==0)
		{	printf("\n");	}	}
	printf("\n");
	printf("             %d年11月            \n",s);
	printf("**********************************\n");
	printf("周日 周一 周二 周三 周四 周五 周六\n");
	printf("**********************************\n");
	switch(k%7)
	{	case 0:break;
	    case 1:printf("%5c",' ');break;
		case 2:printf("%10c",' ');break;
		case 3:printf("%15c",' ');break;
		case 4:printf("%20c",' ');break;
		case 5:printf("%25c",' ');break;
		case 6:printf("%30c",' ');break;
		default:;		}
	for(i=1;i<=30;i++)
	{	k++;printf("%4d ",i);
		if(k%7==0)
		{	printf("\n");	}	}
	printf("\n");
	printf("             %d年12月            \n",s);
	printf("**********************************\n");
	printf("周日 周一 周二 周三 周四 周五 周六\n");
	printf("**********************************\n");
	switch(k%7)
	{	case 0:break;
	    case 1:printf("%5c",' ');break;
	    case 2:printf("%10c",' ');break;
		case 3:printf("%15c",' ');break;
		case 4:printf("%20c",' ');break;
		case 5:printf("%25c",' ');break;
		case 6:printf("%30c",' ');break;
		default:;		}
	for(i=1;i<=31;i++)
	{	k++;printf("%4d ",i);
		if(k%7==0)
          {	printf("\n");}	  		
	} printf("\n"); 
}
