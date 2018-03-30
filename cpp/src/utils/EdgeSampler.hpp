#ifndef EDGE_SAMPLER_HPP
#define EDGE_SAMPLER_HPP

#include <Eigen/Dense>

namespace poly_fem {

	class EdgeSampler
	{
	public:
		static void sample_2d_simplex(const int resolution, Eigen::MatrixXd &samples);
		static void sample_2d_cube(const int resolution, Eigen::MatrixXd &samples);

		static void sample_3d_simplex(const int resolution, Eigen::MatrixXd &samples);
		static void sample_3d_cube(const int resolution, Eigen::MatrixXd &samples);

	};
}

#endif //EDGE_SAMPLER_HPP
