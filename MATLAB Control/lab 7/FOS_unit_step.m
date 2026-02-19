t= linspace(0,50,1000);
T=[0.1,0.3,0.5,1.0,1.5,2,5,10];
for i=1:8
    c=1-exp(-t/T(i));
    plot(t,c);
    hold on;
end