#include <iostream>
#include <Eigen/Dense>

#include <vector>

namespace leopard {

template<class T, int N>
class Observation
{
  public:
  private:
    Eigen::Vector<T, N> value;
    Eigen::Matrix<T, N, N> info;
};

class Optimizer
{ 
  public:
  private:
    std::vector<Observation<double, 1>> observations;
};

int optimize();

} // namespace leopard
