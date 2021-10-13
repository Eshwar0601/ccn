// window size is 1
#include&lt;stdio.h&gt;
#include&lt;stdlib.h&gt;
#include&lt;unistd.h&gt;
#include&lt;time.h&gt;
int main()
{
int n,i,rn;
int
seq[50]={1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,
0,1};
srand(time(0));
printf(&quot;enter the no of frames to be transmitted select within
30\n&quot;);
scanf(&quot;%d&quot;,&amp;n);
srand(time(0));
// rn=0 ack lost in the network
//rn=1 proper ack
//rn=2 time out ; retransmission of same frame
// rn=3 frame lost in the network
for (i=1;i&lt;=n;i++)
{
srand(time(0)); // to randomize the process
printf(&quot; \tTRANSMITTER :-frame %d is transmitted \n \n&quot;,seq[i]);
sleep(4);
rn=rand()%4;
if(rn==0)
{
printf(&quot;\tRECEIVER:-No ack for FRAME %d \n\n&quot;,seq[i]);
printf(&quot;\tTRANSMITTER :-Frame %d \n\n&quot;,seq[i]);
sleep(5);
printf(&quot;\tRECEIVER:-- Ack %d \n\n&quot;,seq[i+1]);
printf(&quot;--------------------------------------------------------
-----------------\n\n&quot;) ;
} else if(rn==1)
{
printf(&quot;\tRECEIVER:--Ack %d \n\n&quot;,seq[i+1]);
printf(&quot;-----------------------------------------

--------------------------------\n\n&quot;) ;

}
else if(rn==2)
{
printf(&quot;\tTRANSMITTER:-Time out frame %d

\n\n&quot;,seq[i]);

sleep(5);

//printf(&quot;---------------------------------------

----------------------------------\n\n&quot;) ;

printf(&quot;\tTRANSMITTER :-Frame %d retransmitted

\n\n&quot;,seq[i]);
printf(&quot;\tRECEIVER:--Ack%d \n\n&quot;,seq[i+1]);
printf(&quot;-------------------------------------------------

------------------------\n\n&quot;) ;

}
else
{
printf(&quot;\tFRAME %d is lost in the network \n\n&quot;,seq[i]);
printf(&quot;\tTRANSMITTER :-Frame %d retransmitted \n\n&quot;,seq[i]);
sleep(5);
printf(&quot;\tRECEIVER:-- Ack %d \n\n&quot;,seq[i+1]);
printf(&quot;--------------------------------------------------------
-----------------\n\n&quot;) ;

}
}
printf(&quot;%d frames transmitted successfully\n&quot;,i-1);
}
