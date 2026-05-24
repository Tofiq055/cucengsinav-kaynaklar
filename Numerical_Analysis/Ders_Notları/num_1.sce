//y=2.3x*x-20x+50
//a=1, b=9
//m=(f(b)-f(a))/(b-a)=3
//y1=32.3+3*(x-1)
//y2=3*x-7.5
i=0:0.01:10;
y=2.3*(i.*i)-20*i+50;
y1=32.3+3*(i-1);
y2=3*i-7.5;
//plot(i,y);
//plot(i,y1);
//plot(i,y2)
plot(i',[y' y1' y2']);
xtitle("y=2.3x*x-20x+50, y1=32.3+3*(x-1), y2=3*x-7.5, a=1,  b=9" )
xgrid;
a=get("current_axes");
a.title.font_size = 5;
a.labels_font_size=5;
a.font_size=5;
a.thickness = 3;
a.font_style=5;
a.title.font_style = 5;

