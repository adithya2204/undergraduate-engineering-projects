function ydot=spring_mass1(t,y)

ydot=[y(2)
      0.3*y(3)-1.3*y(1)
      y(4)
      -0.6*y(3)+0.6*y(1)]
end