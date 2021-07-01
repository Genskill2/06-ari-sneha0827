string ari(string s)
{
float ri;
int nc=0,nw=0,ns=0;
for(int i=0;s[i]!='\0';++i)
{
if(isalnum(s[i]))
nc++;
if(s[i]==' ')
nw++;
if((s[i]=='.')||(s[i]=='!')||(s[i]=='?'))
ns++;
}
ri=(4.71*(float)nc/(float)nw)+(0.5*(float)nw/(float)ns)-21.43;
if((int)(ri+0.5)>(int)ri)
ri=(int)(ri+0.5);
else
ri=(int)(ri)+1;
switch((int)ri)
{
case 1:return "Kindergarten";
       break;
case 2:return "First/Second Grade";
       break; 
case 3:return "Third Grade";
       break;
case 4:return "Fourth Grade";
       break;
case 5:return "Fifth Grade";
       break;
case 6:return "Sixth Grade";
       break;
case 7:return "Seventh Grade";
       break;
case 8: return "Eighth Grade";
        break;
case 9:return "Ninth Grade";
       break;
case 10:return "Tenth Grade";
        break;
case 11:return "Eleventh Grade";
        break;
case 12:return "Twelfth grade";
        break;
case 13:return "College student";
        break;
case 14:return "Professor";
        break;
default:break; 
 }
 }
