//y=2.3x*x-20x+50
//a=1, b=9
//m=(f(b)-f(a))/(b-a)=3
//y1=32.3+3*(x-1)
//y2=3*x-7.5
i=0:0.01:10;
y=2.0*(i.*i)-20*i+30;
y1=-2*(ones(1,1001));
y2=-20*(ones(1,1001));

//plot(i,y);
//plot(i,y1);
//plot(i,y2)
plot(i',[y' y1' y2']);
xtitle("y=2x*x-20x+30, y1=-2, y2=-20, a=2,  b=8" )
xgrid;
a=get("current_axes");
a.title.font_size = 5;
a.labels_font_size=5;
a.font_size=5;
a.thickness = 3;
a.font_style=5;
a.title.font_style = 5;

a.data_bounds=[0,-25;10,35];
