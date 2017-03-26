//
//  arith.hpp
//  Simdex
//
//  Created by Geet Sethi on 10/27/16.
//  Copyright © 2016 Geet Sethi. All rights reserved.
//

#ifndef arith_hpp
#define arith_hpp

#include "types.hpp"
#include <stdio.h>

float *compute_theta_ics(float *all_items, float *all_centroids,
                        const size_t num_items, const size_t num_clusters,
                        const size_t num_latent_factors);
float *compute_theta_ucs_for_centroid(float *user_weights, float *centroid,
                         const size_t num_users,
                         const size_t num_latent_factors,
                         userNormTuple_t *userNormTuple_array);

float *computeAllItemNorms(float *allItemWeights);
float *computeCosineSimilarityItemsCentroids(float *allItems,
                                             float *allCentroids);
float *computeCosineSimilarityUserCluster(float *users, float *centroid,
                                          int numUsers,
                                          userNormTuple_t *userNormTuple_array);

#endif /* arith_hpp */