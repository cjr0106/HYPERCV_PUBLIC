
/**
* @brief      transform bil to bsq.
* @param[in]  bil_mat    bil image.
* @retval     bsq_mat    bsq image.
**/
hyper_mat bil2bsq(hyper_mat bil_data);

/**
* @brief      transform bil to bip.
* @param[in]  bil_mat    bil image.
* @retval     bip_mat    bip image. 
**/
hyper_mat bil2bip(hyper_mat bil_data);

/**
* @brief      transform bsq to bil.
* @param[in]  bil_mat    bsq image.
* @retval     bip_mat    bil image. 
**/
hyper_mat bsq2bil(hyper_mat bsq_mat);

/**
* @brief      transform bsq to bip.
* @param[in]  bil_mat    bsq image.
* @retval     bip_mat    bip image. 
**/
hyper_mat bsq2bip(hyper_mat bsq_mat);

/**
* @brief      transform bip to bsp.
* @param[in]  bil_mat    bip image.
* @retval     bip_mat    bsq image. 
**/
hyper_mat bip2bsq(hyper_mat bip_mat);

/**
* @brief      transform bip to bil .
* @param[in]  bip_mat    bip image.
* @retval     bil_mat    bil image. 
**/
hyper_mat bip2bil(hyper_mat bip_mat);

/**
* @brief      get roi data from hyper data.
* @param[in]  src_mat     hyper image.
* @param[in]  start_row   start row of roi.
* @param[in]  start_col   start col of roi.
* @param[in]  start_band  start band of roi.
* @param[in]  end_row     end row of roi.
* @param[in]  end_col     end col of roi.
* @param[in]  end_band    end band of roi.
* @retval     dst_mat     hyper image. 
**/
hyper_mat hyper_mat_get_range(hyper_mat src_mat, int start_row, int start_col, int start_band, int end_row, int end_col, int end_band);

/**
* @brief      reshape bsq hyper mat to 2d simple mat.
* @param[in]  src_mat     hyper image.
* @param[in]  dst_rows    rows of simple mat.
* @param[in]  dst_cols    cols of simple mat.
* @retval     dst_mat     simple image. 
**/
simple_mat reshape_hypermat_2_simplemat(hyper_mat src_mat, int dst_rows, int dst_cols);
