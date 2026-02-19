t=linspace(-30,30,1000);
l=1000;
y=sin(2*pi*t*l)./(pi*t);
plot(t,y,'b.-');
xlabel('time (t)');
ylabel('y(t) approximate of data fx');
grid on
