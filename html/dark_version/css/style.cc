/* @include transition(all,2s,ease-out); */
/* @include box-shadow(1px,1px,1px,0, #fff, true); */
header, section, footer, aside, nav, main, article, figure {
  display: block; }

/* Base CSS */
html, body, div, span, applet, object, iframe,
h1, h2, h3, h4, h5, h6, p, blockquote, pre,
a, abbr, acronym, address, big, cite, code,
del, dfn, em, font, img, ins, kbd, q, s, samp,
small, strike, strong, sub, sup, tt, var,
dl, dt, dd, ol, ul, li,
fieldset, form, label, legend,
table, caption, tbody, tfoot, thead, tr, th, td {
  margin: 0;
  padding: 0;
  border: 0;
  outline: none; }

/* remember to define focus styles! */
html {
  position: relative; }

body {
  overflow-x: hidden;
  position: relative;
  font-weight: 400;
  font-family: 'Fira Sans', sans-serif;
  line-height: 1;
  color: black;
  background: white; }

ol, ul {
  list-style: none;
  margin: 0;
  padding: 0; }

input[type="text"], input[type="email"], input[type="url"], input[type="tel"], input[type="password"], textarea, select {
  background: #fff;
  padding: 10px; }

a:focus, input[type="button"]:focus, input[type="submit"]:focus, button:focus, input[type="text"]:focus,
input[type="email"]:focus, input[type="url"]:focus, input[type="tel"]:focus, input[type="password"]:focus,
select:focus, textarea:focus, .form-control:focus {
  outline: none;
  box-shadow: none; }

a:hover, button {
  text-decoration: none; }

img {
  max-width: 100%;
  height: auto; }

h1, h2, h3, h4, h5, h6 {
  font-style: normal; }

.section_padding, .testimonial_area, .testimonial_area_2, .testimonial_area_3, .testimonial_area_5, .faq_area, .order_area, .team_area_1, .team_area_2, .product_area, .knowledge_area, .contact_area, .contact_area_2, .hosting_brand_2, .blog_area_3, .blog_area_4, .blog_area_5, .single_blog_with_sidebar, .simple_blog, .masonry_blog, .grid_blog, .two_column_grid_blog, .two_column_with_side_bar, .full_grid_blog, .full_content_blog, .full_width_with_side_bar, .call_to_action_area_4, .call_to_action_area_5, .call_to_action_area_6, .call_to_action_area_7, .call_to_action_area_8, .packege_pricing_area, .packege_pricing_area_2, .packege_pricing_area_4, .packege_pricing_area_5, .packege_pricing_area_6, .packege_pricing_area_7, .packege_pricing_area_8, .service_carousel_area_1, .service_carousel_area_4, .service_carousel_area_2, .service_carousel_area_3, .promo_content_area, .client_area_6, .info_area_1, .info_area_2, .sign_in_area, .sign_up_area, .reset_pass, .client_and_testimonial_3, .promo_content_area_6, .hosting_brand_3, .packege_pricing_area_3, .offer_carousel, .promo_content_area_5, .client_and_testimonial, .about_section {
  padding: 100px 0; }

.section_padding_2, .feature_area_2, .feature_area_7, .feature_area_9, .feature_area_12, .service_area, .service_area_2, .service_area_3, .service_area_4 {
  padding: 100px 0 50px; }

.section_title_main, .Question_answer_area .container-fluid .right_side {
  margin-bottom: 80px; }
  .section_title_main h2, .Question_answer_area .container-fluid .right_side h2 {
    font-weight: 700;
    font-family: 'Rubik', sans-serif;
    color: #0cbafc;
    font-size: 48px;
    margin-top: 5px;
    text-transform: uppercase; }
  .section_title_main h3, .Question_answer_area .container-fluid .right_side h3 {
    color: #f8fafe;
    font-size: 24px;
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif; }

.section_title_main_2, .section_title_main_3, .promo_content_area .section_title {
  margin-bottom: 80px;
  text-align: right; }
  .section_title_main_2 .heading_text, .section_title_main_3 .heading_text, .promo_content_area .section_title .heading_text {
    display: inline-block;
    position: relative;
    z-index: 1; }
    .section_title_main_2 .heading_text:after, .section_title_main_3 .heading_text:after, .promo_content_area .section_title .heading_text:after {
      position: absolute;
      z-index: -1;
      width: calc(100% + 40px);
      height: 16px;
      top: 53%;
      left: -20px;
      content: '';
      background: rgba(255, 255, 255, 0.07); }
  .section_title_main_2 h2, .section_title_main_3 h2, .promo_content_area .section_title h2 {
    font-weight: 700;
    font-family: 'Rubik', sans-serif;
    color: #363bff;
    font-size: 36px;
    text-transform: uppercase;
    line-height: 1;
    position: relative;
    z-index: 1;
    display: inline-block; }
  .section_title_main_2 h3, .section_title_main_3 h3, .promo_content_area .section_title h3 {
    color: #f8fafe;
    font-size: 16px;
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif; }

.section_title_main_3 h2 {
  color: #f8fafe; }

.section_title_main_4 {
  margin-bottom: 80px; }
  .section_title_main_4 h2 {
    background: -webkit-linear-gradient(right, #6a11cb 0%, #2575fc 100%);
    background: -o-linear-gradient(left, #6a11cb 0%, #2575fc 100%);
    background: -moz-linear-gradient(to left, #6a11cb 0%, #2575fc 100%);
    background: linear-gradient(to left, #6a11cb 0%, #2575fc 100%);
    -webkit-background-clip: text;
    -webkit-text-fill-color: transparent;
    font-size: 36px;
    margin-bottom: 35px;
    font-weight: 700;
    font-family: 'Rubik', sans-serif;
    text-transform: uppercase;
    position: relative;
    z-index: 1; }
    .section_title_main_4 h2:after {
      position: absolute;
      z-index: -1;
      left: calc(50% - 110px);
      width: 220px;
      height: 30px;
      top: 60%;
      content: '';
      background-size: cover;
      background-position: center;
      background-repeat: no-repeat;
      background-image: url("../img/heading_after.png");
      opacity: .3; }
  .section_title_main_4 h3 {
    font-size: 16px;
    color: #f8fafe;
    font-weight: 400;
    font-family: 'Fira Sans', sans-serif; }

.section_title_main_5 {
  margin-bottom: 80px; }
  .section_title_main_5 h2 {
    background: -webkit-linear-gradient(right, #15efa4 0%, #0bbdff 100%);
    background: -o-linear-gradient(left, #15efa4 0%, #0bbdff 100%);
    background: -moz-linear-gradient(to left, #15efa4 0%, #0bbdff 100%);
    background: linear-gradient(to left, #15efa4 0%, #0bbdff 100%);
    -webkit-background-clip: text;
    -webkit-text-fill-color: transparent;
    font-size: 36px;
    margin-bottom: 35px;
    display: inline-table;
    font-weight: 700;
    font-family: 'Rubik', sans-serif;
    text-transform: uppercase;
    position: relative;
    z-index: 1; }
    .section_title_main_5 h2:after {
      position: absolute;
      z-index: -1;
      left: calc(50% - 110px);
      width: 220px;
      height: 30px;
      top: 60%;
      content: '';
      background-size: cover;
      background-position: center;
      background-repeat: no-repeat;
      background-image: url("../img/heading_after.png");
      opacity: .3; }
  .section_title_main_5 h3 {
    font-size: 16px;
    color: #f8fafe;
    font-weight: 400;
    font-family: 'Fira Sans', sans-serif; }

.page_title {
  font-weight: 500;
  font-family: 'Rubik', sans-serif;
  color: #fff; }
  .page_title h2 {
    font-size: 48px;
    margin-bottom: 15px;
    display: inline-block; }
  .page_title .bread_crumb {
    font-size: 18px;
    display: inline-block; }

.dark_body {
  background: #170735; }

.gray_bg {
  background: #040331; }

.dark_bg {
  background: #191b41; }

.brand_bg {
  background: #0cbafc; }

.clearing {
  clear: both; }

.gradient_btn_main, .boxed_green_btn, .boxed_green_btn_2, .hosting_brand .container .section_title .boxed_btn.boxed_green_btn, .header_wrap .sign_in_up_area .boxed_green_btn.boxed_btn, .hero_area .hero_content_wrapper .hero_content .boxed_btn, .boxed_blue_btn, .boxed_blue_btn_2, .hosting_brand .container .section_title .boxed_btn.boxed_blue_btn, .header_wrap .sign_in_up_area .boxed_blue_btn.boxed_btn, .domain_form_5 .search_domain_btn, .domain_form_6 .search_domain_btn, .domain_form_7 .search_domain_btn, .single_blog_item_2 .boxed_btn, .call_to_action_area .boxed_btn, .call_to_action_area_3 .ct_wrapper .boxed_btn, .packege_pricing_area .single_pakege .boxed_btn, .packege_pricing_area_2 .single_pakege_2 .boxed_btn, .single_pakege_4 .pricing_footer .boxed_btn, .single_pakege_5 .pricing_footer .boxed_btn, .single_pakege_6 .pricing_footer .boxed_btn, .single_pakege_7 .pricing_footer .boxed_btn, .single_pakege_8 .pricing_footer .boxed_btn, .packege_pricing_area_5 .single_pakege_5 .pricing_footer .boxed_btn, .packege_pricing_area_6 .single_pakege_5 .pricing_footer .boxed_btn, .packege_pricing_area_7 .single_pakege_5 .pricing_footer .boxed_btn, .packege_pricing_area_8 .single_pakege_5 .pricing_footer .boxed_btn, .packege_pricing_area_5 .single_pakege_6 .pricing_footer .boxed_btn, .packege_pricing_area_6 .single_pakege_6 .pricing_footer .boxed_btn, .packege_pricing_area_7 .single_pakege_6 .pricing_footer .boxed_btn, .packege_pricing_area_8 .single_pakege_6 .pricing_footer .boxed_btn, .packege_pricing_area_5 .single_pakege_7 .pricing_footer .boxed_btn, .packege_pricing_area_6 .single_pakege_7 .pricing_footer .boxed_btn, .packege_pricing_area_7 .single_pakege_7 .pricing_footer .boxed_btn, .packege_pricing_area_8 .single_pakege_7 .pricing_footer .boxed_btn, .packege_pricing_area_5 .single_pakege_8 .pricing_footer .boxed_btn, .packege_pricing_area_6 .single_pakege_8 .pricing_footer .boxed_btn, .packege_pricing_area_7 .single_pakege_8 .pricing_footer .boxed_btn, .packege_pricing_area_8 .single_pakege_8 .pricing_footer .boxed_btn, .single_service_item .boxed_btn, .service_area_2 .single_service_item_2 .boxed_btn, .service_area_4 .single_service_item_4 .boxed_btn, .service_carousel_area_1 .single_service_item_5 a.boxed_btn, .service_carousel_area_4 .single_service_item_8 a.boxed_btn, .service_carousel_area_3 .single_service_item_7 a.boxed_btn, .hero_area_2 .hero_content_wrapper .hero_content .boxed_btn, .coming_soon_area .subscribe_wrapper .boxed_btn, .promo_content_area_6 .right_side .boxed_btn, .hero_area_4 .hero_content_wrapper .hero_content .boxed_btn_4, .single_offer .right_side .boxed_btn, .promo_content_area_5 .right_side .boxed_btn, .spacial_feature a.boxed_btn, .about_section_2 .single_about .about_info a.boxed_btn {
  position: relative;
  z-index: 4;
  -webkit-transition: all 0.3s ease-in-out;
  -moz-transition: all 0.3s ease-in-out;
  -ms-transition: all 0.3s ease-in-out;
  -o-transition: all 0.3s ease-in-out;
  transition: all 0.3s ease-in-out;
  display: inline-table;
  color: #fff;
  font-weight: 500;
  font-family: 'Fira Sans', sans-serif;
  font-size: 16px; }
  .gradient_btn_main span, .boxed_green_btn span, .boxed_green_btn_2 span, .hosting_brand .container .section_title .boxed_btn.boxed_green_btn span, .header_wrap .sign_in_up_area .boxed_green_btn.boxed_btn span, .hero_area .hero_content_wrapper .hero_content .boxed_btn span, .boxed_blue_btn span, .boxed_blue_btn_2 span, .hosting_brand .container .section_title .boxed_btn.boxed_blue_btn span, .header_wrap .sign_in_up_area .boxed_blue_btn.boxed_btn span, .domain_form_5 .search_domain_btn span, .domain_form_6 .search_domain_btn span, .domain_form_7 .search_domain_btn span, .single_blog_item_2 .boxed_btn span, .call_to_action_area .boxed_btn span, .call_to_action_area_3 .ct_wrapper .boxed_btn span, .packege_pricing_area .single_pakege .boxed_btn span, .packege_pricing_area_2 .single_pakege_2 .boxed_btn span, .single_pakege_4 .pricing_footer .boxed_btn span, .single_pakege_5 .pricing_footer .boxed_btn span, .single_pakege_6 .pricing_footer .boxed_btn span, .single_pakege_7 .pricing_footer .boxed_btn span, .single_pakege_8 .pricing_footer .boxed_btn span, .packege_pricing_area_5 .single_pakege_5 .pricing_footer .boxed_btn span, .packege_pricing_area_6 .single_pakege_5 .pricing_footer .boxed_btn span, .packege_pricing_area_7 .single_pakege_5 .pricing_footer .boxed_btn span, .packege_pricing_area_8 .single_pakege_5 .pricing_footer .boxed_btn span, .packege_pricing_area_5 .single_pakege_6 .pricing_footer .boxed_btn span, .packege_pricing_area_6 .single_pakege_6 .pricing_footer .boxed_btn span, .packege_pricing_area_7 .single_pakege_6 .pricing_footer .boxed_btn span, .packege_pricing_area_8 .single_pakege_6 .pricing_footer .boxed_btn span, .packege_pricing_area_5 .single_pakege_7 .pricing_footer .boxed_btn span, .packege_pricing_area_6 .single_pakege_7 .pricing_footer .boxed_btn span, .packege_pricing_area_7 .single_pakege_7 .pricing_footer .boxed_btn span, .packege_pricing_area_8 .single_pakege_7 .pricing_footer .boxed_btn span, .packege_pricing_area_5 .single_pakege_8 .pricing_footer .boxed_btn span, .packege_pricing_area_6 .single_pakege_8 .pricing_footer .boxed_btn span, .packege_pricing_area_7 .single_pakege_8 .pricing_footer .boxed_btn span, .packege_pricing_area_8 .single_pakege_8 .pricing_footer .boxed_btn span, .single_service_item .boxed_btn span, .service_area_2 .single_service_item_2 .boxed_btn span, .service_area_4 .single_service_item_4 .boxed_btn span, .service_carousel_area_1 .single_service_item_5 a.boxed_btn span, .service_carousel_area_4 .single_service_item_8 a.boxed_btn span, .service_carousel_area_3 .single_service_item_7 a.boxed_btn span, .hero_area_2 .hero_content_wrapper .hero_content .boxed_btn span, .coming_soon_area .subscribe_wrapper .boxed_btn span, .promo_content_area_6 .right_side .boxed_btn span, .hero_area_4 .hero_content_wrapper .hero_content .boxed_btn_4 span, .single_offer .right_side .boxed_btn span, .promo_content_area_5 .right_side .boxed_btn span, .spacial_feature a.boxed_btn span, .about_section_2 .single_about .about_info a.boxed_btn span, .gradient_btn_main i, .boxed_green_btn i, .boxed_green_btn_2 i, .hosting_brand .container .section_title .boxed_btn.boxed_green_btn i, .header_wrap .sign_in_up_area .boxed_green_btn.boxed_btn i, .hero_area .hero_content_wrapper .hero_content .boxed_btn i, .boxed_blue_btn i, .boxed_blue_btn_2 i, .hosting_brand .container .section_title .boxed_btn.boxed_blue_btn i, .header_wrap .sign_in_up_area .boxed_blue_btn.boxed_btn i, .domain_form_5 .search_domain_btn i, .domain_form_6 .search_domain_btn i, .domain_form_7 .search_domain_btn i, .single_blog_item_2 .boxed_btn i, .call_to_action_area .boxed_btn i, .call_to_action_area_3 .ct_wrapper .boxed_btn i, .packege_pricing_area .single_pakege .boxed_btn i, .packege_pricing_area_2 .single_pakege_2 .boxed_btn i, .single_pakege_4 .pricing_footer .boxed_btn i, .single_pakege_5 .pricing_footer .boxed_btn i, .single_pakege_6 .pricing_footer .boxed_btn i, .single_pakege_7 .pricing_footer .boxed_btn i, .single_pakege_8 .pricing_footer .boxed_btn i, .packege_pricing_area_5 .single_pakege_5 .pricing_footer .boxed_btn i, .packege_pricing_area_6 .single_pakege_5 .pricing_footer .boxed_btn i, .packege_pricing_area_7 .single_pakege_5 .pricing_footer .boxed_btn i, .packege_pricing_area_8 .single_pakege_5 .pricing_footer .boxed_btn i, .packege_pricing_area_5 .single_pakege_6 .pricing_footer .boxed_btn i, .packege_pricing_area_6 .single_pakege_6 .pricing_footer .boxed_btn i, .packege_pricing_area_7 .single_pakege_6 .pricing_footer .boxed_btn i, .packege_pricing_area_8 .single_pakege_6 .pricing_footer .boxed_btn i, .packege_pricing_area_5 .single_pakege_7 .pricing_footer .boxed_btn i, .packege_pricing_area_6 .single_pakege_7 .pricing_footer .boxed_btn i, .packege_pricing_area_7 .single_pakege_7 .pricing_footer .boxed_btn i, .packege_pricing_area_8 .single_pakege_7 .pricing_footer .boxed_btn i, .packege_pricing_area_5 .single_pakege_8 .pricing_footer .boxed_btn i, .packege_pricing_area_6 .single_pakege_8 .pricing_footer .boxed_btn i, .packege_pricing_area_7 .single_pakege_8 .pricing_footer .boxed_btn i, .packege_pricing_area_8 .single_pakege_8 .pricing_footer .boxed_btn i, .single_service_item .boxed_btn i, .service_area_2 .single_service_item_2 .boxed_btn i, .service_area_4 .single_service_item_4 .boxed_btn i, .service_carousel_area_1 .single_service_item_5 a.boxed_btn i, .service_carousel_area_4 .single_service_item_8 a.boxed_btn i, .service_carousel_area_3 .single_service_item_7 a.boxed_btn i, .hero_area_2 .hero_content_wrapper .hero_content .boxed_btn i, .coming_soon_area .subscribe_wrapper .boxed_btn i, .promo_content_area_6 .right_side .boxed_btn i, .hero_area_4 .hero_content_wrapper .hero_content .boxed_btn_4 i, .single_offer .right_side .boxed_btn i, .promo_content_area_5 .right_side .boxed_btn i, .spacial_feature a.boxed_btn i, .about_section_2 .single_about .about_info a.boxed_btn i {
    position: relative;
    z-index: 3; }
  .gradient_btn_main:after, .boxed_green_btn:after, .boxed_green_btn_2:after, .hosting_brand .container .section_title .boxed_btn.boxed_green_btn:after, .header_wrap .sign_in_up_area .boxed_green_btn.boxed_btn:after, .hero_area .hero_content_wrapper .hero_content .boxed_btn:after, .boxed_blue_btn:after, .boxed_blue_btn_2:after, .hosting_brand .container .section_title .boxed_btn.boxed_blue_btn:after, .header_wrap .sign_in_up_area .boxed_blue_btn.boxed_btn:after, .domain_form_5 .search_domain_btn:after, .domain_form_6 .search_domain_btn:after, .domain_form_7 .search_domain_btn:after, .single_blog_item_2 .boxed_btn:after, .call_to_action_area .boxed_btn:after, .call_to_action_area_3 .ct_wrapper .boxed_btn:after, .packege_pricing_area .single_pakege .boxed_btn:after, .packege_pricing_area_2 .single_pakege_2 .boxed_btn:after, .single_pakege_4 .pricing_footer .boxed_btn:after, .single_pakege_5 .pricing_footer .boxed_btn:after, .single_pakege_6 .pricing_footer .boxed_btn:after, .single_pakege_7 .pricing_footer .boxed_btn:after, .single_pakege_8 .pricing_footer .boxed_btn:after, .packege_pricing_area_5 .single_pakege_5 .pricing_footer .boxed_btn:after, .packege_pricing_area_6 .single_pakege_5 .pricing_footer .boxed_btn:after, .packege_pricing_area_7 .single_pakege_5 .pricing_footer .boxed_btn:after, .packege_pricing_area_8 .single_pakege_5 .pricing_footer .boxed_btn:after, .packege_pricing_area_5 .single_pakege_6 .pricing_footer .boxed_btn:after, .packege_pricing_area_6 .single_pakege_6 .pricing_footer .boxed_btn:after, .packege_pricing_area_7 .single_pakege_6 .pricing_footer .boxed_btn:after, .packege_pricing_area_8 .single_pakege_6 .pricing_footer .boxed_btn:after, .packege_pricing_area_5 .single_pakege_7 .pricing_footer .boxed_btn:after, .packege_pricing_area_6 .single_pakege_7 .pricing_footer .boxed_btn:after, .packege_pricing_area_7 .single_pakege_7 .pricing_footer .boxed_btn:after, .packege_pricing_area_8 .single_pakege_7 .pricing_footer .boxed_btn:after, .packege_pricing_area_5 .single_pakege_8 .pricing_footer .boxed_btn:after, .packege_pricing_area_6 .single_pakege_8 .pricing_footer .boxed_btn:after, .packege_pricing_area_7 .single_pakege_8 .pricing_footer .boxed_btn:after, .packege_pricing_area_8 .single_pakege_8 .pricing_footer .boxed_btn:after, .single_service_item .boxed_btn:after, .service_area_2 .single_service_item_2 .boxed_btn:after, .service_area_4 .single_service_item_4 .boxed_btn:after, .service_carousel_area_1 .single_service_item_5 a.boxed_btn:after, .service_carousel_area_4 .single_service_item_8 a.boxed_btn:after, .service_carousel_area_3 .single_service_item_7 a.boxed_btn:after, .hero_area_2 .hero_content_wrapper .hero_content .boxed_btn:after, .coming_soon_area .subscribe_wrapper .boxed_btn:after, .promo_content_area_6 .right_side .boxed_btn:after, .hero_area_4 .hero_content_wrapper .hero_content .boxed_btn_4:after, .single_offer .right_side .boxed_btn:after, .promo_content_area_5 .right_side .boxed_btn:after, .spacial_feature a.boxed_btn:after, .about_section_2 .single_about .about_info a.boxed_btn:after {
    position: absolute;
    content: '';
    top: 0;
    left: 0;
    width: 100%;
    height: 100%;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out;
    z-index: -2;
    opacity: 0; }
  .gradient_btn_main:hover:after, .boxed_green_btn:hover:after, .boxed_green_btn_2:hover:after, .hosting_brand .container .section_title .boxed_btn.boxed_green_btn:hover:after, .header_wrap .sign_in_up_area .boxed_green_btn.boxed_btn:hover:after, .hero_area .hero_content_wrapper .hero_content .boxed_btn:hover:after, .boxed_blue_btn:hover:after, .boxed_blue_btn_2:hover:after, .hosting_brand .container .section_title .boxed_btn.boxed_blue_btn:hover:after, .header_wrap .sign_in_up_area .boxed_blue_btn.boxed_btn:hover:after, .domain_form_5 .search_domain_btn:hover:after, .domain_form_6 .search_domain_btn:hover:after, .domain_form_7 .search_domain_btn:hover:after, .single_blog_item_2 .boxed_btn:hover:after, .call_to_action_area .boxed_btn:hover:after, .call_to_action_area_3 .ct_wrapper .boxed_btn:hover:after, .packege_pricing_area .single_pakege .boxed_btn:hover:after, .packege_pricing_area_2 .single_pakege_2 .boxed_btn:hover:after, .single_pakege_4 .pricing_footer .boxed_btn:hover:after, .single_pakege_5 .pricing_footer .boxed_btn:hover:after, .single_pakege_6 .pricing_footer .boxed_btn:hover:after, .single_pakege_7 .pricing_footer .boxed_btn:hover:after, .single_pakege_8 .pricing_footer .boxed_btn:hover:after, .single_service_item .boxed_btn:hover:after, .service_area_2 .single_service_item_2 .boxed_btn:hover:after, .service_area_4 .single_service_item_4 .boxed_btn:hover:after, .service_carousel_area_1 .single_service_item_5 a.boxed_btn:hover:after, .service_carousel_area_4 .single_service_item_8 a.boxed_btn:hover:after, .service_carousel_area_3 .single_service_item_7 a.boxed_btn:hover:after, .hero_area_2 .hero_content_wrapper .hero_content .boxed_btn:hover:after, .coming_soon_area .subscribe_wrapper .boxed_btn:hover:after, .promo_content_area_6 .right_side .boxed_btn:hover:after, .hero_area_4 .hero_content_wrapper .hero_content .boxed_btn_4:hover:after, .single_offer .right_side .boxed_btn:hover:after, .promo_content_area_5 .right_side .boxed_btn:hover:after, .spacial_feature a.boxed_btn:hover:after, .about_section_2 .single_about .about_info a.boxed_btn:hover:after {
    opacity: 1; }

.boxed_green_btn, .boxed_green_btn_2, .hosting_brand .container .section_title .boxed_btn.boxed_green_btn, .header_wrap .sign_in_up_area .boxed_green_btn.boxed_btn, .hero_area .hero_content_wrapper .hero_content .boxed_btn {
  background: #2cd63c;
  margin-bottom: 0;
  font-size: 14px;
  border-radius: 5px;
  margin-left: 7px;
  border: 1px solid #fff;
  display: inline-table;
  border-radius: 5px; }
  .boxed_green_btn:after, .boxed_green_btn_2:after, .hosting_brand .container .section_title .boxed_btn.boxed_green_btn:after, .header_wrap .sign_in_up_area .boxed_green_btn.boxed_btn:after, .hero_area .hero_content_wrapper .hero_content .boxed_btn:after {
    background: -webkit-linear-gradient(left, #0acffe 0%, #182dee 100%);
    background: -o-linear-gradient(right, #0acffe 0%, #182dee 100%);
    background: -moz-linear-gradient(to right, #0acffe 0%, #182dee 100%);
    background: linear-gradient(to right, #0acffe 0%, #182dee 100%);
    border-radius: 5px; }
  .boxed_green_btn:hover, .boxed_green_btn_2:hover, .hosting_brand .container .section_title .boxed_btn.boxed_green_btn:hover, .header_wrap .sign_in_up_area .boxed_green_btn.boxed_btn:hover, .hero_area .hero_content_wrapper .hero_content .boxed_btn:hover {
    color: #fff; }

.boxed_green_btn_2 {
  background: #2cd63c;
  color: #fff; }
  .boxed_green_btn_2:after {
    background: -webkit-linear-gradient(left, #5317e6 0%, #07164e 100%);
    background: -o-linear-gradient(right, #5317e6 0%, #07164e 100%);
    background: -moz-linear-gradient(to right, #5317e6 0%, #07164e 100%);
    background: linear-gradient(to right, #5317e6 0%, #07164e 100%); }
  .boxed_green_btn_2:hover {
    color: #fff; }

.boxed_blue_btn, .boxed_blue_btn_2, .hosting_brand .container .section_title .boxed_btn.boxed_blue_btn, .header_wrap .sign_in_up_area .boxed_blue_btn.boxed_btn {
  margin-bottom: 0;
  border-radius: 5px;
  font-size: 14px;
  margin-left: 7px;
  display: inline-table;
  border: 1px solid #fff;
  background: -webkit-linear-gradient(left, #0acffe 0%, #182dee 100%);
  background: -o-linear-gradient(right, #0acffe 0%, #182dee 100%);
  background: -moz-linear-gradient(to right, #0acffe 0%, #182dee 100%);
  background: linear-gradient(to right, #0acffe 0%, #182dee 100%);
  border-radius: 5px; }
  .boxed_blue_btn:after, .boxed_blue_btn_2:after, .hosting_brand .container .section_title .boxed_btn.boxed_blue_btn:after, .header_wrap .sign_in_up_area .boxed_blue_btn.boxed_btn:after {
    background: #2cd63c;
    border-radius: 5px; }
  .boxed_blue_btn:hover, .boxed_blue_btn_2:hover, .hosting_brand .container .section_title .boxed_btn.boxed_blue_btn:hover, .header_wrap .sign_in_up_area .boxed_blue_btn.boxed_btn:hover {
    color: #fff; }

.boxed_blue_btn_2 {
  background: -webkit-linear-gradient(left, #5317e6 0%, #07164e 100%);
  background: -o-linear-gradient(right, #5317e6 0%, #07164e 100%);
  background: -moz-linear-gradient(to right, #5317e6 0%, #07164e 100%);
  background: linear-gradient(to right, #5317e6 0%, #07164e 100%);
  color: #fff; }
  .boxed_blue_btn_2:after {
    background: #2cd63c; }
  .boxed_blue_btn_2:hover {
    color: #fff; }

.play_btn_pluse {
  position: absolute;
  top: 50%;
  border: none;
  left: 50%;
  transform: translate(-50%, -50%);
  width: 75px;
  height: 75px;
  border-radius: 50%;
  background: #2cd63c;
  cursor: pointer;
  z-index: 9;
  -webkit-transition: all 0.3s ease-in-out;
  -moz-transition: all 0.3s ease-in-out;
  -ms-transition: all 0.3s ease-in-out;
  -o-transition: all 0.3s ease-in-out;
  transition: all 0.3s ease-in-out; }
  .play_btn_pluse:after {
    position: absolute;
    content: '';
    width: 100%;
    height: 100%;
    border-radius: 50%;
    z-index: 8;
    background: #2cd63c;
    left: 50%;
    top: 50%;
    transform: translate(-50%, -50%); }
  .play_btn_pluse:before {
    position: absolute;
    content: '';
    width: 100%;
    height: 100%;
    border-radius: 50%;
    z-index: 2;
    left: 50%;
    top: 50%;
    background: #000;
    animation: pulse-border 1500ms ease-out infinite;
    transform: translate(-50%, -50%); }
@keyframes pulse-border {
  0% {
    transform: translateX(-50%) translateY(-50%) translateZ(0) scale(1);
    opacity: 1; }
  100% {
    transform: translateX(-50%) translateY(-50%) translateZ(0) scale(1.5);
    opacity: 0; } }
  .play_btn_pluse span {
    display: block;
    position: absolute;
    z-index: 10;
    top: 50%;
    left: 50%;
    transform: translate(-50%, -50%);
    height: 0;
    border-left: 20px solid #fff;
    border-top: 14px solid transparent;
    border-bottom: 14px solid transparent; }
  .play_btn_pluse:hover:after {
    background-color: #26c335; }

.mirrord, .call_to_action_area_2 .mail_subscribe form button i {
  display: block;
  -webkit-transform: matrix(-1, 0, 0, 1, 0, 0);
  -moz-transform: matrix(-1, 0, 0, 1, 0, 0);
  -o-transform: matrix(-1, 0, 0, 1, 0, 0);
  transform: matrix(-1, 0, 0, 1, 0, 0); }

.batch_yellow, .batch_green, .batch_red {
  font-size: 12px;
  padding: 3px 7px 3px 3px;
  border-radius: 3px;
  margin-left: 7px; }

.batch_green {
  background: #19c131; }

.batch_yellow {
  background: #f49b0e; }

.batch_red {
  background: #d92137; }

@media only screen and (min-width: 992px) and (max-width: 1200px) {
  .section_padding, .testimonial_area, .testimonial_area_2, .testimonial_area_3, .testimonial_area_5, .faq_area, .order_area, .team_area_1, .team_area_2, .product_area, .knowledge_area, .contact_area, .contact_area_2, .hosting_brand_2, .blog_area_3, .blog_area_4, .blog_area_5, .single_blog_with_sidebar, .simple_blog, .masonry_blog, .grid_blog, .two_column_grid_blog, .two_column_with_side_bar, .full_grid_blog, .full_content_blog, .full_width_with_side_bar, .call_to_action_area_4, .call_to_action_area_5, .call_to_action_area_6, .call_to_action_area_7, .call_to_action_area_8, .packege_pricing_area, .packege_pricing_area_2, .packege_pricing_area_4, .packege_pricing_area_5, .packege_pricing_area_6, .packege_pricing_area_7, .packege_pricing_area_8, .service_carousel_area_1, .service_carousel_area_4, .service_carousel_area_2, .service_carousel_area_3, .promo_content_area, .client_area_6, .info_area_1, .info_area_2, .sign_in_area, .sign_up_area, .reset_pass, .client_and_testimonial_3, .promo_content_area_6, .hosting_brand_3, .packege_pricing_area_3, .offer_carousel, .promo_content_area_5, .client_and_testimonial, .about_section {
    padding: 100px 0; }

  .section_title_main, .Question_answer_area .container-fluid .right_side {
    margin-bottom: 60px; }
    .section_title_main h2, .Question_answer_area .container-fluid .right_side h2 {
      font-size: 36px; }
    .section_title_main h3, .Question_answer_area .container-fluid .right_side h3 {
      font-size: 20px; }

  .section_title_main_2, .section_title_main_3, .promo_content_area .section_title {
    padding-right: 0px; }

  .section_title_main_4 {
    margin-bottom: 60px; }
    .section_title_main_4 h2 {
      margin-bottom: 30px; }
      .section_title_main_4 h2:after {
        top: 65%; }
    .section_title_main_4 h3 {
      font-size: 16px; } }
@media only screen and (min-width: 768px) and (max-width: 991px) {
  .section_padding, .testimonial_area, .testimonial_area_2, .testimonial_area_3, .testimonial_area_5, .faq_area, .order_area, .team_area_1, .team_area_2, .product_area, .knowledge_area, .contact_area, .contact_area_2, .hosting_brand_2, .blog_area_3, .blog_area_4, .blog_area_5, .single_blog_with_sidebar, .simple_blog, .masonry_blog, .grid_blog, .two_column_grid_blog, .two_column_with_side_bar, .full_grid_blog, .full_content_blog, .full_width_with_side_bar, .call_to_action_area_4, .call_to_action_area_5, .call_to_action_area_6, .call_to_action_area_7, .call_to_action_area_8, .packege_pricing_area, .packege_pricing_area_2, .packege_pricing_area_4, .packege_pricing_area_5, .packege_pricing_area_6, .packege_pricing_area_7, .packege_pricing_area_8, .service_carousel_area_1, .service_carousel_area_4, .service_carousel_area_2, .service_carousel_area_3, .promo_content_area, .client_area_6, .info_area_1, .info_area_2, .sign_in_area, .sign_up_area, .reset_pass, .client_and_testimonial_3, .promo_content_area_6, .hosting_brand_3, .packege_pricing_area_3, .offer_carousel, .promo_content_area_5, .client_and_testimonial, .about_section {
    padding: 60px 0; }

  .section_padding_2, .feature_area_2, .feature_area_7, .feature_area_9, .feature_area_12, .service_area, .service_area_2, .service_area_3, .service_area_4 {
    padding: 60px 0 15px; }

  .section_title_main, .Question_answer_area .container-fluid .right_side {
    margin-bottom: 50px; }
    .section_title_main h2, .Question_answer_area .container-fluid .right_side h2 {
      font-size: 30px; }
    .section_title_main h3, .Question_answer_area .container-fluid .right_side h3 {
      font-size: 18px; }

  .section_title_main_2, .section_title_main_3, .promo_content_area .section_title {
    text-align: center;
    padding-right: 0;
    margin-bottom: 65px; }
    .section_title_main_2 h2, .section_title_main_3 h2, .promo_content_area .section_title h2 {
      font-size: 28px; }
    .section_title_main_2 h3, .section_title_main_3 h3, .promo_content_area .section_title h3 {
      font-size: 16px; }

  .section_title_main_4, .section_title_main_5 {
    margin-bottom: 50px; }
    .section_title_main_4 h2, .section_title_main_5 h2 {
      margin-bottom: 25px; }
      .section_title_main_4 h2:after, .section_title_main_5 h2:after {
        top: 65%; }
    .section_title_main_4 h3, .section_title_main_5 h3 {
      font-size: 16px; }

  .page_title h2 {
    font-size: 28px;
    margin-bottom: 12px; }
  .page_title .bread_crumb {
    font-size: 18px; }

  .play_btn_pluse {
    width: 55px;
    height: 55px; }
    .play_btn_pluse span {
      border-left: 16px solid #fff;
      border-top: 10px solid transparent;
      border-bottom: 10px solid transparent; } }
@media (max-width: 767px) {
  .section_padding, .testimonial_area, .testimonial_area_2, .testimonial_area_3, .testimonial_area_5, .faq_area, .order_area, .team_area_1, .team_area_2, .product_area, .knowledge_area, .contact_area, .contact_area_2, .hosting_brand_2, .blog_area_3, .blog_area_4, .blog_area_5, .single_blog_with_sidebar, .simple_blog, .masonry_blog, .grid_blog, .two_column_grid_blog, .two_column_with_side_bar, .full_grid_blog, .full_content_blog, .full_width_with_side_bar, .call_to_action_area_4, .call_to_action_area_5, .call_to_action_area_6, .call_to_action_area_7, .call_to_action_area_8, .packege_pricing_area, .packege_pricing_area_2, .packege_pricing_area_4, .packege_pricing_area_5, .packege_pricing_area_6, .packege_pricing_area_7, .packege_pricing_area_8, .service_carousel_area_1, .service_carousel_area_4, .service_carousel_area_2, .service_carousel_area_3, .promo_content_area, .client_area_6, .info_area_1, .info_area_2, .sign_in_area, .sign_up_area, .reset_pass, .client_and_testimonial_3, .promo_content_area_6, .hosting_brand_3, .packege_pricing_area_3, .offer_carousel, .promo_content_area_5, .client_and_testimonial, .about_section {
    padding: 50px 0; }

  .section_padding_2, .feature_area_2, .feature_area_7, .feature_area_9, .feature_area_12, .service_area, .service_area_2, .service_area_3, .service_area_4 {
    padding: 50px 0 15px; }

  .section_title_main, .Question_answer_area .container-fluid .right_side {
    margin-bottom: 30px; }
    .section_title_main h2, .Question_answer_area .container-fluid .right_side h2 {
      font-size: 24px; }
    .section_title_main h3, .Question_answer_area .container-fluid .right_side h3 {
      font-size: 16px; }

  .section_title_main_2, .section_title_main_3, .promo_content_area .section_title {
    text-align: center;
    padding-right: 0;
    margin-bottom: 35px; }
    .section_title_main_2 h2, .section_title_main_3 h2, .promo_content_area .section_title h2 {
      font-size: 28px; }
    .section_title_main_2 h3, .section_title_main_3 h3, .promo_content_area .section_title h3 {
      font-size: 16px; }

  .section_title_main_4, .section_title_main_5 {
    margin-bottom: 30px; }
    .section_title_main_4 h2, .section_title_main_5 h2 {
      font-size: 28px;
      margin-bottom: 18px; }
      .section_title_main_4 h2:after, .section_title_main_5 h2:after {
        top: 70%;
        left: calc(50% - 75px);
        height: 22px;
        width: 150px; }
    .section_title_main_4 h3, .section_title_main_5 h3 {
      font-size: 14px; }

  .page_title h2 {
    font-size: 28px;
    margin-bottom: 10px; }
  .page_title .bread_crumb {
    font-size: 16px; }

  .play_btn_pluse {
    width: 45px;
    height: 45px; }
    .play_btn_pluse span {
      border-left: 10px solid #fff;
      border-top: 7px solid transparent;
      border-bottom: 7px solid transparent; } }
.testimonial_wrapper .swiper-slide .single_testionial, .testimonial_wrapper_2 .swiper-slide .single_testionial, .testimonial_area_3 .testimonial_wrapper_3 .swiper-slide .single_testionial {
  padding: 30px 35px;
  padding-top: 60px;
  background: #fff;
  text-align: left;
  border-radius: 30px;
  position: relative;
  color: #fff;
  margin: 30px 20px 100px; }
  .testimonial_wrapper .swiper-slide .single_testionial:after, .testimonial_wrapper_2 .swiper-slide .single_testionial:after, .testimonial_area_3 .testimonial_wrapper_3 .swiper-slide .single_testionial:after {
    background: -webkit-linear-gradient(bottom, #0acffe 0%, #182dee 100%);
    background: -o-linear-gradient(top, #0acffe 0%, #182dee 100%);
    background: -moz-linear-gradient(to top, #0acffe 0%, #182dee 100%);
    background: linear-gradient(to top, #0acffe 0%, #182dee 100%);
    width: calc(100% + 2px);
    height: calc(100% + 2px);
    content: '';
    position: absolute;
    border-radius: 30px;
    z-index: -1;
    left: -1px;
    top: -1px; }
  .testimonial_wrapper .swiper-slide .single_testionial .triangle, .testimonial_wrapper_2 .swiper-slide .single_testionial .triangle, .testimonial_area_3 .testimonial_wrapper_3 .swiper-slide .single_testionial .triangle {
    position: absolute;
    right: 60px;
    width: 40px;
    background: #fff;
    bottom: -1px;
    height: 2px; }
    .testimonial_wrapper .swiper-slide .single_testionial .triangle:after, .testimonial_wrapper_2 .swiper-slide .single_testionial .triangle:after, .testimonial_area_3 .testimonial_wrapper_3 .swiper-slide .single_testionial .triangle:after, .testimonial_wrapper .swiper-slide .single_testionial .triangle:before, .testimonial_wrapper_2 .swiper-slide .single_testionial .triangle:before, .testimonial_area_3 .testimonial_wrapper_3 .swiper-slide .single_testionial .triangle:before {
      content: '';
      display: block;
      position: absolute;
      left: 0;
      width: 0;
      height: 0;
      border-style: solid; }
    .testimonial_wrapper .swiper-slide .single_testionial .triangle:before, .testimonial_wrapper_2 .swiper-slide .single_testionial .triangle:before, .testimonial_area_3 .testimonial_wrapper_3 .swiper-slide .single_testionial .triangle:before {
      top: 2px;
      border-color: #fff transparent transparent #fff;
      border-width: 20px;
      z-index: 0; }
    .testimonial_wrapper .swiper-slide .single_testionial .triangle:after, .testimonial_wrapper_2 .swiper-slide .single_testionial .triangle:after, .testimonial_area_3 .testimonial_wrapper_3 .swiper-slide .single_testionial .triangle:after {
      top: 1px;
      border-color: #0ACFFE transparent transparent #0ACFFE;
      border-width: 22px;
      z-index: -2;
      left: -1px;
      color: red; }
  .testimonial_wrapper .swiper-slide .single_testionial .ticket, .testimonial_wrapper_2 .swiper-slide .single_testionial .ticket, .testimonial_area_3 .testimonial_wrapper_3 .swiper-slide .single_testionial .ticket {
    display: inline-block;
    width: 70px;
    height: 70px;
    border: none;
    border-radius: 50%;
    position: absolute;
    top: calc(0px - 30px);
    left: calc(50% - 35px);
    background: -webkit-linear-gradient(bottom, #0acffe 0%, #182dee 100%);
    background: -o-linear-gradient(top, #0acffe 0%, #182dee 100%);
    background: -moz-linear-gradient(to top, #0acffe 0%, #182dee 100%);
    background: linear-gradient(to top, #0acffe 0%, #182dee 100%);
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
    .testimonial_wrapper .swiper-slide .single_testionial .ticket p, .testimonial_wrapper_2 .swiper-slide .single_testionial .ticket p, .testimonial_area_3 .testimonial_wrapper_3 .swiper-slide .single_testionial .ticket p {
      text-align: center; }
      .testimonial_wrapper .swiper-slide .single_testionial .ticket p i, .testimonial_wrapper_2 .swiper-slide .single_testionial .ticket p i, .testimonial_area_3 .testimonial_wrapper_3 .swiper-slide .single_testionial .ticket p i {
        line-height: 65px;
        text-align: center;
        font-size: 40px;
        color: #fff; }
  .testimonial_wrapper .swiper-slide .single_testionial p, .testimonial_wrapper_2 .swiper-slide .single_testionial p, .testimonial_area_3 .testimonial_wrapper_3 .swiper-slide .single_testionial p {
    color: #304e73;
    font-weight: 400;
    font-family: 'Fira Sans', sans-serif;
    font-size: 16px;
    line-height: 28px;
    margin-bottom: 16px; }
  .testimonial_wrapper .swiper-slide .single_testionial h4, .testimonial_wrapper_2 .swiper-slide .single_testionial h4, .testimonial_area_3 .testimonial_wrapper_3 .swiper-slide .single_testionial h4 {
    color: #2cd63c;
    font-size: 18px;
    line-height: 30px;
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif; }
    .testimonial_wrapper .swiper-slide .single_testionial h4 span, .testimonial_wrapper_2 .swiper-slide .single_testionial h4 span, .testimonial_area_3 .testimonial_wrapper_3 .swiper-slide .single_testionial h4 span {
      font-size: 75%;
      display: block;
      color: #304e73;
      line-height: 16px; }
.testimonial_wrapper .swiper-slide-active .single_testionial, .testimonial_wrapper_2 .swiper-slide-active .single_testionial, .testimonial_area_3 .testimonial_wrapper_3 .swiper-slide-active .single_testionial {
  background: -webkit-linear-gradient(bottom, #0acffe 0%, #182dee 100%);
  background: -o-linear-gradient(top, #0acffe 0%, #182dee 100%);
  background: -moz-linear-gradient(to top, #0acffe 0%, #182dee 100%);
  background: linear-gradient(to top, #0acffe 0%, #182dee 100%); }
  .testimonial_wrapper .swiper-slide-active .single_testionial p, .testimonial_wrapper_2 .swiper-slide-active .single_testionial p, .testimonial_area_3 .testimonial_wrapper_3 .swiper-slide-active .single_testionial p {
    color: #fff; }
  .testimonial_wrapper .swiper-slide-active .single_testionial h4, .testimonial_wrapper_2 .swiper-slide-active .single_testionial h4, .testimonial_area_3 .testimonial_wrapper_3 .swiper-slide-active .single_testionial h4 {
    color: #fff; }
  .testimonial_wrapper .swiper-slide-active .single_testionial .triangle, .testimonial_wrapper_2 .swiper-slide-active .single_testionial .triangle, .testimonial_area_3 .testimonial_wrapper_3 .swiper-slide-active .single_testionial .triangle {
    background: none; }
    .testimonial_wrapper .swiper-slide-active .single_testionial .triangle:before, .testimonial_wrapper_2 .swiper-slide-active .single_testionial .triangle:before, .testimonial_area_3 .testimonial_wrapper_3 .swiper-slide-active .single_testionial .triangle:before {
      z-index: -3; }
  .testimonial_wrapper .swiper-slide-active .single_testionial .ticket, .testimonial_wrapper_2 .swiper-slide-active .single_testionial .ticket, .testimonial_area_3 .testimonial_wrapper_3 .swiper-slide-active .single_testionial .ticket {
    border: 3px solid #fff; }
.testimonial_wrapper .swiper-pagination-bullet, .testimonial_wrapper_2 .swiper-pagination-bullet, .testimonial_area_3 .testimonial_wrapper_3 .swiper-pagination-bullet {
  background: transparent;
  border: 1px solid transparent;
  padding: 10px;
  position: relative;
  -webkit-transition: all 0.3s ease-in-out;
  -moz-transition: all 0.3s ease-in-out;
  -ms-transition: all 0.3s ease-in-out;
  -o-transition: all 0.3s ease-in-out;
  transition: all 0.3s ease-in-out;
  top: 10px;
  opacity: 1; }
  .testimonial_wrapper .swiper-pagination-bullet:after, .testimonial_wrapper_2 .swiper-pagination-bullet:after, .testimonial_area_3 .testimonial_wrapper_3 .swiper-pagination-bullet:after {
    background: #0cbafc;
    content: '';
    width: 10px;
    top: 5px;
    left: 5px;
    height: 10px;
    border-radius: 50%;
    position: absolute; }
.testimonial_wrapper .swiper-pagination-bullet-active, .testimonial_wrapper_2 .swiper-pagination-bullet-active, .testimonial_area_3 .testimonial_wrapper_3 .swiper-pagination-bullet-active {
  border: 1px solid #0cbafc; }

.testimonial_area_2 {
  background: #00000059; }

.testimonial_wrapper_2 .swiper-slide-active .single_testionial, .testimonial_wrapper_2 .single_testionial .ticket {
  background: -webkit-linear-gradient(bottom, #1317d1 0%, #07164e 100%);
  background: -o-linear-gradient(top, #1317d1 0%, #07164e 100%);
  background: -moz-linear-gradient(to top, #1317d1 0%, #07164e 100%);
  background: linear-gradient(to top, #1317d1 0%, #07164e 100%);
  text-align: center; }
.testimonial_wrapper_2 .single_testionial:after {
  width: 0;
  height: 0; }
.testimonial_wrapper_2 .single_testionial .triangle:after {
  border-width: 21px;
  border-color: #1216d0 transparent transparent #1317d0;
  left: 0;
  top: -2px; }
.testimonial_wrapper_2 .single_testionial h4 {
  text-align: center; }
.testimonial_wrapper_2 .swiper-slide-active .single_testionial h4 span {
  color: #fff; }
.testimonial_wrapper_2 .swiper-slide .single_testionial .ticket {
  background: -webkit-linear-gradient(bottom, #1317d1 0%, #07164e 100%);
  background: -o-linear-gradient(top, #1317d1 0%, #07164e 100%);
  background: -moz-linear-gradient(to top, #1317d1 0%, #07164e 100%);
  background: linear-gradient(to top, #1317d1 0%, #07164e 100%); }
.testimonial_wrapper_2 .swiper-slide .single_testionial .triangle:after {
  border-color: #1216d0 transparent transparent #131bd1;
  top: 0px;
  left: 0; }
.testimonial_wrapper_2 .swiper-slide .single_testionial:after {
  background: none; }
.testimonial_wrapper_2 .swiper-pagination-bullet:after {
  background: #363bff; }
.testimonial_wrapper_2 .swiper-pagination-bullet-active {
  border: 1px solid #363bff; }

.testimonial_area_3 .testimonial_wrapper_3 .swiper-slide-active .single_testionial, .testimonial_area_3 .testimonial_wrapper_3 .single_testionial .ticket {
  background: none;
  text-align: center; }
.testimonial_area_3 .testimonial_wrapper_3 .swiper-slide .single_testionial {
  padding: 30px 0;
  padding-top: 60px;
  margin-top: 45px;
  margin-bottom: 45px;
  border-radius: 0;
  box-shadow: none;
  background: #1b38ff; }
  .testimonial_area_3 .testimonial_wrapper_3 .swiper-slide .single_testionial .ticket img {
    border-radius: 50%; }
.testimonial_area_3 .testimonial_wrapper_3 .swiper-slide .single_testionial:after {
  width: 0;
  height: 0;
  background: none; }
.testimonial_area_3 .testimonial_wrapper_3 .swiper-slide .single_testionial p, .testimonial_area_3 .testimonial_wrapper_3 .swiper-slide-active .single_testionial p {
  color: #f8fafe; }
.testimonial_area_3 .testimonial_wrapper_3 .swiper-slide .single_testionial h4, .testimonial_area_3 .testimonial_wrapper_3 .swiper-slide-active .single_testionial h4 {
  color: #fff;
  text-align: center; }
  .testimonial_area_3 .testimonial_wrapper_3 .swiper-slide .single_testionial h4 span, .testimonial_area_3 .testimonial_wrapper_3 .swiper-slide-active .single_testionial h4 span {
    color: #fff; }
.testimonial_area_3 .testimonial_wrapper_3 .swiper-slide .single_testionial .ticket {
  background: -webkit-linear-gradient(bottom, #1317d1 0%, #07164e 100%);
  background: -o-linear-gradient(top, #1317d1 0%, #07164e 100%);
  background: -moz-linear-gradient(to top, #1317d1 0%, #07164e 100%);
  background: linear-gradient(to top, #1317d1 0%, #07164e 100%); }
.testimonial_area_3 .testimonial_wrapper_3 .swiper-pagination-bullet:after {
  background: #363bff; }
.testimonial_area_3 .testimonial_wrapper_3 .swiper-pagination-bullet-active {
  border: 1px solid #363bff; }

.testimonial_area_4 {
  padding: 55px 0; }
  .testimonial_area_4 .single_testionial .author {
    border-radius: 70px;
    overflow: hidden;
    border: 10px solid #fff;
    position: relative;
    z-index: 1; }
    .testimonial_area_4 .single_testionial .author img {
      display: block; }
    .testimonial_area_4 .single_testionial .author .author_info {
      position: absolute;
      left: 0;
      text-align: center;
      bottom: 0%;
      padding: 15px 10px;
      z-index: 2;
      width: 100%; }
      .testimonial_area_4 .single_testionial .author .author_info:after {
        position: absolute;
        content: '';
        left: 0;
        top: 0;
        width: 100%;
        border-radius: 50px;
        opacity: .9;
        height: 100%;
        z-index: -1;
        background: -webkit-linear-gradient(top, #6a11cb 0%, #2575fc 100%);
        background: -o-linear-gradient(bottom, #6a11cb 0%, #2575fc 100%);
        background: -moz-linear-gradient(to bottom, #6a11cb 0%, #2575fc 100%);
        background: linear-gradient(to bottom, #6a11cb 0%, #2575fc 100%); }
      .testimonial_area_4 .single_testionial .author .author_info h4 {
        color: #fff;
        font-size: 18px;
        font-weight: 700;
        font-family: 'Fira Sans', sans-serif; }
        .testimonial_area_4 .single_testionial .author .author_info h4 span {
          font-size: 80%;
          display: block;
          font-weight: 400;
          font-family: 'Fira Sans', sans-serif; }
  .testimonial_area_4 .single_testionial .content {
    background: rgba(255, 255, 255, 0.15);
    text-align: center;
    padding: 30px 60px;
    border-radius: 60px;
    color: #fff;
    height: 260px; }
    .testimonial_area_4 .single_testionial .content p {
      font-size: 18px;
      line-height: 1.6; }
    .testimonial_area_4 .single_testionial .content i {
      display: inline-block;
      text-align: center;
      font-size: 24px;
      margin-bottom: 10px;
      font-weight: 500; }
  .testimonial_area_4 .swiper-button-prev, .testimonial_area_4 .swiper-button-next {
    background: none;
    top: 100%;
    width: 46px; }
  .testimonial_area_4 .swiper-button-prev {
    left: auto;
    right: 40%; }
  .testimonial_area_4 .swiper-button-next {
    left: 60%;
    right: auto; }

.testimonial_area_5 {
  background: -webkit-linear-gradient(left, #010094 0%, #1f003c 100%);
  background: -o-linear-gradient(right, #010094 0%, #1f003c 100%);
  background: -moz-linear-gradient(to right, #010094 0%, #1f003c 100%);
  background: linear-gradient(to right, #010094 0%, #1f003c 100%); }
  .testimonial_area_5 .single_testionial {
    padding: 30px;
    margin: 15px;
    border-radius: 10px;
    background: #fff; }
    .testimonial_area_5 .single_testionial .author {
      margin-top: 20px; }
      .testimonial_area_5 .single_testionial .author .author_img {
        height: 50px;
        display: inline-table;
        width: 50px;
        border-radius: 50%;
        border: 2px solid #fff; }
      .testimonial_area_5 .single_testionial .author .author_designation {
        display: inline-block;
        margin-left: 15px; }
        .testimonial_area_5 .single_testionial .author .author_designation h4 {
          font-size: 18px;
          font-weight: 500;
          font-family: 'Fira Sans', sans-serif;
          color: #3a2085; }
          .testimonial_area_5 .single_testionial .author .author_designation h4 span {
            display: block;
            font-size: 14px;
            font-weight: 400; }
      .testimonial_area_5 .single_testionial .author .rating {
        color: #ffcc02; }
    .testimonial_area_5 .single_testionial .content p {
      font-size: 14px;
      line-height: 1.7;
      margin-top: 10px; }
    .testimonial_area_5 .single_testionial .content i {
      color: #3a2085;
      font-size: 24px; }

.testimonial_area_6 {
  padding: 50px 0;
  background: -webkit-linear-gradient(bottom, #13128c 0%, #370863 100%);
  background: -o-linear-gradient(top, #13128c 0%, #370863 100%);
  background: -moz-linear-gradient(to top, #13128c 0%, #370863 100%);
  background: linear-gradient(to top, #13128c 0%, #370863 100%); }
  .testimonial_area_6 .swiper-container {
    padding: 25px 10px; }
  .testimonial_area_6 .single_testionial .content {
    background: rgba(255, 255, 255, 0.15);
    text-align: center;
    padding: 30px 60px;
    border-radius: 60px;
    color: #fff; }
    .testimonial_area_6 .single_testionial .content p {
      font-size: 18px;
      line-height: 1.6; }
    .testimonial_area_6 .single_testionial .content i {
      display: inline-block;
      text-align: center;
      font-size: 24px;
      margin-bottom: 10px;
      font-weight: 500; }
  .testimonial_area_6 .gallery-thumbs {
    box-sizing: border-box; }
    .testimonial_area_6 .gallery-thumbs .swiper-slide.author {
      height: 100%;
      transform: scale(0.8);
      text-align: center; }
      .testimonial_area_6 .gallery-thumbs .swiper-slide.author img {
        border-radius: 50%;
        height: 100px;
        border: 4px solid #fff; }
      .testimonial_area_6 .gallery-thumbs .swiper-slide.author .author_info {
        margin-top: 10px;
        display: none;
        -webkit-transition: all 0.3s ease-in-out;
        -moz-transition: all 0.3s ease-in-out;
        -ms-transition: all 0.3s ease-in-out;
        -o-transition: all 0.3s ease-in-out;
        transition: all 0.3s ease-in-out; }
        .testimonial_area_6 .gallery-thumbs .swiper-slide.author .author_info h4 {
          color: white;
          font-size: 22px; }
          .testimonial_area_6 .gallery-thumbs .swiper-slide.author .author_info h4 span {
            display: block;
            margin-top: 5px;
            font-size: 70%; }
      .testimonial_area_6 .gallery-thumbs .swiper-slide.author.swiper-slide-thumb-active {
        transform: scale(1); }
        .testimonial_area_6 .gallery-thumbs .swiper-slide.author.swiper-slide-thumb-active img {
          border: 6px solid #fff; }
        .testimonial_area_6 .gallery-thumbs .swiper-slide.author.swiper-slide-thumb-active .author_info {
          display: block; }
  .testimonial_area_6 .swiper-button-prev, .testimonial_area_6 .swiper-button-next {
    background: none;
    top: 48%;
    width: 30px; }
  .testimonial_area_6 .swiper-button-prev {
    left: auto;
    right: 93%; }
  .testimonial_area_6 .swiper-button-next {
    left: 93%;
    right: auto; }

@media only screen and (min-width: 992px) and (max-width: 1200px) {
  .testimonial_area_2 .single_testionial p {
    font-size: 15px;
    line-height: 22px; } }
@media only screen and (min-width: 768px) and (max-width: 991px) {
  .testimonial_area {
    margin-bottom: 0px; }

  .testimonial_area_4 {
    padding: 35px 0; }
    .testimonial_area_4 .single_testionial .author {
      border-radius: 50px;
      border: 7px solid #fff; }
    .testimonial_area_4 .single_testionial .content {
      padding: 30px; }
      .testimonial_area_4 .single_testionial .content p {
        font-size: 16px; }
    .testimonial_area_4 .swiper-button-prev {
      right: 36%; }
    .testimonial_area_4 .swiper-button-next {
      left: 64%; }

  .testimonial_area_5 .single_testionial {
    margin: 15px 60px; }

  .testimonial_area_6 .swiper-container {
    padding: 15px 5px; }
  .testimonial_area_6 .single_testionial .content {
    padding: 15px; }
    .testimonial_area_6 .single_testionial .content p {
      font-size: 16px; }
    .testimonial_area_6 .single_testionial .content i {
      font-size: 20px; }
  .testimonial_area_6 .gallery-thumbs .swiper-slide.author img {
    height: 70px; }
  .testimonial_area_6 .gallery-thumbs .swiper-slide.author .author_info {
    margin-top: 8px; }
    .testimonial_area_6 .gallery-thumbs .swiper-slide.author .author_info h4 {
      color: white;
      font-size: 16px; }
      .testimonial_area_6 .gallery-thumbs .swiper-slide.author .author_info h4 span {
        display: block;
        font-size: 80%; } }
@media (max-width: 767px) {
  .testimonial_area {
    margin-bottom: 0px; }

  .testimonial_area_4 {
    padding: 35px 0 55px; }
    .testimonial_area_4 .single_testionial .author {
      border-radius: 45px;
      border: 5px solid #fff;
      margin: 0 auto;
      position: relative;
      bottom: 10px;
      width: 130px; }
      .testimonial_area_4 .single_testionial .author .author_info {
        padding: 7px 0; }
        .testimonial_area_4 .single_testionial .author .author_info h4 {
          font-size: 14px; }
    .testimonial_area_4 .single_testionial .content {
      padding: 20px;
      height: 200px;
      border-radius: 45px; }
      .testimonial_area_4 .single_testionial .content i {
        position: absolute;
        left: 0;
        font-size: 170px;
        width: 100%;
        height: 100%;
        top: 12px;
        opacity: .2;
        color: #000; }
      .testimonial_area_4 .single_testionial .content p {
        font-size: 16px; }
    .testimonial_area_4 .swiper-button-prev {
      right: 50%;
      top: 95%;
      width: 30px;
      padding: 0 2px; }
    .testimonial_area_4 .swiper-button-next {
      left: 50%;
      top: 95%;
      width: 30px;
      padding: 0 2px; }

  .testimonial_area_5 .single_testionial {
    padding: 15px; }
    .testimonial_area_5 .single_testionial .author .author_img {
      height: 40px;
      width: 40px; }
    .testimonial_area_5 .single_testionial .author .author_designation h4 {
      font-size: 16px; }
      .testimonial_area_5 .single_testionial .author .author_designation h4 span {
        line-height: 2;
        font-size: 12px; }
    .testimonial_area_5 .single_testionial .author .rating img {
      height: 15px; }
    .testimonial_area_5 .single_testionial .content p {
      line-height: 1.6; }

  .testimonial_area_6 .swiper-container {
    padding: 10px 5px; }
  .testimonial_area_6 .single_testionial .content {
    padding: 10px; }
    .testimonial_area_6 .single_testionial .content p {
      font-size: 14px;
      line-height: 1.3; }
    .testimonial_area_6 .single_testionial .content i {
      font-size: 18px; }
  .testimonial_area_6 .gallery-thumbs .swiper-slide.author img {
    height: 60px; }
  .testimonial_area_6 .gallery-thumbs .swiper-slide.author .author_info {
    margin-top: 5px; }
    .testimonial_area_6 .gallery-thumbs .swiper-slide.author .author_info h4 {
      color: white;
      font-size: 16px; }
      .testimonial_area_6 .gallery-thumbs .swiper-slide.author .author_info h4 span {
        display: block;
        font-size: 80%; } }
.circular-progress-bar {
  position: relative;
  margin: 0 auto; }

.progress-percentage, .progress-text {
  position: absolute;
  width: 100%;
  top: 50%;
  left: 50%;
  transform: translate(-50%, -50%);
  text-align: center;
  padding: 0px 60px; }

.progress-percentage {
  font-size: 60px;
  transform: translate(-50%, -85%); }

.progress-text {
  transform: translate(-50%, 0%);
  color: #585858;
  font-size: 21px; }

.faq_area.faq_bg {
  background: #00000059;
  padding: 100px 0 100px; }
.faq_area .faq_title {
  margin-bottom: 80px; }
  .faq_area .faq_title h2 {
    font-size: 36px;
    margin-bottom: 10px;
    color: #363bff; }
  .faq_area .faq_title p {
    font-size: 16px;
    line-height: 1.5;
    color: #fff; }

.accordion_wrapper_2 {
  width: 100%;
  min-height: 500px; }
  .accordion_wrapper_2 h3 {
    font-size: 32px;
    color: #fff; }
  .accordion_wrapper_2 .accordion {
    margin: 30px 10px 0; }
    .accordion_wrapper_2 .accordion .card {
      margin-bottom: 15px;
      border-radius: 6px !important;
      outline: none;
      border: none; }
      .accordion_wrapper_2 .accordion .card .card-header {
        padding: 0;
        border-radius: 10px !important;
        border: none;
        outline: none;
        background: none;
        -webkit-transition: all 0.3s ease-in-out;
        -moz-transition: all 0.3s ease-in-out;
        -ms-transition: all 0.3s ease-in-out;
        -o-transition: all 0.3s ease-in-out;
        transition: all 0.3s ease-in-out; }
        .accordion_wrapper_2 .accordion .card .card-header:hover {
          background: #fafafa;
          box-shadow: 0 3px 3px 0 #838bab30; }
        .accordion_wrapper_2 .accordion .card .card-header .btn.btn-link {
          position: relative;
          width: 100%;
          height: 100%;
          text-align: left;
          color: #000;
          font-weight: 500;
          font-family: 'Fira Sans', sans-serif;
          background: #fafafa;
          border-radius: 5px 5px 0 0;
          text-align: left;
          text-decoration: none;
          cursor: pointer;
          border: none;
          line-height: 1;
          padding: 15px 30px 15px 15px;
          white-space: normal; }
          .accordion_wrapper_2 .accordion .card .card-header .btn.btn-link.collapsed {
            border-radius: 5px;
            box-shadow: none;
            background: none; }
            .accordion_wrapper_2 .accordion .card .card-header .btn.btn-link.collapsed:after {
              content: '\e64b'; }
          .accordion_wrapper_2 .accordion .card .card-header .btn.btn-link:after {
            position: absolute;
            -webkit-transition: all 0.3s ease-in-out;
            -moz-transition: all 0.3s ease-in-out;
            -ms-transition: all 0.3s ease-in-out;
            -o-transition: all 0.3s ease-in-out;
            transition: all 0.3s ease-in-out;
            left: auto;
            right: 10px;
            content: '\e648';
            top: calc(50% - 10px);
            font-family: 'themify';
            font-size: 16px;
            font-weight: 700; }
      .accordion_wrapper_2 .accordion .card .card-body {
        color: #304e73;
        background: #fafafa;
        border-top: 1px solid #e9e9e9;
        padding: 10px;
        font-size: 16px;
        line-height: 1.8;
        font-weight: 400;
        font-family: 'Fira Sans', sans-serif; }

@media (max-width: 767px) {
  .accordion_wrapper .accordion .card {
    margin-bottom: 5px;
    border-radius: 6px;
    outline: none;
    border: none; }
    .accordion_wrapper .accordion .card .card-header button.btn.btn-link {
      font-size: 14px;
      line-height: 1.5;
      padding: 10px 25px 10px 10px; }
      .accordion_wrapper .accordion .card .card-header button.btn.btn-link:after {
        right: 8px;
        top: calc(50% - 14px); }
    .accordion_wrapper .accordion .card .card-body {
      font-size: 14px;
      line-height: 1.5; }

  .accordion_wrapper_2 .accordion .card {
    margin-bottom: 5px;
    border-radius: 6px;
    outline: none;
    border: none; }
    .accordion_wrapper_2 .accordion .card .card-header button.btn.btn-link {
      font-size: 14px;
      line-height: 1.5;
      padding: 10px 25px 10px 10px; }
      .accordion_wrapper_2 .accordion .card .card-header button.btn.btn-link:after {
        right: 8px;
        top: calc(50% - 14px); }
    .accordion_wrapper_2 .accordion .card .card-body {
      font-size: 14px;
      line-height: 1.5; } }
.order_area .order_title {
  margin-bottom: 80px; }
  .order_area .order_title h2 {
    font-size: 60px;
    font-weight: 500;
    font-family: 'Fira Sans', sans-serif;
    color: #363bff; }
  .order_area .order_title p {
    text-transform: uppercase;
    font-size: 18px;
    margin-top: 5px;
    color: #fff;
    font-weight: 400;
    font-family: 'Fira Sans', sans-serif; }
.order_area h3.selected_plan {
  color: #363bff;
  display: inline-block;
  font-weight: 500;
  font-family: 'Fira Sans', sans-serif;
  font-size: 36px;
  margin-bottom: 20px; }
.order_area .vps_plan, .order_area .summary {
  background: #00000059;
  border-radius: 5px;
  padding: 40px;
  position: relative;
  height: 380px;
  z-index: 1;
  margin-bottom: 80px; }
  .order_area .vps_plan h3, .order_area .summary h3 {
    display: inline-block;
    font-weight: 500;
    font-family: 'Fira Sans', sans-serif;
    font-size: 24px;
    color: #fff;
    margin-bottom: 10px; }
  .order_area .vps_plan table, .order_area .summary table {
    margin-bottom: 0; }
    .order_area .vps_plan table td, .order_area .vps_plan table th, .order_area .summary table td, .order_area .summary table th {
      padding: 10px;
      border: none;
      font-size: 18px;
      color: #fff; }
    .order_area .vps_plan table td.price, .order_area .summary table td.price {
      color: #363bff; }
    .order_area .vps_plan table td .form-check, .order_area .summary table td .form-check {
      display: inline-block; }
    .order_area .vps_plan table tr.b_border, .order_area .summary table tr.b_border {
      border-bottom: 2px solid #ccc;
      margin-top: 20px; }
    .order_area .vps_plan table tr, .order_area .summary table tr {
      height: 15px; }
.order_area .vps_plan {
  clear: both;
  padding-left: 100px; }
  .order_area .vps_plan a {
    display: inline-block;
    float: right;
    font-size: 18px;
    margin-top: 5px;
    text-decoration: underline; }
  .order_area .vps_plan i {
    position: absolute;
    left: 30px;
    top: 45px;
    font-size: 50px;
    color: #2cd63c; }
  .order_area .vps_plan table td, .order_area .vps_plan table th {
    padding: 7px; }
.order_area label.custom-control-label:before, .order_area label.custom-control-label:after {
  top: 0; }

.account_details_form {
  color: #838bab;
  /** Custom Select **/ }
  .account_details_form .form-group {
    margin-bottom: 35px; }
  .account_details_form .required:after {
    position: absolute;
    z-index: -1;
    left: auto;
    right: -25px;
    height: 20px;
    width: 20px;
    content: '*';
    font-size: 20px;
    top: -3px;
    color: red; }
  .account_details_form label {
    font-size: 18px;
    margin-bottom: 15px;
    color: #fff;
    position: relative;
    z-index: 1; }
  .account_details_form input[type="text"], .account_details_form input[type="email"], .account_details_form select {
    background: #00000059;
    padding: 10px;
    height: 65px;
    border-radius: 8px;
    border: 1px solid #fff;
    color: #fff; }
  .account_details_form .custom_select_wrapper {
    position: relative; }
    .account_details_form .custom_select_wrapper select {
      display: none;
      padding: 0 !important;
      position: relative; }
    .account_details_form .custom_select_wrapper .custom_select.form-control {
      background: #00000059;
      padding: 10px;
      height: 65px;
      border-radius: 8px;
      border: 1px solid #fff;
      text-transform: uppercase; }
    .account_details_form .custom_select_wrapper .custom_select .custom_select_trigger {
      position: relative;
      display: block;
      width: 100%;
      height: 100%;
      padding: 10px;
      font-size: 18px;
      color: #fff;
      cursor: pointer;
      -webkit-transition: all 0.5s ease-in-out;
      -moz-transition: all 0.5s ease-in-out;
      -ms-transition: all 0.5s ease-in-out;
      -o-transition: all 0.5s ease-in-out;
      transition: all 0.5s ease-in-out; }
      .account_details_form .custom_select_wrapper .custom_select .custom_select_trigger:after {
        position: absolute;
        display: block;
        content: '';
        width: 10px;
        height: 10px;
        top: 50%;
        right: 25px;
        margin-top: -3px;
        border-bottom: 1px solid #363bff;
        border-right: 1px solid #363bff;
        transform: rotate(45deg) translateY(-50%);
        -webkit-transition: all 0.5s ease-in-out;
        -moz-transition: all 0.5s ease-in-out;
        -ms-transition: all 0.5s ease-in-out;
        -o-transition: all 0.5s ease-in-out;
        transition: all 0.5s ease-in-out;
        transform-origin: 50% 0; }
    .account_details_form .custom_select_wrapper .custom_select.opened {
      -webkit-box-shadow: 0px 0px 38px 2px rgba(0, 0, 0, 0);
      -moz-box-shadow: 0px 0px 38px 2px rgba(0, 0, 0, 0);
      box-shadow: 0px 0px 38px 2px rgba(0, 0, 0, 0); }
    .account_details_form .custom_select_wrapper .custom_select.opened .custom_select_trigger:after {
      margin-top: 3px;
      transform: rotate(-135deg) translateY(-50%); }
    .account_details_form .custom_select_wrapper .custom_select .custom_options {
      position: absolute;
      z-index: 99;
      display: block;
      top: 100%;
      left: 0;
      right: 0;
      min-width: 100%;
      border: 2px solid #dce3e9;
      box-sizing: border-box;
      -webkit-box-shadow: 0 2px 1px 0px rgba(0, 0, 0, 0.07);
      -moz-box-shadow: 0 2px 1px 0px rgba(0, 0, 0, 0.07);
      box-shadow: 0 2px 1px 0px rgba(0, 0, 0, 0.07);
      background: #f6faff;
      -webkit-transition: all 0.5s ease-in-out;
      -moz-transition: all 0.5s ease-in-out;
      -ms-transition: all 0.5s ease-in-out;
      -o-transition: all 0.5s ease-in-out;
      transition: all 0.5s ease-in-out;
      opacity: 0;
      visibility: hidden;
      pointer-events: none;
      transform: translateY(-15px); }
      .account_details_form .custom_select_wrapper .custom_select .custom_options .custom_option {
        font-size: 18px;
        padding: 5px 15px 5px 22px;
        cursor: pointer;
        margin: 0;
        text-align: left;
        line-height: 30px;
        display: block;
        color: #363bff;
        transition: all .4s ease-in-out; }
        .account_details_form .custom_select_wrapper .custom_select .custom_options .custom_option:last-of-type {
          border-bottom: 0; }
        .account_details_form .custom_select_wrapper .custom_select .custom_options .custom_option:hover {
          background: #363bff;
          color: #fff; }
    .account_details_form .custom_select_wrapper .custom_select.opened .custom_options {
      opacity: 1;
      visibility: visible;
      pointer-events: all;
      transform: translateY(0px); }
  .account_details_form hr {
    background: #dce3e9;
    height: 2px; }
  .account_details_form h3 {
    font-size: 36px;
    color: #363bff;
    margin-bottom: 20px;
    font-weight: 400;
    font-family: 'Fira Sans', sans-serif; }
  .account_details_form p {
    font-size: 18px;
    color: #fff;
    line-height: 1.5;
    font-weight: 400;
    font-family: 'Fira Sans', sans-serif; }
  .account_details_form .boxed_btn {
    width: 100%;
    border-radius: 10px;
    padding: 16px;
    background: #363bff;
    display: block;
    margin-top: 40px;
    color: #fff;
    font-size: 18px;
    text-transform: uppercase;
    outline: none;
    border: none;
    cursor: pointer;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
    .account_details_form .boxed_btn:hover {
      background: #fff;
      color: #363bff; }

@media only screen and (min-width: 992px) and (max-width: 1200px) {
  .order_area .order_title h2 {
    font-size: 48px; }
  .order_area .summary table td, .order_area .summary table th, .order_area .vps_plan table td, .order_area .vps_plan table th {
    font-size: 16px; }
  .order_area .vps_plan, .order_area .summary {
    padding: 30px 20px; }
  .order_area .vps_plan {
    padding-left: 80px; } }
@media only screen and (min-width: 320px) and (max-width: 991px) {
  .order_area .order_title {
    margin-bottom: 50px; }
    .order_area .order_title h2 {
      font-size: 36px; }
    .order_area .order_title p {
      font-size: 16px; }
  .order_area h3.selected_plan {
    font-size: 28px;
    margin-bottom: 15px; }
  .order_area .summary table td, .order_area .summary table th, .order_area .vps_plan table td, .order_area .vps_plan table th {
    font-size: 14px; }
  .order_area .vps_plan, .order_area .summary {
    padding: 20px;
    height: 340px;
    margin-bottom: 50px; }
    .order_area .vps_plan h3, .order_area .summary h3 {
      font-size: 18px; }
  .order_area .vps_plan {
    padding-left: 60px; }
    .order_area .vps_plan i {
      left: 14px;
      top: 20px;
      font-size: 36px; }
    .order_area .vps_plan a {
      font-size: 14px; }

  .account_details_form h3 {
    font-size: 28px;
    margin-bottom: 15px; }
  .account_details_form p {
    font-size: 14px; }
  .account_details_form .form-group {
    margin-bottom: 20px; }
  .account_details_form input[type="text"], .account_details_form input[type="email"], .account_details_form select {
    font-size: 14px;
    height: 40px; }
  .account_details_form label {
    font-size: 14px;
    margin-bottom: 10px; }
  .account_details_form .boxed_btn {
    margin-top: 30px;
    font-size: 14px;
    padding: 12px; } }
@media (max-width: 767px) {
  .order_area .order_title h2 {
    font-size: 28px; }
  .order_area .vps_plan, .order_area .summary {
    height: 284px;
    margin-bottom: 40px; }
    .order_area .vps_plan table td, .order_area .vps_plan table th, .order_area .summary table td, .order_area .summary table th {
      padding: 5px; }

  .account_details_form h3, .order_area h3.selected_plan {
    font-size: 24px; } }
.team_area_1 .card {
  border-radius: 5px;
  overflow: hidden;
  border: none;
  margin-bottom: 45px; }
  .team_area_1 .card:hover .img_wrapper:after {
    opacity: 1;
    z-index: 2 !important; }
  .team_area_1 .card:hover .img_wrapper .team_social_link {
    bottom: 15%;
    opacity: 1;
    z-index: 3; }
  .team_area_1 .card .img_wrapper {
    position: relative;
    z-index: 1; }
    .team_area_1 .card .img_wrapper:after {
      position: absolute;
      opacity: 0;
      z-index: -1;
      left: 0;
      top: 0;
      width: 100%;
      height: 100%;
      content: '';
      background: rgba(0, 0, 0, 0.3);
      -webkit-transition: all 0.3s ease-in-out;
      -moz-transition: all 0.3s ease-in-out;
      -ms-transition: all 0.3s ease-in-out;
      -o-transition: all 0.3s ease-in-out;
      transition: all 0.3s ease-in-out; }
    .team_area_1 .card .img_wrapper .team_social_link {
      background: none;
      text-align: center;
      opacity: 0;
      position: absolute;
      z-index: 1;
      width: 100%;
      -webkit-transition: all 0.3s ease-in-out;
      -moz-transition: all 0.3s ease-in-out;
      -ms-transition: all 0.3s ease-in-out;
      -o-transition: all 0.3s ease-in-out;
      transition: all 0.3s ease-in-out;
      bottom: 5%; }
      .team_area_1 .card .img_wrapper .team_social_link li {
        margin-right: 8px;
        display: inline-block; }
        .team_area_1 .card .img_wrapper .team_social_link li a {
          font-size: 0; }
        .team_area_1 .card .img_wrapper .team_social_link li i {
          font-size: 16px;
          display: inline-block;
          padding: 12px;
          border-radius: 50%;
          background: none;
          -webkit-transition: all 0.3s ease-in-out;
          -moz-transition: all 0.3s ease-in-out;
          -ms-transition: all 0.3s ease-in-out;
          -o-transition: all 0.3s ease-in-out;
          transition: all 0.3s ease-in-out; }
        .team_area_1 .card .img_wrapper .team_social_link li i.ti-facebook {
          color: #304e73;
          background: #fff; }
          .team_area_1 .card .img_wrapper .team_social_link li i.ti-facebook:hover {
            background: #3b5998;
            color: #fff; }
        .team_area_1 .card .img_wrapper .team_social_link li i.ti-vimeo-alt {
          background: #fff;
          color: #304e73; }
          .team_area_1 .card .img_wrapper .team_social_link li i.ti-vimeo-alt:hover {
            background: #1ab7ea;
            color: #fff; }
        .team_area_1 .card .img_wrapper .team_social_link li i.ti-twitter-alt {
          background: #fff;
          color: #304e73; }
          .team_area_1 .card .img_wrapper .team_social_link li i.ti-twitter-alt:hover {
            background: #1da1f2;
            color: #fff; }
        .team_area_1 .card .img_wrapper .team_social_link li i.ti-pinterest {
          background: #fff;
          color: #304e73; }
          .team_area_1 .card .img_wrapper .team_social_link li i.ti-pinterest:hover {
            background: #bd081c;
            color: #fff; }
  .team_area_1 .card .card-body {
    text-align: center;
    padding: 35px;
    background: #07164e; }
    .team_area_1 .card .card-body h5.card-title {
      font-size: 24px;
      font-weight: 700;
      font-family: 'Fira Sans', sans-serif; }
      .team_area_1 .card .card-body h5.card-title a {
        color: #fff;
        -webkit-transition: all 0.3s ease-in-out;
        -moz-transition: all 0.3s ease-in-out;
        -ms-transition: all 0.3s ease-in-out;
        -o-transition: all 0.3s ease-in-out;
        transition: all 0.3s ease-in-out; }
        .team_area_1 .card .card-body h5.card-title a:hover {
          color: #0cbafc; }
    .team_area_1 .card .card-body p.card-text {
      font-size: 12px;
      font-weight: 400;
      font-family: 'Fira Sans', sans-serif;
      text-transform: uppercase;
      color: #fa183d; }

.team_area_2 .card {
  border-radius: 5px;
  border: none;
  margin-bottom: 75px;
  position: relative;
  top: 0;
  -webkit-transition: all 0.3s ease-in-out;
  -moz-transition: all 0.3s ease-in-out;
  -ms-transition: all 0.3s ease-in-out;
  -o-transition: all 0.3s ease-in-out;
  transition: all 0.3s ease-in-out; }
  .team_area_2 .card:hover {
    top: -5px;
    -webkit-box-shadow: 0px 5px 10px 0px rgba(12, 186, 252, 0.2);
    -moz-box-shadow: 0px 5px 10px 0px rgba(12, 186, 252, 0.2);
    box-shadow: 0px 5px 10px 0px rgba(12, 186, 252, 0.2); }
  .team_area_2 .card .img_wrapper {
    position: absolute;
    z-index: 1;
    width: 100px;
    height: 100px;
    left: calc(50% - 50px);
    top: -50px;
    border-radius: 50%;
    overflow: hidden; }
  .team_area_2 .card .team_social_link {
    background: none;
    text-align: center;
    width: 100%;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out;
    bottom: 5%; }
    .team_area_2 .card .team_social_link li {
      margin-right: 8px;
      display: inline-block; }
      .team_area_2 .card .team_social_link li a {
        font-size: 0; }
      .team_area_2 .card .team_social_link li i {
        font-size: 16px;
        display: inline-block;
        padding: 12px;
        border-radius: 50%;
        background: none;
        -webkit-transition: all 0.3s ease-in-out;
        -moz-transition: all 0.3s ease-in-out;
        -ms-transition: all 0.3s ease-in-out;
        -o-transition: all 0.3s ease-in-out;
        transition: all 0.3s ease-in-out; }
      .team_area_2 .card .team_social_link li i.ti-facebook {
        color: #304e73;
        background: #fff; }
        .team_area_2 .card .team_social_link li i.ti-facebook:hover {
          background: #3b5998;
          color: #fff; }
      .team_area_2 .card .team_social_link li i.ti-vimeo-alt {
        background: #fff;
        color: #304e73; }
        .team_area_2 .card .team_social_link li i.ti-vimeo-alt:hover {
          background: #1ab7ea;
          color: #fff; }
      .team_area_2 .card .team_social_link li i.ti-twitter-alt {
        background: #fff;
        color: #304e73; }
        .team_area_2 .card .team_social_link li i.ti-twitter-alt:hover {
          background: #1da1f2;
          color: #fff; }
      .team_area_2 .card .team_social_link li i.ti-pinterest {
        background: #fff;
        color: #304e73; }
        .team_area_2 .card .team_social_link li i.ti-pinterest:hover {
          background: #bd081c;
          color: #fff; }
  .team_area_2 .card .card-body {
    text-align: center;
    padding: 25px 20px;
    background: #fff; }
    .team_area_2 .card .card-body h5.card-title {
      font-size: 24px;
      margin: 20px 0 20px;
      font-weight: 700;
      font-family: 'Fira Sans', sans-serif; }
      .team_area_2 .card .card-body h5.card-title a {
        color: #0cbafc;
        margin-bottom: 15px;
        -webkit-transition: all 0.3s ease-in-out;
        -moz-transition: all 0.3s ease-in-out;
        -ms-transition: all 0.3s ease-in-out;
        -o-transition: all 0.3s ease-in-out;
        transition: all 0.3s ease-in-out; }
        .team_area_2 .card .card-body h5.card-title a:hover {
          color: #0cbafc; }
      .team_area_2 .card .card-body h5.card-title span {
        font-size: 12px;
        font-weight: 400;
        font-family: 'Fira Sans', sans-serif;
        text-transform: uppercase;
        color: #fa183d;
        display: block; }
    .team_area_2 .card .card-body p.card-text {
      font-size: 14px;
      margin-top: 60px;
      line-height: 1.5;
      font-weight: 400;
      font-family: 'Fira Sans', sans-serif;
      text-transform: uppercase;
      color: #838bab; }

.product_area .card {
  position: relative;
  z-index: 1;
  border-radius: 0px;
  overflow: hidden;
  border: none;
  margin-bottom: 45px; }
  .product_area .card .batch {
    position: absolute;
    z-index: 3;
    background: red;
    padding: 10px;
    font-size: 14px;
    right: 30px;
    left: auto;
    top: 30px;
    color: #fff;
    font-weight: 500;
    font-family: 'Fira Sans', sans-serif; }
  .product_area .card .img_wrapper {
    position: relative;
    z-index: 1;
    text-align: center;
    padding: 40px 30px; }
    .product_area .card .img_wrapper img {
      border-radius: 0;
      width: 90%;
      -webkit-transition: all 0.3s ease-in-out;
      -moz-transition: all 0.3s ease-in-out;
      -ms-transition: all 0.3s ease-in-out;
      -o-transition: all 0.3s ease-in-out;
      transition: all 0.3s ease-in-out; }
    .product_area .card .img_wrapper:hover .boxed_btn {
      top: 40%;
      opacity: 1; }
    .product_area .card .img_wrapper:hover img {
      opacity: .8; }
    .product_area .card .img_wrapper .boxed_btn {
      color: #fff;
      opacity: 0;
      position: absolute;
      z-index: 1;
      text-transform: uppercase;
      -webkit-transition: all 0.5s ease-in-out;
      -moz-transition: all 0.5s ease-in-out;
      -ms-transition: all 0.5s ease-in-out;
      -o-transition: all 0.5s ease-in-out;
      transition: all 0.5s ease-in-out;
      top: 30%;
      font-weight: 500;
      font-family: 'Fira Sans', sans-serif;
      background: #363bff;
      padding: 10px 20px;
      left: 50%;
      transform: translateX(-50%); }
      .product_area .card .img_wrapper .boxed_btn:hover {
        background: #2cd63c;
        color: #fff; }
  .product_area .card .card-body {
    text-align: center;
    padding: 30px 35px;
    background: #fff; }
    .product_area .card .card-body h5.card-title {
      font-size: 20px;
      font-weight: 700;
      font-family: 'Fira Sans', sans-serif; }
      .product_area .card .card-body h5.card-title a {
        color: #000; }
        .product_area .card .card-body h5.card-title a:hover {
          color: #000; }
    .product_area .card .card-body p.card-text {
      font-size: 22px;
      font-weight: 500;
      font-family: 'Fira Sans', sans-serif;
      text-transform: uppercase;
      color: #838bab; }
      .product_area .card .card-body p.card-text span {
        opacity: .5;
        text-decoration: line-through; }

.knowledge_area .card {
  position: relative;
  z-index: 1;
  border-radius: 5px;
  margin-bottom: 45px;
  overflow: hidden;
  -webkit-box-shadow: 0px 0px 25px 0 rgba(0, 0, 0, 0.1);
  -moz-box-shadow: 0px 0px 25px 0 rgba(0, 0, 0, 0.1);
  box-shadow: 0px 0px 25px 0 rgba(0, 0, 0, 0.1);
  border: none; }
  .knowledge_area .card .card-header {
    font-size: 24px;
    padding: 30px;
    background: none;
    border: none;
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif; }
    .knowledge_area .card .card-header a {
      color: #000;
      -webkit-transition: all 0.3s ease-in-out;
      -moz-transition: all 0.3s ease-in-out;
      -ms-transition: all 0.3s ease-in-out;
      -o-transition: all 0.3s ease-in-out;
      transition: all 0.3s ease-in-out; }
      .knowledge_area .card .card-header a i {
        top: 2px;
        position: relative;
        left: -5px;
        font-weight: 700; }
      .knowledge_area .card .card-header a:hover {
        color: #363bff; }
  .knowledge_area .card .card-body {
    padding: 0; }
    .knowledge_area .card .card-body .knowledge_list {
      margin-bottom: 30px; }
      .knowledge_area .card .card-body .knowledge_list li {
        padding: 10px 5px;
        padding-left: 30px;
        color: #838bab; }
        .knowledge_area .card .card-body .knowledge_list li:hover {
          background: #f8fafe; }
        .knowledge_area .card .card-body .knowledge_list li a {
          color: #838bab;
          font-size: 16px; }
          .knowledge_area .card .card-body .knowledge_list li a:hover {
            color: #838bab; }
        .knowledge_area .card .card-body .knowledge_list li i {
          position: relative;
          color: #363bff;
          left: -10px;
          top: 0px; }
  .knowledge_area .card .card-footer {
    font-size: 20px;
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif;
    border: none;
    text-align: center;
    padding: 0px; }
    .knowledge_area .card .card-footer a {
      background: #363bff;
      color: #fff;
      display: inline-block;
      width: 100%;
      padding: 25px;
      -webkit-transition: all 0.3s ease-in-out;
      -moz-transition: all 0.3s ease-in-out;
      -ms-transition: all 0.3s ease-in-out;
      -o-transition: all 0.3s ease-in-out;
      transition: all 0.3s ease-in-out; }
      .knowledge_area .card .card-footer a:hover {
        background: #2cd63c; }

.contact_area .left_side .title {
  font-size: 36px;
  line-height: 1;
  font-weight: 700;
  font-family: 'Fira Sans', sans-serif;
  color: #363bff; }
.contact_area .left_side .sub_title {
  font-size: 20px;
  margin-top: 15px;
  font-weight: 300;
  font-family: 'Fira Sans', sans-serif;
  color: #fff;
  margin-bottom: 40px; }
.contact_area .left_side p {
  color: #fff;
  margin-right: 30px;
  font-size: 18px;
  line-height: 1.5;
  font-weight: 300;
  font-family: 'Fira Sans', sans-serif; }
  .contact_area .left_side p span {
    margin-right: 10px; }
.contact_area .left_side .heading {
  font-size: 24px;
  font-weight: 500;
  font-family: 'Fira Sans', sans-serif;
  margin-top: 45px;
  margin-bottom: 5px;
  color: #363bff; }
.contact_area .contact_form {
  color: #838bab;
  /** Custom Select **/ }
  .contact_area .contact_form .form-group {
    margin-bottom: 30px; }
  .contact_area .contact_form label {
    display: none; }
  .contact_area .contact_form input[type="text"], .contact_area .contact_form input[type="email"], .contact_area .contact_form input[type="tel"], .contact_area .contact_form textarea, .contact_area .contact_form .form-control {
    background: #fff;
    padding: 15px;
    font-weight: 300;
    font-family: 'Fira Sans', sans-serif;
    height: 52px;
    font-size: 16px;
    border-radius: 0;
    border: 1px solid #ededed;
    color: #838bab; }
    .contact_area .contact_form input[type="text"]:focus, .contact_area .contact_form input[type="email"]:focus, .contact_area .contact_form input[type="tel"]:focus, .contact_area .contact_form textarea:focus, .contact_area .contact_form .form-control:focus {
      -webkit-box-shadow: 0px 0px 38px 2px rgba(0, 0, 0, 0.1);
      -moz-box-shadow: 0px 0px 38px 2px rgba(0, 0, 0, 0.1);
      box-shadow: 0px 0px 38px 2px rgba(0, 0, 0, 0.1); }
  .contact_area .contact_form select.form-control {
    padding: 0 !important; }
  .contact_area .contact_form .custom_select_wrapper {
    position: relative; }
    .contact_area .contact_form .custom_select_wrapper select {
      display: none;
      position: relative; }
    .contact_area .contact_form .custom_select_wrapper .custom_select.form-control {
      padding: 0 !important;
      text-transform: capitalize; }
    .contact_area .contact_form .custom_select_wrapper .custom_select .custom_select_trigger {
      position: relative;
      display: block;
      width: 100%;
      height: 100%;
      padding: 15px;
      font-size: 16px;
      font-weight: 300;
      color: #838bab;
      background: #fff;
      cursor: pointer;
      -webkit-transition: all 0.5s ease-in-out;
      -moz-transition: all 0.5s ease-in-out;
      -ms-transition: all 0.5s ease-in-out;
      -o-transition: all 0.5s ease-in-out;
      transition: all 0.5s ease-in-out; }
      .contact_area .contact_form .custom_select_wrapper .custom_select .custom_select_trigger:after {
        position: absolute;
        display: block;
        content: '';
        width: 10px;
        height: 10px;
        top: 50%;
        right: 25px;
        margin-top: -3px;
        border-bottom: 1px solid #363bff;
        border-right: 1px solid #363bff;
        transform: rotate(45deg) translateY(-50%);
        -webkit-transition: all 0.5s ease-in-out;
        -moz-transition: all 0.5s ease-in-out;
        -ms-transition: all 0.5s ease-in-out;
        -o-transition: all 0.5s ease-in-out;
        transition: all 0.5s ease-in-out;
        transform-origin: 50% 0; }
    .contact_area .contact_form .custom_select_wrapper .custom_select.opened {
      -webkit-box-shadow: 0px 0px 38px 2px rgba(0, 0, 0, 0.1);
      -moz-box-shadow: 0px 0px 38px 2px rgba(0, 0, 0, 0.1);
      box-shadow: 0px 0px 38px 2px rgba(0, 0, 0, 0.1); }
    .contact_area .contact_form .custom_select_wrapper .custom_select.opened .custom_select_trigger:after {
      margin-top: 3px;
      transform: rotate(-135deg) translateY(-50%); }
    .contact_area .contact_form .custom_select_wrapper .custom_select .custom_options {
      position: absolute;
      z-index: 99;
      display: block;
      top: 100%;
      left: 0;
      right: 0;
      min-width: 100%;
      border: 1px solid #ededed;
      box-sizing: border-box;
      -webkit-box-shadow: 0 2px 1px 0px rgba(0, 0, 0, 0.07);
      -moz-box-shadow: 0 2px 1px 0px rgba(0, 0, 0, 0.07);
      box-shadow: 0 2px 1px 0px rgba(0, 0, 0, 0.07);
      background: #fff;
      -webkit-transition: all 0.5s ease-in-out;
      -moz-transition: all 0.5s ease-in-out;
      -ms-transition: all 0.5s ease-in-out;
      -o-transition: all 0.5s ease-in-out;
      transition: all 0.5s ease-in-out;
      opacity: 0;
      visibility: hidden;
      pointer-events: none;
      transform: translateY(-15px); }
      .contact_area .contact_form .custom_select_wrapper .custom_select .custom_options .custom_option {
        font-size: 16px;
        padding: 5px 15px;
        cursor: pointer;
        margin: 0;
        text-align: left;
        line-height: 30px;
        display: block;
        color: #363bff;
        transition: all .4s ease-in-out; }
        .contact_area .contact_form .custom_select_wrapper .custom_select .custom_options .custom_option:last-of-type {
          border-bottom: 0; }
        .contact_area .contact_form .custom_select_wrapper .custom_select .custom_options .custom_option:hover {
          background: #363bff;
          color: #fff; }
    .contact_area .contact_form .custom_select_wrapper .custom_select.opened .custom_options {
      opacity: 1;
      visibility: visible;
      pointer-events: all;
      transform: translateY(0px); }
  .contact_area .contact_form textarea {
    height: auto !important; }
  .contact_area .contact_form .boxed_btn {
    border-radius: 0px;
    padding: 10px 20px;
    background: #007bff;
    display: block;
    margin-top: 0px;
    color: #fff;
    font-size: 13px;
    width: 100%;
    line-height: 2;
    text-transform: uppercase;
    outline: none;
    border: none;
    cursor: pointer;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
    .contact_area .contact_form .boxed_btn:hover {
      background: #2cd63c; }

.contact_area_2 {
  background-image: url("../img/contact_bg.png");
  background-repeat: no-repeat; }

.contact_form_2 {
  color: #fff;
  /** Custom Select **/ }
  .contact_form_2 h3 {
    font-size: 24px;
    color: #363bff;
    margin-bottom: 20px;
    font-weight: 300;
    font-family: 'Fira Sans', sans-serif;
    margin-bottom: 50px; }
    .contact_form_2 h3 span {
      color: #FFF;
      font-weight: 700;
      font-size: 40px;
      display: block;
      line-height: 1.5; }
  .contact_form_2 .form-group {
    margin-bottom: 30px; }
  .contact_form_2 .required:after {
    position: absolute;
    z-index: -1;
    left: auto;
    right: -25px;
    height: 20px;
    width: 20px;
    content: '*';
    font-size: 20px;
    top: -3px;
    color: red; }
  .contact_form_2 label {
    font-size: 14px;
    margin-bottom: 15px;
    position: relative;
    z-index: 1;
    display: none; }
  .contact_form_2 i {
    font-size: 16px;
    left: 40px;
    position: absolute;
    z-index: 2;
    text-align: center;
    top: 20px;
    width: 16px;
    color: #304e73; }
  .contact_form_2 input[type="text"], .contact_form_2 input[type="email"], .contact_form_2 input[type="tel"], .contact_form_2 textarea {
    background: #fff;
    padding: 10px;
    padding-left: 55px;
    height: 60px;
    font-size: 12px;
    border-radius: 0;
    border: 1px solid #ededed;
    -webkit-box-shadow: 0 0px 10px 0px rgba(0, 0, 0, 0.1);
    -moz-box-shadow: 0 0px 10px 0px rgba(0, 0, 0, 0.1);
    box-shadow: 0 0px 10px 0px rgba(0, 0, 0, 0.1);
    color: #838bab; }
    .contact_form_2 input[type="text"]::placeholder, .contact_form_2 input[type="email"]::placeholder, .contact_form_2 input[type="tel"]::placeholder, .contact_form_2 textarea::placeholder {
      text-transform: uppercase; }
    .contact_form_2 input[type="text"]:focus, .contact_form_2 input[type="email"]:focus, .contact_form_2 input[type="tel"]:focus, .contact_form_2 textarea:focus {
      box-shadow: none; }
  .contact_form_2 label.custom-control-label {
    display: block !important; }
    .contact_form_2 label.custom-control-label:before, .contact_form_2 label.custom-control-label:after {
      top: 0; }
  .contact_form_2 .custom_select_wrapper {
    position: relative; }
    .contact_form_2 .custom_select_wrapper select {
      display: none;
      padding: 0 !important;
      position: relative; }
    .contact_form_2 .custom_select_wrapper .custom_select.form-control {
      background: #fff;
      padding: 10px;
      padding-left: 55px;
      height: 60px;
      border-radius: 0;
      border: 1px solid #ededed;
      -webkit-box-shadow: 0 0px 10px 0px rgba(0, 0, 0, 0.1);
      -moz-box-shadow: 0 0px 10px 0px rgba(0, 0, 0, 0.1);
      box-shadow: 0 0px 10px 0px rgba(0, 0, 0, 0.1);
      text-transform: uppercase; }
    .contact_form_2 .custom_select_wrapper .custom_select .custom_select_trigger {
      position: relative;
      display: block;
      width: 100%;
      height: 100%;
      padding: 10px;
      padding-left: 0;
      font-size: 12px;
      color: #838bab;
      background: #fff;
      cursor: pointer;
      -webkit-transition: all 0.5s ease-in-out;
      -moz-transition: all 0.5s ease-in-out;
      -ms-transition: all 0.5s ease-in-out;
      -o-transition: all 0.5s ease-in-out;
      transition: all 0.5s ease-in-out; }
      .contact_form_2 .custom_select_wrapper .custom_select .custom_select_trigger:after {
        position: absolute;
        display: block;
        content: '';
        width: 10px;
        height: 10px;
        top: 50%;
        right: 25px;
        margin-top: -3px;
        border-bottom: 1px solid #363bff;
        border-right: 1px solid #363bff;
        transform: rotate(45deg) translateY(-50%);
        -webkit-transition: all 0.5s ease-in-out;
        -moz-transition: all 0.5s ease-in-out;
        -ms-transition: all 0.5s ease-in-out;
        -o-transition: all 0.5s ease-in-out;
        transition: all 0.5s ease-in-out;
        transform-origin: 50% 0; }
    .contact_form_2 .custom_select_wrapper .custom_select.opened {
      -webkit-box-shadow: 0px 0px 38px 2px rgba(0, 0, 0, 0);
      -moz-box-shadow: 0px 0px 38px 2px rgba(0, 0, 0, 0);
      box-shadow: 0px 0px 38px 2px rgba(0, 0, 0, 0); }
    .contact_form_2 .custom_select_wrapper .custom_select.opened .custom_select_trigger:after {
      margin-top: 3px;
      transform: rotate(-135deg) translateY(-50%); }
    .contact_form_2 .custom_select_wrapper .custom_select .custom_options {
      position: absolute;
      z-index: 99;
      display: block;
      top: 100%;
      left: 0;
      right: 0;
      min-width: 100%;
      border: 1px solid #ededed;
      box-sizing: border-box;
      -webkit-box-shadow: 0 2px 1px 0px rgba(0, 0, 0, 0.07);
      -moz-box-shadow: 0 2px 1px 0px rgba(0, 0, 0, 0.07);
      box-shadow: 0 2px 1px 0px rgba(0, 0, 0, 0.07);
      background: #fff;
      -webkit-transition: all 0.5s ease-in-out;
      -moz-transition: all 0.5s ease-in-out;
      -ms-transition: all 0.5s ease-in-out;
      -o-transition: all 0.5s ease-in-out;
      transition: all 0.5s ease-in-out;
      opacity: 0;
      visibility: hidden;
      pointer-events: none;
      transform: translateY(-15px); }
      .contact_form_2 .custom_select_wrapper .custom_select .custom_options .custom_option {
        font-size: 12px;
        padding: 5px 15px 5px 22px;
        cursor: pointer;
        margin: 0;
        text-align: left;
        line-height: 30px;
        display: block;
        color: #363bff;
        transition: all .4s ease-in-out; }
        .contact_form_2 .custom_select_wrapper .custom_select .custom_options .custom_option:last-of-type {
          border-bottom: 0; }
        .contact_form_2 .custom_select_wrapper .custom_select .custom_options .custom_option:hover {
          background: #363bff;
          color: #fff; }
    .contact_form_2 .custom_select_wrapper .custom_select.opened .custom_options {
      opacity: 1;
      visibility: visible;
      pointer-events: all;
      transform: translateY(0px); }
  .contact_form_2 textarea {
    padding: 20px !important;
    padding-left: 55px !important;
    height: auto !important; }
    .contact_form_2 textarea:focus {
      border: 1px solid #ededed; }
  .contact_form_2 .boxed_btn {
    border-radius: 10px;
    padding: 20px 44px;
    background: #363bff;
    display: block;
    margin-top: 40px;
    color: #fff;
    font-size: 18px;
    text-transform: uppercase;
    outline: none;
    border: none;
    cursor: pointer;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
    .contact_form_2 .boxed_btn:hover {
      background: #2cd63c; }

@media only screen and (min-width: 768px) and (max-width: 991px) {
  .contact_area .left_side .title {
    font-size: 30px; }
  .contact_area .left_side .sub_title {
    font-size: 18px;
    margin-top: 5px;
    margin-bottom: 25px; }
  .contact_area .left_side p {
    color: #838bab;
    margin-right: 0px;
    font-size: 16px; }
  .contact_area .left_side .heading {
    font-size: 22px;
    margin-top: 30px;
    margin-bottom: 0px; }
  .contact_area .contact_form {
    color: #838bab; }
    .contact_area .contact_form .form-group {
      margin-bottom: 27px; }
    .contact_area .contact_form input[type="text"], .contact_area .contact_form input[type="email"], .contact_area .contact_form input[type="tel"], .contact_area .contact_form textarea, .contact_area .contact_form .form-control {
      padding: 10px;
      height: 40px;
      font-size: 16px; }
    .contact_area .contact_form .custom_select_wrapper {
      position: relative; }
      .contact_area .contact_form .custom_select_wrapper select {
        display: none;
        position: relative; }
      .contact_area .contact_form .custom_select_wrapper .custom_select.form-control {
        padding: 0 !important;
        text-transform: capitalize; }
      .contact_area .contact_form .custom_select_wrapper .custom_select .custom_select_trigger {
        position: relative;
        display: block;
        width: 100%;
        height: 100%;
        padding: 15px;
        font-size: 16px;
        font-weight: 300;
        color: #838bab;
        background: #fff;
        cursor: pointer;
        -webkit-transition: all 0.5s ease-in-out;
        -moz-transition: all 0.5s ease-in-out;
        -ms-transition: all 0.5s ease-in-out;
        -o-transition: all 0.5s ease-in-out;
        transition: all 0.5s ease-in-out; }
        .contact_area .contact_form .custom_select_wrapper .custom_select .custom_select_trigger:after {
          position: absolute;
          display: block;
          content: '';
          width: 10px;
          height: 10px;
          top: 50%;
          right: 25px;
          margin-top: -3px;
          border-bottom: 1px solid #363bff;
          border-right: 1px solid #363bff;
          transform: rotate(45deg) translateY(-50%);
          -webkit-transition: all 0.5s ease-in-out;
          -moz-transition: all 0.5s ease-in-out;
          -ms-transition: all 0.5s ease-in-out;
          -o-transition: all 0.5s ease-in-out;
          transition: all 0.5s ease-in-out;
          transform-origin: 50% 0; }
      .contact_area .contact_form .custom_select_wrapper .custom_select.opened {
        -webkit-box-shadow: 0px 0px 38px 2px rgba(0, 0, 0, 0.1);
        -moz-box-shadow: 0px 0px 38px 2px rgba(0, 0, 0, 0.1);
        box-shadow: 0px 0px 38px 2px rgba(0, 0, 0, 0.1); }
      .contact_area .contact_form .custom_select_wrapper .custom_select.opened .custom_select_trigger:after {
        margin-top: 3px;
        transform: rotate(-135deg) translateY(-50%); }
      .contact_area .contact_form .custom_select_wrapper .custom_select .custom_options {
        position: absolute;
        z-index: 99;
        display: block;
        top: 100%;
        left: 0;
        right: 0;
        min-width: 100%;
        border: 1px solid #ededed;
        box-sizing: border-box;
        -webkit-box-shadow: 0 2px 1px 0px rgba(0, 0, 0, 0.07);
        -moz-box-shadow: 0 2px 1px 0px rgba(0, 0, 0, 0.07);
        box-shadow: 0 2px 1px 0px rgba(0, 0, 0, 0.07);
        background: #fff;
        -webkit-transition: all 0.5s ease-in-out;
        -moz-transition: all 0.5s ease-in-out;
        -ms-transition: all 0.5s ease-in-out;
        -o-transition: all 0.5s ease-in-out;
        transition: all 0.5s ease-in-out;
        opacity: 0;
        visibility: hidden;
        pointer-events: none;
        transform: translateY(-15px); }
        .contact_area .contact_form .custom_select_wrapper .custom_select .custom_options .custom_option {
          font-size: 16px;
          padding: 5px 15px;
          cursor: pointer;
          margin: 0;
          text-align: left;
          line-height: 30px;
          display: block;
          color: #363bff;
          transition: all .4s ease-in-out; }
          .contact_area .contact_form .custom_select_wrapper .custom_select .custom_options .custom_option:last-of-type {
            border-bottom: 0; }
          .contact_area .contact_form .custom_select_wrapper .custom_select .custom_options .custom_option:hover {
            background: #363bff;
            color: #fff; }
      .contact_area .contact_form .custom_select_wrapper .custom_select.opened .custom_options {
        opacity: 1;
        visibility: visible;
        pointer-events: all;
        transform: translateY(0px); }
    .contact_area .contact_form textarea {
      height: auto !important; }
    .contact_area .contact_form .boxed_btn {
      border-radius: 0px;
      padding: 10px 20px;
      background: #007bff;
      display: block;
      margin-top: 0px;
      color: #fff;
      font-size: 13px;
      width: 100%;
      line-height: 2;
      text-transform: uppercase;
      outline: none;
      border: none;
      cursor: pointer;
      -webkit-transition: all 0.3s ease-in-out;
      -moz-transition: all 0.3s ease-in-out;
      -ms-transition: all 0.3s ease-in-out;
      -o-transition: all 0.3s ease-in-out;
      transition: all 0.3s ease-in-out; }
      .contact_area .contact_form .boxed_btn:hover {
        background: #2cd63c; } }
.Question_answer_area .container-fluid {
  margin: 0;
  padding: 0; }
  .Question_answer_area .container-fluid .left_side {
    width: 50%;
    float: left; }
  .Question_answer_area .container-fluid .right_side {
    width: 50%;
    float: left;
    height: 760px;
    margin: 0; }

.promo_content {
  width: 100%;
  height: 760px;
  overflow: hidden;
  position: relative;
  background: #000; }
  .promo_content img {
    width: 100%;
    max-width: 1000%;
    height: auto;
    opacity: .9;
    display: block; }
  .promo_content .play_btn {
    position: absolute;
    left: 50%;
    top: 50%;
    transform: translate(-50%, -50%);
    width: 100px;
    height: 100px;
    border-radius: 50%;
    background: #fff;
    cursor: pointer;
    z-index: 9;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
    .promo_content .play_btn:after {
      position: absolute;
      transform: translate(-50%, -50%);
      left: 50%;
      top: 50%;
      width: 0;
      height: 0;
      border-top: 18px solid transparent;
      border-bottom: 18px solid transparent;
      border-left: 26px solid #0cbafc;
      background: -webkit-linear-gradient(bottom, #0acffe 0%, #182dee 100%);
      background: -o-linear-gradient(top, #0acffe 0%, #182dee 100%);
      background: -moz-linear-gradient(to top, #0acffe 0%, #182dee 100%);
      background: linear-gradient(to top, #0acffe 0%, #182dee 100%);
      content: ''; }
    .promo_content .play_btn:hover {
      top: calc(50% - 10px);
      -webkit-box-shadow: 0px 14px 20px 0px rgba(0, 2, 87, 0.3);
      -moz-box-shadow: 0px 14px 20px 0px rgba(0, 2, 87, 0.3);
      box-shadow: 0px 14px 20px 0px rgba(0, 2, 87, 0.3); }

.accordion_wrapper {
  width: 80%; }
  .accordion_wrapper .accordion {
    margin-top: 30px; }
    .accordion_wrapper .accordion .card {
      margin-bottom: 5px;
      border-radius: 6px !important;
      outline: none;
      border: none; }
      .accordion_wrapper .accordion .card .card-header {
        padding: 0;
        border-radius: 10px !important;
        border: none;
        outline: none; }
        .accordion_wrapper .accordion .card .card-header .btn.btn-link {
          position: relative;
          width: 100%;
          height: 100%;
          text-align: left;
          color: #000;
          font-weight: 500;
          font-family: 'Fira Sans', sans-serif;
          background: #fff;
          border-radius: 5px 5px 0 0;
          text-align: left;
          text-decoration: none;
          cursor: pointer;
          border: none;
          line-height: 1;
          padding: 15px 30px 15px 15px;
          white-space: normal; }
          .accordion_wrapper .accordion .card .card-header .btn.btn-link.collapsed {
            border-radius: 5px; }
            .accordion_wrapper .accordion .card .card-header .btn.btn-link.collapsed:after {
              content: '\e61a'; }
          .accordion_wrapper .accordion .card .card-header .btn.btn-link:after {
            position: absolute;
            -webkit-transition: all 0.3s ease-in-out;
            -moz-transition: all 0.3s ease-in-out;
            -ms-transition: all 0.3s ease-in-out;
            -o-transition: all 0.3s ease-in-out;
            transition: all 0.3s ease-in-out;
            left: auto;
            right: 10px;
            content: '\e622';
            top: calc(50% - 10px);
            font-family: 'themify';
            font-size: 16px;
            font-weight: 700; }
      .accordion_wrapper .accordion .card .card-body {
        color: #304e73;
        background: #d2eafc;
        padding: 10px;
        font-size: 16px;
        line-height: 1.8;
        font-weight: 400;
        font-family: 'Fira Sans', sans-serif; }

@media only screen and (min-width: 992px) and (max-width: 1200px) {
  .Question_answer_area .container-fluid .right_side {
    height: 620px;
    margin: 0; }

  .promo_content {
    width: 100%;
    height: 620px; } }
@media only screen and (min-width: 768px) and (max-width: 991px) {
  .Question_answer_area .container-fluid .left_side {
    width: 100%; }
  .Question_answer_area .container-fluid .right_side {
    width: 100%;
    margin: 0; } }
@media (max-width: 767px) {
  .Question_answer_area .container-fluid .left_side {
    width: auto; }
  .Question_answer_area .container-fluid .right_side {
    width: 100%;
    margin: 0;
    padding: 50px 0; }

  .promo_content {
    height: 360px; }
    .promo_content .play_btn {
      transform: translate(-50%, -50%);
      width: 60px;
      height: 60px; }
      .promo_content .play_btn:after {
        transform: translate(-50%, -50%);
        border-top: 12px solid transparent;
        border-bottom: 12px solid transparent;
        border-left: 22px solid #0cbafc; }
      .promo_content .play_btn:hover {
        top: calc(50% - 5px); }

  .accordion_wrapper .accordion .card {
    margin-bottom: 5px;
    border-radius: 6px;
    outline: none;
    border: none; }
    .accordion_wrapper .accordion .card .card-header button.btn.btn-link {
      font-size: 14px;
      line-height: 1.5;
      padding: 10px 25px 10px 10px; }
      .accordion_wrapper .accordion .card .card-header button.btn.btn-link:after {
        right: 8px;
        top: calc(50% - 14px); }
    .accordion_wrapper .accordion .card .card-body {
      font-size: 14px;
      line-height: 1.5; } }
footer.simple_clean {
  background-size: cover;
  background-position: center;
  background-repeat: no-repeat;
  background-image: url("../img/footer-bg.jpg"), linear-gradient(to bottom, #13128c 0%, #480884 100%);
  background-blend-mode: multiply;
  font-size: 14px;
  color: #fff;
  padding-top: 200px;
  margin-top: -100px; }

.footer_top .f_widget_1 .footer_logo, .footer_middle .f_widget_1 .footer_logo {
  font-size: 0; }
.footer_top .f_widget_1 p, .footer_middle .f_widget_1 p {
  margin-top: 30px;
  font-size: 14px;
  color: #fff;
  font-weight: 400;
  font-family: 'Fira Sans', sans-serif;
  line-height: 1.5; }
.footer_top .f_widget_1 .social_link, .footer_middle .f_widget_1 .social_link {
  margin-top: 30px; }
  .footer_top .f_widget_1 .social_link li, .footer_middle .f_widget_1 .social_link li {
    margin-right: 10px;
    display: inline-block; }
    .footer_top .f_widget_1 .social_link li a, .footer_middle .f_widget_1 .social_link li a {
      font-size: 0; }
    .footer_top .f_widget_1 .social_link li i, .footer_middle .f_widget_1 .social_link li i {
      font-size: 14px;
      display: inline-block;
      padding: 10px;
      border-radius: 50%;
      background: none;
      border: 1px solid #fff;
      -webkit-transition: all 0.3s ease-in-out;
      -moz-transition: all 0.3s ease-in-out;
      -ms-transition: all 0.3s ease-in-out;
      -o-transition: all 0.3s ease-in-out;
      transition: all 0.3s ease-in-out;
      color: #fff; }
    .footer_top .f_widget_1 .social_link li i.ti-facebook:hover, .footer_middle .f_widget_1 .social_link li i.ti-facebook:hover {
      color: #3b5998;
      background: #fff; }
    .footer_top .f_widget_1 .social_link li i.ti-vimeo-alt:hover, .footer_middle .f_widget_1 .social_link li i.ti-vimeo-alt:hover {
      color: #1ab7ea;
      background: #fff; }
    .footer_top .f_widget_1 .social_link li i.ti-twitter-alt:hover, .footer_middle .f_widget_1 .social_link li i.ti-twitter-alt:hover {
      color: #1da1f2;
      background: #fff; }
    .footer_top .f_widget_1 .social_link li i.ti-pinterest:hover, .footer_middle .f_widget_1 .social_link li i.ti-pinterest:hover {
      color: #bd081c;
      background: #fff; }
.footer_top .f_widget_5, .footer_middle .f_widget_5, .footer_top .f_widget_4, .footer_middle .f_widget_4, .footer_top .f_widget_3, .footer_middle .f_widget_3, .footer_top .f_widget_2, .footer_middle .f_widget_2 {
  margin-left: 25px;
  text-align: left; }
  .footer_top .f_widget_5 h3, .footer_middle .f_widget_5 h3, .footer_top .f_widget_4 h3, .footer_middle .f_widget_4 h3, .footer_top .f_widget_3 h3, .footer_middle .f_widget_3 h3, .footer_top .f_widget_2 h3, .footer_middle .f_widget_2 h3 {
    color: #fff;
    margin-bottom: 25px;
    font-size: 22px;
    line-height: 36px;
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif; }
  .footer_top .f_widget_5 ul, .footer_middle .f_widget_5 ul, .footer_top .f_widget_4 ul, .footer_middle .f_widget_4 ul, .footer_top .f_widget_3 ul, .footer_middle .f_widget_3 ul, .footer_top .f_widget_2 ul, .footer_middle .f_widget_2 ul {
    text-align: left; }
    .footer_top .f_widget_5 ul li, .footer_middle .f_widget_5 ul li, .footer_top .f_widget_4 ul li, .footer_middle .f_widget_4 ul li, .footer_top .f_widget_3 ul li, .footer_middle .f_widget_3 ul li, .footer_top .f_widget_2 ul li, .footer_middle .f_widget_2 ul li {
      display: block;
      margin-bottom: 20px; }
      .footer_top .f_widget_5 ul li a, .footer_middle .f_widget_5 ul li a, .footer_top .f_widget_4 ul li a, .footer_middle .f_widget_4 ul li a, .footer_top .f_widget_3 ul li a, .footer_middle .f_widget_3 ul li a, .footer_top .f_widget_2 ul li a, .footer_middle .f_widget_2 ul li a {
        display: inline-block;
        color: #fff;
        font-size: 14px;
        font-weight: 400;
        font-family: 'Fira Sans', sans-serif;
        -webkit-transition: all 0.2s ease-in-out;
        -moz-transition: all 0.2s ease-in-out;
        -ms-transition: all 0.2s ease-in-out;
        -o-transition: all 0.2s ease-in-out;
        transition: all 0.2s ease-in-out; }
        .footer_top .f_widget_5 ul li a:hover, .footer_middle .f_widget_5 ul li a:hover, .footer_top .f_widget_4 ul li a:hover, .footer_middle .f_widget_4 ul li a:hover, .footer_top .f_widget_3 ul li a:hover, .footer_middle .f_widget_3 ul li a:hover, .footer_top .f_widget_2 ul li a:hover, .footer_middle .f_widget_2 ul li a:hover {
          margin-left: 5px;
          opacity: 0.5; }

.footer_top_2 {
  padding: 50px 0;
  border-bottom: 1px solid rgba(255, 255, 255, 0.4); }
  .footer_top_2 .footer_logo {
    font-size: 0; }
    .footer_top_2 .footer_logo img {
      margin-top: 5px; }
  .footer_top_2 .top_certified a {
    font-size: 0;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
    .footer_top_2 .top_certified a:hover {
      opacity: .5; }
  .footer_top_2 .top_certified img {
    margin-left: 15px; }

.footer_middle {
  padding: 75px 0 25px; }
  .footer_middle .f_widget_1 p {
    margin-top: 10px;
    margin-bottom: 15px; }
    .footer_middle .f_widget_1 p span {
      font-weight: 700; }
  .footer_middle .f_widget_1 .social_link {
    margin-top: 0; }
    .footer_middle .f_widget_1 .social_link li i {
      border-radius: 0; }

.footer_bottom {
  background: rgba(0, 0, 0, 0.5);
  padding: 25px;
  border-radius: 15px 15px 0 0;
  position: relative;
  margin-top: 80px; }
  .footer_bottom .scrolltop {
    position: absolute;
    width: 60px;
    height: 60px;
    border-radius: 50%;
    border: 3px solid #fff;
    background: -webkit-linear-gradient(left, #0acffe 0%, #182dee 100%);
    background: -o-linear-gradient(right, #0acffe 0%, #182dee 100%);
    background: -moz-linear-gradient(to right, #0acffe 0%, #182dee 100%);
    background: linear-gradient(to right, #0acffe 0%, #182dee 100%);
    cursor: pointer;
    text-align: center;
    font-size: 31px;
    left: calc(50% - 30px);
    top: calc(0px - 30px);
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
    .footer_bottom .scrolltop i {
      margin-top: 15px;
      display: inline-block;
      font-size: 20px;
      color: #fff; }
    .footer_bottom .scrolltop:hover {
      top: -35px; }
  .footer_bottom .top_certified, .footer_bottom .paypent_list {
    display: inline-block; }
    .footer_bottom .top_certified h3, .footer_bottom .paypent_list h3 {
      margin-bottom: 10px;
      color: #fff;
      font-size: 16px;
      font-weight: 400;
      font-family: 'Fira Sans', sans-serif; }
    .footer_bottom .top_certified a, .footer_bottom .paypent_list a {
      margin-right: 7px;
      font-size: 0; }
  .footer_bottom .copy_right_text p {
    font-size: 14px;
    margin-top: 35px;
    text-align: center;
    color: #0cbafc; }

.footer_bottom_2 {
  background: rgba(0, 0, 0, 0.1);
  padding: 20px 0;
  border-radius: 0; }
  .footer_bottom_2 .copy_right_text {
    font-size: 14px; }
  .footer_bottom_2 .paypent_list {
    display: inline-block; }
    .footer_bottom_2 .paypent_list a {
      margin-right: 7px;
      display: inline-block;
      font-size: 0; }
      .footer_bottom_2 .paypent_list a img {
        display: block; }

footer.creative_clean {
  padding-top: 250px;
  background-image: url("../img/footer-bg-2.png");
  background-size: cover;
  background-position: center;
  background-repeat: no-repeat; }

.creative_clean .footer_wrapper {
  color: #fff; }

.creative_clean .footer_wrapper .footer_bottom .scrolltop {
  background: -webkit-linear-gradient(bottom, #1317d1 0%, #07164e 100%);
  background: -o-linear-gradient(top, #1317d1 0%, #07164e 100%);
  background: -moz-linear-gradient(to top, #1317d1 0%, #07164e 100%);
  background: linear-gradient(to top, #1317d1 0%, #07164e 100%); }

.simple_clean_3, .simple_clean_4 {
  color: #fff;
  background: -webkit-linear-gradient(bottom, #13128c 0%, #370863 100%);
  background: -o-linear-gradient(top, #13128c 0%, #370863 100%);
  background: -moz-linear-gradient(to top, #13128c 0%, #370863 100%);
  background: linear-gradient(to top, #13128c 0%, #370863 100%);
  -webkit-transition: all 0.3s ease-in-out;
  -moz-transition: all 0.3s ease-in-out;
  -ms-transition: all 0.3s ease-in-out;
  -o-transition: all 0.3s ease-in-out;
  transition: all 0.3s ease-in-out; }

.simple_clean_4 {
  background: -webkit-linear-gradient(top, #5317e6 0%, #07164e 100%);
  background: -o-linear-gradient(bottom, #5317e6 0%, #07164e 100%);
  background: -moz-linear-gradient(to bottom, #5317e6 0%, #07164e 100%);
  background: linear-gradient(to bottom, #5317e6 0%, #07164e 100%); }
  .simple_clean_4 .footer_bottom {
    border-radius: 0; }

.simple_clean_5 {
  padding-top: 350px;
  position: relative;
  z-index: 1;
  overflow: hidden; }
  .simple_clean_5 .footer_bottom .scrolltop {
    background: -webkit-linear-gradient(bottom, #5317e6 0%, #07164e 100%);
    background: -o-linear-gradient(top, #5317e6 0%, #07164e 100%);
    background: -moz-linear-gradient(to top, #5317e6 0%, #07164e 100%);
    background: linear-gradient(to top, #5317e6 0%, #07164e 100%); }
  .simple_clean_5:after, .simple_clean_5:before {
    position: absolute;
    width: 100%;
    height: 120%;
    content: '';
    transform: skewY(-5deg);
    border-radius: 150px 140px 0 0; }
  .simple_clean_5:before {
    background: -webkit-linear-gradient(top, #5317e6 0%, #07164e 100%);
    background: -o-linear-gradient(bottom, #5317e6 0%, #07164e 100%);
    background: -moz-linear-gradient(to bottom, #5317e6 0%, #07164e 100%);
    background: linear-gradient(to bottom, #5317e6 0%, #07164e 100%);
    top: 235px;
    z-index: -2;
    left: 0;
    border-radius: 150px 140px 0 0; }
  .simple_clean_5:after {
    top: 185px;
    background: -webkit-linear-gradient(top, #5317e6 0%, #07164e 100%);
    background: -o-linear-gradient(bottom, #5317e6 0%, #07164e 100%);
    background: -moz-linear-gradient(to bottom, #5317e6 0%, #07164e 100%);
    background: linear-gradient(to bottom, #5317e6 0%, #07164e 100%);
    z-index: -1;
    opacity: .5;
    left: 40px;
    border-radius: 150px 140px 0 0; }

.simple_clean_6 {
  padding-top: 200px;
  overflow: hidden;
  position: relative;
  z-index: 1; }
  .simple_clean_6:after {
    position: absolute;
    z-index: -1;
    left: 0;
    top: 50px;
    width: 100%;
    height: calc(100% + 200px);
    content: '';
    background: -webkit-linear-gradient(top, #000b42 0%, #004161 100%);
    background: -o-linear-gradient(bottom, #000b42 0%, #004161 100%);
    background: -moz-linear-gradient(to bottom, #000b42 0%, #004161 100%);
    background: linear-gradient(to bottom, #000b42 0%, #004161 100%);
    transform: skewY(-3deg); }
  .simple_clean_6 .footer_bottom {
    background: rgba(0, 0, 0, 0.1);
    padding: 15px 0;
    border-radius: 0; }
    .simple_clean_6 .footer_bottom p {
      text-align: left;
      margin-top: 10px;
      color: #fff; }
    .simple_clean_6 .footer_bottom .paypent_list {
      display: inline-block; }

.simple_clean_7 {
  padding-top: 200px;
  background: -webkit-linear-gradient(top, #010094 0%, #1f003c 100%);
  background: -o-linear-gradient(bottom, #010094 0%, #1f003c 100%);
  background: -moz-linear-gradient(to bottom, #010094 0%, #1f003c 100%);
  background: linear-gradient(to bottom, #010094 0%, #1f003c 100%);
  position: relative;
  z-index: 1; }
  .simple_clean_7 .footer_bottom {
    border-radius: 0; }
    .simple_clean_7 .footer_bottom .copy_right_text p {
      color: #fff; }

.simple_clean_8 {
  padding-top: 120px;
  position: relative;
  z-index: 1;
  background: -webkit-linear-gradient(top, #13128c 0%, #370863 100%);
  background: -o-linear-gradient(bottom, #13128c 0%, #370863 100%);
  background: -moz-linear-gradient(to bottom, #13128c 0%, #370863 100%);
  background: linear-gradient(to bottom, #13128c 0%, #370863 100%); }
  .simple_clean_8 .footer_bottom {
    background: #1f2d54;
    padding: 15px 0;
    border-radius: 0; }
    .simple_clean_8 .footer_bottom p {
      text-align: left;
      margin-top: 10px;
      color: #fff; }
    .simple_clean_8 .footer_bottom .paypent_list {
      display: inline-block; }

.footer_dark_in {
  padding-top: 100px;
  background: #090b42;
  position: relative;
  z-index: 1; }
  .footer_dark_in .footer_bottom {
    border-radius: 0; }
    .footer_dark_in .footer_bottom .copy_right_text p {
      color: #fff; }

.scrolltop_wrapper {
  display: none; }
  .scrolltop_wrapper.scrollon {
    display: block !important; }

.creative_clean .footer_bottom .scrolltop {
  background: -webkit-linear-gradient(bottom, #1317d1 0%, #07164e 100%);
  background: -o-linear-gradient(top, #1317d1 0%, #07164e 100%);
  background: -moz-linear-gradient(to top, #1317d1 0%, #07164e 100%);
  background: linear-gradient(to top, #1317d1 0%, #07164e 100%); }

.scrolltop_2 {
  width: 60px;
  height: 60px;
  border-radius: 50%;
  position: fixed;
  bottom: 50px;
  right: 30px;
  z-index: 99;
  border: 3px solid #fff;
  background: #363bff;
  -webkit-box-shadow: 0px 0px 10.5px 1.5px rgba(0, 0, 0, 0.25);
  -moz-box-shadow: 0px 0px 10.5px 1.5px rgba(0, 0, 0, 0.25);
  box-shadow: 0px 0px 10.5px 1.5px rgba(0, 0, 0, 0.25);
  cursor: pointer;
  text-align: center;
  font-size: 31px;
  -webkit-transition: all 0.3s ease-in-out;
  -moz-transition: all 0.3s ease-in-out;
  -ms-transition: all 0.3s ease-in-out;
  -o-transition: all 0.3s ease-in-out;
  transition: all 0.3s ease-in-out;
  -webkit-transition: all 0.3s ease-in-out;
  -moz-transition: all 0.3s ease-in-out;
  -ms-transition: all 0.3s ease-in-out;
  -o-transition: all 0.3s ease-in-out;
  transition: all 0.3s ease-in-out; }
  .scrolltop_2 i {
    margin-top: 15px;
    display: inline-block;
    font-size: 20px;
    color: #fff; }
  .scrolltop_2:hover {
    background: #0309ff;
    bottom: 55px; }

.scrolltop_3 {
  width: 60px;
  height: 60px;
  border-radius: 50%;
  position: fixed;
  bottom: 50px;
  right: 30px;
  z-index: 99;
  border: 3px solid #fff;
  cursor: pointer;
  text-align: center;
  font-size: 31px;
  -webkit-transition: all 0.3s ease-in-out;
  -moz-transition: all 0.3s ease-in-out;
  -ms-transition: all 0.3s ease-in-out;
  -o-transition: all 0.3s ease-in-out;
  transition: all 0.3s ease-in-out;
  background: -webkit-linear-gradient(bottom, #5317e6 0%, #07164e 100%);
  background: -o-linear-gradient(top, #5317e6 0%, #07164e 100%);
  background: -moz-linear-gradient(to top, #5317e6 0%, #07164e 100%);
  background: linear-gradient(to top, #5317e6 0%, #07164e 100%);
  -webkit-box-shadow: 0px 0px 10.5px 1.5px rgba(0, 0, 0, 0.25);
  -moz-box-shadow: 0px 0px 10.5px 1.5px rgba(0, 0, 0, 0.25);
  box-shadow: 0px 0px 10.5px 1.5px rgba(0, 0, 0, 0.25); }
  .scrolltop_3:hover {
    background: -webkit-linear-gradient(bottom, #5317e6 0%, #07164e 100%);
    background: -o-linear-gradient(top, #5317e6 0%, #07164e 100%);
    background: -moz-linear-gradient(to top, #5317e6 0%, #07164e 100%);
    background: linear-gradient(to top, #5317e6 0%, #07164e 100%);
    bottom: 55px; }
  .scrolltop_3 i {
    margin-top: 15px;
    display: inline-block;
    font-size: 20px;
    color: #fff; }

.scrolltop_4 {
  width: 60px;
  height: 60px;
  border-radius: 50%;
  position: fixed;
  bottom: 50px;
  right: 30px;
  z-index: 99;
  border: 3px solid #fff;
  cursor: pointer;
  text-align: center;
  font-size: 31px;
  -webkit-transition: all 0.3s ease-in-out;
  -moz-transition: all 0.3s ease-in-out;
  -ms-transition: all 0.3s ease-in-out;
  -o-transition: all 0.3s ease-in-out;
  transition: all 0.3s ease-in-out;
  background: -webkit-linear-gradient(bottom, #35dc78 0%, #34dbff 100%);
  background: -o-linear-gradient(top, #35dc78 0%, #34dbff 100%);
  background: -moz-linear-gradient(to top, #35dc78 0%, #34dbff 100%);
  background: linear-gradient(to top, #35dc78 0%, #34dbff 100%);
  -webkit-box-shadow: 0px 0px 10.5px 1.5px rgba(0, 0, 0, 0.25);
  -moz-box-shadow: 0px 0px 10.5px 1.5px rgba(0, 0, 0, 0.25);
  box-shadow: 0px 0px 10.5px 1.5px rgba(0, 0, 0, 0.25); }
  .scrolltop_4:hover {
    background: -webkit-linear-gradient(bottom, #35dc78 0%, #34dbff 100%);
    background: -o-linear-gradient(top, #35dc78 0%, #34dbff 100%);
    background: -moz-linear-gradient(to top, #35dc78 0%, #34dbff 100%);
    background: linear-gradient(to top, #35dc78 0%, #34dbff 100%);
    bottom: 55px; }
  .scrolltop_4 i {
    margin-top: 15px;
    display: inline-block;
    font-size: 20px;
    color: #fff; }

.scrolltop_5 {
  width: 60px;
  height: 60px;
  border-radius: 50%;
  position: fixed;
  bottom: 50px;
  right: 30px;
  background: #3a2085;
  z-index: 99;
  border: 3px solid #fff;
  cursor: pointer;
  text-align: center;
  font-size: 31px;
  -webkit-transition: all 0.3s ease-in-out;
  -moz-transition: all 0.3s ease-in-out;
  -ms-transition: all 0.3s ease-in-out;
  -o-transition: all 0.3s ease-in-out;
  transition: all 0.3s ease-in-out;
  -webkit-box-shadow: 0px 0px 10.5px 1.5px rgba(0, 0, 0, 0.25);
  -moz-box-shadow: 0px 0px 10.5px 1.5px rgba(0, 0, 0, 0.25);
  box-shadow: 0px 0px 10.5px 1.5px rgba(0, 0, 0, 0.25); }
  .scrolltop_5:hover {
    background: #28165c;
    bottom: 55px; }
  .scrolltop_5 i {
    margin-top: 15px;
    display: inline-block;
    font-size: 20px;
    color: #fff; }

.scrolltop_6 {
  width: 60px;
  height: 60px;
  border-radius: 50%;
  position: fixed;
  bottom: 50px;
  right: 30px;
  background: #170735;
  z-index: 99;
  border: 3px solid #fff;
  cursor: pointer;
  text-align: center;
  font-size: 31px;
  -webkit-transition: all 0.3s ease-in-out;
  -moz-transition: all 0.3s ease-in-out;
  -ms-transition: all 0.3s ease-in-out;
  -o-transition: all 0.3s ease-in-out;
  transition: all 0.3s ease-in-out;
  -webkit-box-shadow: 0px 0px 10.5px 1.5px rgba(0, 0, 0, 0.25);
  -moz-box-shadow: 0px 0px 10.5px 1.5px rgba(0, 0, 0, 0.25);
  box-shadow: 0px 0px 10.5px 1.5px rgba(0, 0, 0, 0.25); }
  .scrolltop_6:hover {
    background: #030108;
    bottom: 55px; }
  .scrolltop_6 i {
    margin-top: 15px;
    display: inline-block;
    font-size: 20px;
    color: #fff; }

.simple_clean_7 .footer_bottom .scrolltop {
  background: #3a2085; }

.footer_dark_in .footer_bottom .scrolltop {
  background: #3a2085; }

@media only screen and (min-width: 992px) and (max-width: 1200px) {
  .footer_bottom .top_certified a, .footer_bottom .paypent_list a {
    margin-right: 3px; }
  .footer_bottom .copy_right_text p {
    font-size: 12px; }

  footer.creative_clean {
    padding-top: 150px; }

  .simple_clean_5:after, .simple_clean_5:before {
    transform: skewY(-5deg); }
  .simple_clean_5:before {
    top: 225px;
    left: 0;
    border-radius: 140px 120px 0 0; }
  .simple_clean_5:after {
    top: 175px;
    border-radius: 160px 140px 0 0;
    left: 15px; } }
@media only screen and (min-width: 768px) and (max-width: 991px) {
  footer.simple_clean {
    padding-top: 180px; }

  .footer_top .f_widget_1 p, .footer_middle .f_widget_1 p {
    margin-top: 15px;
    font-size: 14px;
    line-height: 20px; }
  .footer_top .f_widget_1 .social_link, .footer_middle .f_widget_1 .social_link {
    margin-top: 15px;
    margin-bottom: 0px; }
    .footer_top .f_widget_1 .social_link i, .footer_middle .f_widget_1 .social_link i {
      font-size: 15px; }
  .footer_top .f_widget_5, .footer_middle .f_widget_5, .footer_top .f_widget_4, .footer_middle .f_widget_4, .footer_top .f_widget_3, .footer_middle .f_widget_3, .footer_top .f_widget_2, .footer_middle .f_widget_2 {
    margin-left: 0px; }
    .footer_top .f_widget_5 h3, .footer_middle .f_widget_5 h3, .footer_top .f_widget_4 h3, .footer_middle .f_widget_4 h3, .footer_top .f_widget_3 h3, .footer_middle .f_widget_3 h3, .footer_top .f_widget_2 h3, .footer_middle .f_widget_2 h3 {
      margin-bottom: 20px;
      font-size: 18px;
      text-align: left; }
    .footer_top .f_widget_5 ul li, .footer_middle .f_widget_5 ul li, .footer_top .f_widget_4 ul li, .footer_middle .f_widget_4 ul li, .footer_top .f_widget_3 ul li, .footer_middle .f_widget_3 ul li, .footer_top .f_widget_2 ul li, .footer_middle .f_widget_2 ul li {
      margin-bottom: 22px; }
      .footer_top .f_widget_5 ul li a, .footer_middle .f_widget_5 ul li a, .footer_top .f_widget_4 ul li a, .footer_middle .f_widget_4 ul li a, .footer_top .f_widget_3 ul li a, .footer_middle .f_widget_3 ul li a, .footer_top .f_widget_2 ul li a, .footer_middle .f_widget_2 ul li a {
        font-size: 12px; }

  .footer_top_2 .top_certified {
    margin-top: 10px; }
    .footer_top_2 .top_certified a img {
      margin-left: 12px;
      width: 60px; }

  .footer_bottom .scrolltop {
    width: 56px;
    height: 56px;
    left: calc(50% - 28px); }
    .footer_bottom .scrolltop i {
      margin-top: 13px; }
  .footer_bottom .top_certified, .footer_bottom .paypent_list {
    text-align: left; }
    .footer_bottom .top_certified a, .footer_bottom .paypent_list a {
      margin-right: 5px;
      margin-bottom: 5px;
      display: inline-block; }
      .footer_bottom .top_certified a img, .footer_bottom .paypent_list a img {
        width: 30px; }
  .footer_bottom .copy_right_text p {
    text-align: center;
    margin-top: 20px;
    font-size: 12px;
    line-height: 1.5; }

  .footer_bottom_2 .copy_right_text {
    font-size: 14px; }

  .creative_clean {
    padding-top: 220px; }

  .simple_clean_5 {
    padding-top: 250px; }
    .simple_clean_5:after, .simple_clean_5:before {
      transform: skewY(-5deg); }
    .simple_clean_5:before {
      top: 135px;
      left: 0;
      border-radius: 140px 120px 0 0; }
    .simple_clean_5:after {
      top: 100px;
      border-radius: 160px 140px 0 0;
      left: 15px; }

  .simple_clean_7 {
    padding-top: 130px; }

  .footer_dark_in {
    padding-top: 80px; } }
@media (max-width: 767px) {
  footer.simple_clean {
    padding-top: 150px;
    margin-top: -80px; }

  .footer_top .f_widget_1, .footer_middle .f_widget_1 {
    padding: 25px; }
    .footer_top .f_widget_1 h2, .footer_middle .f_widget_1 h2 {
      width: 50%; }
      .footer_top .f_widget_1 h2 a img, .footer_middle .f_widget_1 h2 a img {
        width: 80%; }
    .footer_top .f_widget_1 p, .footer_middle .f_widget_1 p {
      margin-top: 15px;
      font-size: 14px;
      line-height: 20px; }
    .footer_top .f_widget_1 .social_link, .footer_middle .f_widget_1 .social_link {
      margin-top: 25px;
      margin-bottom: 0px; }
      .footer_top .f_widget_1 .social_link i, .footer_middle .f_widget_1 .social_link i {
        font-size: 15px; }
  .footer_top .f_widget_5, .footer_middle .f_widget_5, .footer_top .f_widget_4, .footer_middle .f_widget_4, .footer_top .f_widget_3, .footer_middle .f_widget_3, .footer_top .f_widget_2, .footer_middle .f_widget_2 {
    text-align: left; }
    .footer_top .f_widget_5 h3, .footer_middle .f_widget_5 h3, .footer_top .f_widget_4 h3, .footer_middle .f_widget_4 h3, .footer_top .f_widget_3 h3, .footer_middle .f_widget_3 h3, .footer_top .f_widget_2 h3, .footer_middle .f_widget_2 h3 {
      margin-bottom: 8px;
      font-size: 18px;
      margin-top: 15px; }
    .footer_top .f_widget_5 ul, .footer_middle .f_widget_5 ul, .footer_top .f_widget_4 ul, .footer_middle .f_widget_4 ul, .footer_top .f_widget_3 ul, .footer_middle .f_widget_3 ul, .footer_top .f_widget_2 ul, .footer_middle .f_widget_2 ul {
      text-align: left; }
      .footer_top .f_widget_5 ul li, .footer_middle .f_widget_5 ul li, .footer_top .f_widget_4 ul li, .footer_middle .f_widget_4 ul li, .footer_top .f_widget_3 ul li, .footer_middle .f_widget_3 ul li, .footer_top .f_widget_2 ul li, .footer_middle .f_widget_2 ul li {
        margin-bottom: 12px; }
        .footer_top .f_widget_5 ul li a, .footer_middle .f_widget_5 ul li a, .footer_top .f_widget_4 ul li a, .footer_middle .f_widget_4 ul li a, .footer_top .f_widget_3 ul li a, .footer_middle .f_widget_3 ul li a, .footer_top .f_widget_2 ul li a, .footer_middle .f_widget_2 ul li a {
          font-size: 14px; }

  .footer_top_2 {
    padding: 50px 0 15px; }
    .footer_top_2 .footer_logo {
      font-size: 0; }
      .footer_top_2 .footer_logo img {
        width: 80%; }
    .footer_top_2 .top_certified {
      margin-top: 20px; }
      .footer_top_2 .top_certified a img {
        margin-left: 7px;
        width: 55px; }

  .footer_bottom {
    margin-top: 25px;
    padding-bottom: 35px; }
    .footer_bottom .scrolltop {
      width: 40px;
      height: 40px;
      left: calc(50% - 20px);
      top: calc(0px - 20px); }
      .footer_bottom .scrolltop i {
        margin-top: 0; }
      .footer_bottom .scrolltop:hover {
        top: -25px; }
    .footer_bottom .top_certified, .footer_bottom .paypent_list {
      text-align: center;
      margin-bottom: 20px; }
      .footer_bottom .top_certified a, .footer_bottom .paypent_list a {
        margin-right: 5px;
        margin-bottom: 5px;
        display: inline-block; }
        .footer_bottom .top_certified a img, .footer_bottom .paypent_list a img {
          width: 38px; }
    .footer_bottom .copy_right_text {
      position: absolute;
      top: 50px;
      margin: 0 auto;
      left: 0;
      width: 100%; }
      .footer_bottom .copy_right_text p {
        text-align: center;
        font-size: 12px; }

  .footer_bottom_2 .copy_right_text {
    font-size: 12px; }

  footer.creative_clean {
    padding-top: 200px; }

  .simple_clean_3 .copy_right_text p, .simple_clean_4 .copy_right_text p {
    margin-top: 15px; }

  .simple_clean_5 {
    padding-top: 130px; }
    .simple_clean_5:after, .simple_clean_5:before {
      transform: skewY(-5deg); }
    .simple_clean_5:before {
      top: 60px;
      left: 0;
      border-radius: 100px 60px 0 0; }
    .simple_clean_5:after {
      top: 30px;
      border-radius: 105px 50px 0 0;
      left: 15px; }

  .simple_clean_7 {
    padding-top: 100px; }

  .footer_dark_in {
    padding-top: 60px; }

  .scrolltop_2 {
    width: 45px;
    height: 45px; }
    .scrolltop_2 i {
      margin-top: 0px;
      font-size: 14px; }

  .scrolltop_3 {
    width: 45px;
    height: 45px; }
    .scrolltop_3 i {
      margin-top: 0px;
      font-size: 14px; }

  .scrolltop_4 {
    width: 45px;
    height: 45px; }
    .scrolltop_4 i {
      margin-top: 0px;
      font-size: 14px; }

  .scrolltop_5 {
    width: 45px;
    height: 45px; }
    .scrolltop_5 i {
      margin-top: 0px;
      font-size: 14px; }

  .scrolltop_6 {
    width: 45px;
    height: 45px; }
    .scrolltop_6 i {
      margin-top: 0px;
      font-size: 14px; } }
@media only screen and (min-width: 480px) and (max-width: 767px) {
  .footer_bottom .copy_right_text {
    font-size: 14px; }
  .footer_bottom .paypent_list a img, .footer_bottom .top_certified a img {
    width: auto; } }
.single_feature_item {
  border: 1px solid #b7f0ff;
  padding: 50px 40px;
  margin-bottom: 50px;
  -webkit-transition: all 0.3s ease-in-out;
  -moz-transition: all 0.3s ease-in-out;
  -ms-transition: all 0.3s ease-in-out;
  -o-transition: all 0.3s ease-in-out;
  transition: all 0.3s ease-in-out;
  top: 0;
  z-index: 1;
  position: relative; }
  .single_feature_item h3 {
    color: #fff;
    font-size: 24px;
    margin-bottom: 15px;
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif; }
  .single_feature_item p {
    font-size: 16px;
    color: #f8fafe;
    line-height: 1.75;
    font-weight: 400;
    font-family: 'Fira Sans', sans-serif; }
  .single_feature_item:before {
    content: '';
    position: absolute;
    bottom: -10px;
    left: -1px;
    background: #304e73;
    height: 10px;
    width: calc(100% + 2px);
    z-index: 1;
    opacity: 1;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
  .single_feature_item:after {
    content: '';
    position: absolute;
    bottom: -10px;
    left: -1px;
    background: -webkit-linear-gradient(left, #0acffe 0%, #182dee 100%);
    background: -o-linear-gradient(right, #0acffe 0%, #182dee 100%);
    background: -moz-linear-gradient(to right, #0acffe 0%, #182dee 100%);
    background: linear-gradient(to right, #0acffe 0%, #182dee 100%);
    height: 10px;
    width: calc(100% + 2px);
    z-index: 2;
    opacity: 0;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
  .single_feature_item:hover {
    border-bottom: 0;
    top: -10px; }
  .single_feature_item:hover:after {
    opacity: 1; }
  .single_feature_item .feature_img {
    display: table;
    width: 105px;
    height: 105px;
    margin: auto;
    text-align: center;
    margin-bottom: 25px; }
    .single_feature_item .feature_img .feature_img_tablecell {
      display: table-cell;
      vertical-align: middle; }

.single_feature_pattern_2, .single_feature_item_2, .single_feature_item_4, .single_feature_item_7, .single_feature_item_9, .single_feature_item_12 {
  margin: 0 30px 50px 0;
  border-radius: 20px;
  padding: 25px;
  -webkit-transition: all 0.3s ease-in-out;
  -moz-transition: all 0.3s ease-in-out;
  -ms-transition: all 0.3s ease-in-out;
  -o-transition: all 0.3s ease-in-out;
  transition: all 0.3s ease-in-out;
  top: 0;
  z-index: 1;
  position: relative; }
  .single_feature_pattern_2:hover .feature_icon, .single_feature_item_2:hover .feature_icon, .single_feature_item_4:hover .feature_icon, .single_feature_item_7:hover .feature_icon, .single_feature_item_9:hover .feature_icon, .single_feature_item_12:hover .feature_icon {
    position: absolute;
    top: -20px; }
  .single_feature_pattern_2 h3, .single_feature_item_2 h3, .single_feature_item_4 h3, .single_feature_item_7 h3, .single_feature_item_9 h3, .single_feature_item_12 h3 {
    font-size: 20px;
    margin-bottom: 10px;
    font-weight: 500;
    font-family: 'Fira Sans', sans-serif; }
  .single_feature_pattern_2 p, .single_feature_item_2 p, .single_feature_item_4 p, .single_feature_item_7 p, .single_feature_item_9 p, .single_feature_item_12 p {
    font-size: 14px;
    line-height: 1.75;
    color: #fff;
    font-weight: 400;
    font-family: 'Fira Sans', sans-serif;
    margin-bottom: 10px; }
  .single_feature_pattern_2 .boxed_btn, .single_feature_item_2 .boxed_btn, .single_feature_item_4 .boxed_btn, .single_feature_item_7 .boxed_btn, .single_feature_item_9 .boxed_btn, .single_feature_item_12 .boxed_btn {
    display: inline-block;
    background: none;
    font-size: 14px;
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif; }
    .single_feature_pattern_2 .boxed_btn span, .single_feature_item_2 .boxed_btn span, .single_feature_item_4 .boxed_btn span, .single_feature_item_7 .boxed_btn span, .single_feature_item_9 .boxed_btn span, .single_feature_item_12 .boxed_btn span {
      font-size: 13px;
      margin-left: 2px;
      -webkit-transition: all 0.3s ease-in-out;
      -moz-transition: all 0.3s ease-in-out;
      -ms-transition: all 0.3s ease-in-out;
      -o-transition: all 0.3s ease-in-out;
      transition: all 0.3s ease-in-out; }
    .single_feature_pattern_2 .boxed_btn:hover span, .single_feature_item_2 .boxed_btn:hover span, .single_feature_item_4 .boxed_btn:hover span, .single_feature_item_7 .boxed_btn:hover span, .single_feature_item_9 .boxed_btn:hover span, .single_feature_item_12 .boxed_btn:hover span {
      margin-left: 5px; }
  .single_feature_pattern_2 .feature_icon, .single_feature_item_2 .feature_icon, .single_feature_item_4 .feature_icon, .single_feature_item_7 .feature_icon, .single_feature_item_9 .feature_icon, .single_feature_item_12 .feature_icon {
    position: absolute;
    top: -25px;
    right: -25px;
    width: 50px;
    height: 50px;
    -webkit-transition: all 0.2s ease-in-out;
    -moz-transition: all 0.2s ease-in-out;
    -ms-transition: all 0.2s ease-in-out;
    -o-transition: all 0.2s ease-in-out;
    transition: all 0.2s ease-in-out;
    border-radius: 12px; }
    .single_feature_pattern_2 .feature_icon i, .single_feature_item_2 .feature_icon i, .single_feature_item_4 .feature_icon i, .single_feature_item_7 .feature_icon i, .single_feature_item_9 .feature_icon i, .single_feature_item_12 .feature_icon i {
      font-size: 24px;
      color: #fff; }

.feature_area_2 {
  background-image: url(../img/circle.png);
  background-size: 45%;
  background-repeat: no-repeat;
  background-position: -35% 160%;
  background-size: 35%;
  background-repeat: no-repeat; }

.single_feature_item_2 {
  border: 1px solid #d2e5ff; }
  .single_feature_item_2 h3 {
    background: -webkit-linear-gradient(left, #1317d1 0%, #07164e 100%);
    background: -o-linear-gradient(right, #1317d1 0%, #07164e 100%);
    background: -moz-linear-gradient(to right, #1317d1 0%, #07164e 100%);
    background: linear-gradient(to right, #1317d1 0%, #07164e 100%);
    -webkit-background-clip: text;
    -webkit-text-fill-color: transparent; }
  .single_feature_item_2 p {
    color: #fff; }
  .single_feature_item_2 .boxed_btn {
    color: #fff; }
    .single_feature_item_2 .boxed_btn:hover {
      background: -webkit-linear-gradient(left, #1317d1 0%, #07164e 100%);
      background: -o-linear-gradient(right, #1317d1 0%, #07164e 100%);
      background: -moz-linear-gradient(to right, #1317d1 0%, #07164e 100%);
      background: linear-gradient(to right, #1317d1 0%, #07164e 100%);
      -webkit-background-clip: text;
      -webkit-text-fill-color: transparent; }
  .single_feature_item_2 .feature_icon {
    background: -webkit-linear-gradient(bottom, #1317d1 0%, #07164e 100%);
    background: -o-linear-gradient(top, #1317d1 0%, #07164e 100%);
    background: -moz-linear-gradient(to top, #1317d1 0%, #07164e 100%);
    background: linear-gradient(to top, #1317d1 0%, #07164e 100%); }

.single_feature_item_3 {
  border: none;
  box-shadow: none;
  padding: 50px 40px;
  -webkit-transition: all 0.3s ease-in-out;
  -moz-transition: all 0.3s ease-in-out;
  -ms-transition: all 0.3s ease-in-out;
  -o-transition: all 0.3s ease-in-out;
  transition: all 0.3s ease-in-out;
  top: 0;
  z-index: 1;
  position: relative;
  margin-bottom: 50px; }
  .single_feature_item_3 h3 {
    color: #1b38ff;
    font-size: 24px;
    margin-bottom: 15px;
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif; }
  .single_feature_item_3 p {
    font-size: 16px;
    color: #f8fafe;
    line-height: 1.75;
    font-weight: 400;
    font-family: 'Fira Sans', sans-serif; }
  .single_feature_item_3:hover {
    border-bottom: 0;
    border: 1px solid #fff;
    top: -10px; }
  .single_feature_item_3 .feature_img {
    display: table;
    width: 105px;
    height: 105px;
    margin: auto;
    text-align: center;
    margin-bottom: 25px; }
    .single_feature_item_3 .feature_img .feature_img_tablecell {
      display: table-cell;
      vertical-align: middle; }

.single_feature_item_4 {
  border: 1px solid #d2e5ff; }
  .single_feature_item_4 h3 {
    background: -webkit-linear-gradient(left, #5317e6 0%, #07164e 100%);
    background: -o-linear-gradient(right, #5317e6 0%, #07164e 100%);
    background: -moz-linear-gradient(to right, #5317e6 0%, #07164e 100%);
    background: linear-gradient(to right, #5317e6 0%, #07164e 100%);
    -webkit-background-clip: text;
    -webkit-text-fill-color: transparent; }
  .single_feature_item_4 p {
    color: #fff; }
  .single_feature_item_4 .boxed_btn {
    color: #fff; }
    .single_feature_item_4 .boxed_btn:hover {
      background: -webkit-linear-gradient(left, #5317e6 0%, #07164e 100%);
      background: -o-linear-gradient(right, #5317e6 0%, #07164e 100%);
      background: -moz-linear-gradient(to right, #5317e6 0%, #07164e 100%);
      background: linear-gradient(to right, #5317e6 0%, #07164e 100%);
      -webkit-background-clip: text;
      -webkit-text-fill-color: transparent; }
  .single_feature_item_4 .feature_icon {
    background: -webkit-linear-gradient(bottom, #5317e6 0%, #07164e 100%);
    background: -o-linear-gradient(top, #5317e6 0%, #07164e 100%);
    background: -moz-linear-gradient(to top, #5317e6 0%, #07164e 100%);
    background: linear-gradient(to top, #5317e6 0%, #07164e 100%); }

.single_feature_pattern_3, .single_feature_item_5, .single_feature_item_6 {
  padding: 35px 25px;
  background-image: -webkit-linear-gradient(right, #ffd050 0%, #e08900 100%);
  background-image: -o-linear-gradient(right, #ffd050 0%, #e08900 100%);
  background-image: linear-gradient(to left, #ffd050 0%, #e08900 100%);
  border-radius: 10px;
  position: relative;
  z-index: 1;
  -webkit-transition: all 0.3s ease-in-out;
  -moz-transition: all 0.3s ease-in-out;
  -ms-transition: all 0.3s ease-in-out;
  -o-transition: all 0.3s ease-in-out;
  transition: all 0.3s ease-in-out;
  top: 0;
  text-align: center;
  color: #fff; }
  .single_feature_pattern_3:after, .single_feature_item_5:after, .single_feature_item_6:after {
    width: 100%;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out;
    height: 100%;
    border-radius: 10px;
    left: 0;
    top: 0;
    content: '';
    z-index: -1;
    position: absolute;
    opacity: 0;
    background: -webkit-linear-gradient(bottom, #6a11cb 0%, #2575fc 100%);
    background: -o-linear-gradient(top, #6a11cb 0%, #2575fc 100%);
    background: -moz-linear-gradient(to top, #6a11cb 0%, #2575fc 100%);
    background: linear-gradient(to top, #6a11cb 0%, #2575fc 100%); }
  .single_feature_pattern_3:hover:after, .single_feature_item_5:hover:after, .single_feature_item_6:hover:after {
    opacity: 1; }
  .single_feature_pattern_3:hover .feature_icon, .single_feature_item_5:hover .feature_icon, .single_feature_item_6:hover .feature_icon {
    opacity: 1;
    filter: invert(100%); }
  .single_feature_pattern_3:hover, .single_feature_item_5:hover, .single_feature_item_6:hover {
    top: -5px; }
  .single_feature_pattern_3 .feature_icon, .single_feature_item_5 .feature_icon, .single_feature_item_6 .feature_icon {
    opacity: .2;
    height: 105px;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
  .single_feature_pattern_3 h3, .single_feature_item_5 h3, .single_feature_item_6 h3 {
    font-size: 20px;
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif;
    padding: 15px 0; }
  .single_feature_pattern_3 p, .single_feature_item_5 p, .single_feature_item_6 p {
    font-size: 14px;
    line-height: 1.5;
    font-weight: 400;
    font-family: 'Fira Sans', sans-serif; }

.feature_area_5 {
  position: relative;
  top: -180px;
  background-size: 45%;
  background-repeat: no-repeat;
  background-position: -35% 160%;
  background-size: 35%;
  background-repeat: no-repeat; }

.single_feature_item_5.red_bg, .single_feature_item_6.red_bg {
  background-image: -webkit-linear-gradient(left, #b60d21 0%, #fd6481 100%);
  background-image: -o-linear-gradient(left, #b60d21 0%, #fd6481 100%);
  background-image: linear-gradient(to right, #b60d21 0%, #fd6481 100%);
  top: 15px; }
  .single_feature_item_5.red_bg:hover, .single_feature_item_6.red_bg:hover {
    top: 10px; }

.single_feature_item_5.green_bg, .single_feature_item_6.green_bg {
  background: -webkit-linear-gradient(left, #35dc78 0%, #34dbff 100%);
  background: -o-linear-gradient(right, #35dc78 0%, #34dbff 100%);
  background: -moz-linear-gradient(to right, #35dc78 0%, #34dbff 100%);
  background: linear-gradient(to right, #35dc78 0%, #34dbff 100%);
  top: 40px; }
  .single_feature_item_5.green_bg:hover, .single_feature_item_6.green_bg:hover {
    top: 35px; }

.single_feature_item_5.blue_bg, .single_feature_item_6.blue_bg {
  background-image: -moz-linear-gradient(left, #1e62fd 0%, #68e0fd 100%);
  background-image: -webkit-linear-gradient(left, #1e62fd 0%, #68e0fd 100%);
  background-image: -ms-linear-gradient(right, #1e62fd 0%, #68e0fd 100%);
  top: -60px; }
  .single_feature_item_5.blue_bg:hover, .single_feature_item_6.blue_bg:hover {
    top: -65px; }

.feature_area_6 .wrapper {
  margin: 35px 0 60px;
  padding: 0px; }

.single_feature_item_6.blue_bg {
  top: 25px; }
  .single_feature_item_6.blue_bg:hover {
    top: 20px; }

.single_feature_item_6.red_bg {
  top: 60px; }
  .single_feature_item_6.red_bg:hover {
    top: 55px; }

.single_feature_item_6.green_bg {
  top: -35px; }
  .single_feature_item_6.green_bg:hover {
    top: -40px; }

.feature_area_7 {
  position: relative;
  z-index: 1; }

.single_feature_item_7 {
  border: 1px solid #d2e5ff; }
  .single_feature_item_7 h3 {
    background: -webkit-linear-gradient(right, #6a11cb 0%, #2575fc 100%);
    background: -o-linear-gradient(left, #6a11cb 0%, #2575fc 100%);
    background: -moz-linear-gradient(to left, #6a11cb 0%, #2575fc 100%);
    background: linear-gradient(to left, #6a11cb 0%, #2575fc 100%);
    -webkit-background-clip: text;
    -webkit-text-fill-color: transparent; }
  .single_feature_item_7 .boxed_btn {
    color: #fff; }
    .single_feature_item_7 .boxed_btn:hover {
      background: -webkit-linear-gradient(right, #6a11cb 0%, #2575fc 100%);
      background: -o-linear-gradient(left, #6a11cb 0%, #2575fc 100%);
      background: -moz-linear-gradient(to left, #6a11cb 0%, #2575fc 100%);
      background: linear-gradient(to left, #6a11cb 0%, #2575fc 100%);
      -webkit-background-clip: text;
      -webkit-text-fill-color: transparent; }
  .single_feature_item_7 .feature_icon {
    background: -webkit-linear-gradient(bottom, #6a11cb 0%, #2575fc 100%);
    background: -o-linear-gradient(top, #6a11cb 0%, #2575fc 100%);
    background: -moz-linear-gradient(to top, #6a11cb 0%, #2575fc 100%);
    background: linear-gradient(to top, #6a11cb 0%, #2575fc 100%); }

.feature_area_8 {
  position: relative;
  z-index: 1;
  top: -115px; }

.single_feature_item_8 {
  padding: 35px 25px;
  background: #fff;
  border-radius: 13px;
  position: relative;
  z-index: 1;
  -webkit-transition: all 0.3s ease-in-out;
  -moz-transition: all 0.3s ease-in-out;
  -ms-transition: all 0.3s ease-in-out;
  -o-transition: all 0.3s ease-in-out;
  transition: all 0.3s ease-in-out;
  top: 0;
  text-align: center;
  color: #191b41; }
  .single_feature_item_8:after {
    width: 100%;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out;
    height: 100%;
    border-radius: 10px;
    left: 0;
    top: 0;
    content: '';
    z-index: -1;
    position: absolute;
    opacity: 0;
    background: -webkit-linear-gradient(bottom, #010094 0%, #1f003c 100%);
    background: -o-linear-gradient(top, #010094 0%, #1f003c 100%);
    background: -moz-linear-gradient(to top, #010094 0%, #1f003c 100%);
    background: linear-gradient(to top, #010094 0%, #1f003c 100%); }
  .single_feature_item_8:hover:after {
    opacity: 1; }
  .single_feature_item_8:hover .feature_icon {
    opacity: 1;
    filter: invert(100%); }
  .single_feature_item_8:hover {
    top: -5px;
    color: #fff; }
  .single_feature_item_8 .feature_icon {
    opacity: .5;
    height: 105px;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
  .single_feature_item_8 h3 {
    font-size: 20px;
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif;
    padding: 15px 0; }
  .single_feature_item_8 p {
    font-size: 14px;
    line-height: 1.5;
    font-weight: 400;
    font-family: 'Fira Sans', sans-serif; }

.feature_area_9 {
  background: -webkit-linear-gradient(left, #010094 0%, #1f003c 100%);
  background: -o-linear-gradient(right, #010094 0%, #1f003c 100%);
  background: -moz-linear-gradient(to right, #010094 0%, #1f003c 100%);
  background: linear-gradient(to right, #010094 0%, #1f003c 100%); }

.single_feature_item_9 {
  border: 1px solid #d2e5ff;
  background: transparent; }
  .single_feature_item_9:hover {
    border: 1px solid #d2e5ff; }
  .single_feature_item_9 h3 {
    color: #fff; }
  .single_feature_item_9 p {
    color: #fff; }
  .single_feature_item_9 .boxed_btn {
    color: #fff; }
    .single_feature_item_9 .boxed_btn:hover {
      color: #3a2085; }
  .single_feature_item_9 .feature_icon {
    background: -webkit-linear-gradient(top, #010094 0%, #1f003c 100%);
    background: -o-linear-gradient(bottom, #010094 0%, #1f003c 100%);
    background: -moz-linear-gradient(to bottom, #010094 0%, #1f003c 100%);
    background: linear-gradient(to bottom, #010094 0%, #1f003c 100%); }

.feature_area_11 {
  position: relative;
  z-index: 1;
  top: -115px; }
  .feature_area_11 .col-md-6.col-lg-3 {
    padding: 0 8px; }

.single_feature_item_11.red_bg {
  background-image: -webkit-linear-gradient(left, #b60d21 0%, #fd6481 100%);
  background-image: -o-linear-gradient(left, #b60d21 0%, #fd6481 100%);
  background-image: linear-gradient(to right, #b60d21 0%, #fd6481 100%); }

.single_feature_item_11.green_bg {
  background: -webkit-linear-gradient(left, #35dc78 0%, #34dbff 100%);
  background: -o-linear-gradient(right, #35dc78 0%, #34dbff 100%);
  background: -moz-linear-gradient(to right, #35dc78 0%, #34dbff 100%);
  background: linear-gradient(to right, #35dc78 0%, #34dbff 100%); }

.single_feature_item_11.blue_bg {
  background-image: -moz-linear-gradient(left, #1e62fd 0%, #68e0fd 100%);
  background-image: -webkit-linear-gradient(left, #1e62fd 0%, #68e0fd 100%);
  background-image: -ms-linear-gradient(right, #1e62fd 0%, #68e0fd 100%); }

.single_feature_item_11 {
  padding: 35px 25px;
  background-image: -webkit-linear-gradient(right, #ffd050 0%, #e08900 100%);
  background-image: -o-linear-gradient(right, #ffd050 0%, #e08900 100%);
  background-image: linear-gradient(to left, #ffd050 0%, #e08900 100%);
  border-radius: 15px;
  position: relative;
  border: 2px solid #fff;
  z-index: 1;
  -webkit-transition: all 0.3s ease-in-out;
  -moz-transition: all 0.3s ease-in-out;
  -ms-transition: all 0.3s ease-in-out;
  -o-transition: all 0.3s ease-in-out;
  transition: all 0.3s ease-in-out;
  top: 0;
  text-align: center;
  color: #fff;
  -webkit-box-shadow: 0px 0px 28.5px 1.5px rgba(0, 0, 0, 0.25);
  -moz-box-shadow: 0px 0px 28.5px 1.5px rgba(0, 0, 0, 0.25);
  box-shadow: 0px 0px 28.5px 1.5px rgba(0, 0, 0, 0.25); }
  .single_feature_item_11:hover {
    top: -5px; }
  .single_feature_item_11 .feature_icon {
    filter: invert(100%);
    height: 105px;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
  .single_feature_item_11 h3 {
    font-size: 20px;
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif;
    padding: 15px 0; }
  .single_feature_item_11 p {
    font-size: 14px;
    line-height: 1.5;
    font-weight: 400;
    font-family: 'Fira Sans', sans-serif; }

.single_feature_item_12 {
  border: 1px solid #d2e5ff;
  background: transparent; }
  .single_feature_item_12:hover {
    border: 1px solid #d2e5ff; }
  .single_feature_item_12 h3 {
    background: -webkit-linear-gradient(left, #15efa4 0%, #0bbdff 100%);
    background: -o-linear-gradient(right, #15efa4 0%, #0bbdff 100%);
    background: -moz-linear-gradient(to right, #15efa4 0%, #0bbdff 100%);
    background: linear-gradient(to right, #15efa4 0%, #0bbdff 100%);
    -webkit-background-clip: text;
    -webkit-text-fill-color: transparent; }
  .single_feature_item_12 p {
    color: #f8fafe; }
  .single_feature_item_12 .boxed_btn {
    color: #f8fafe; }
    .single_feature_item_12 .boxed_btn:hover {
      background: -webkit-linear-gradient(left, #15efa4 0%, #0bbdff 100%);
      background: -o-linear-gradient(right, #15efa4 0%, #0bbdff 100%);
      background: -moz-linear-gradient(to right, #15efa4 0%, #0bbdff 100%);
      background: linear-gradient(to right, #15efa4 0%, #0bbdff 100%);
      -webkit-background-clip: text;
      -webkit-text-fill-color: transparent; }
  .single_feature_item_12 .feature_icon {
    background: -webkit-linear-gradient(bottom, #15efa4 0%, #0bbdff 100%);
    background: -o-linear-gradient(top, #15efa4 0%, #0bbdff 100%);
    background: -moz-linear-gradient(to top, #15efa4 0%, #0bbdff 100%);
    background: linear-gradient(to top, #15efa4 0%, #0bbdff 100%); }

@media only screen and (min-width: 992px) and (max-width: 1200px) {
  .single_feature_item_5, .single_feature_item_8, .single_feature_item_11 {
    padding: 20px 10px; } }
@media only screen and (min-width: 768px) and (max-width: 991px) {
  .single_feature_item {
    padding: 15px;
    margin-bottom: 45px; }
    .single_feature_item h3 {
      margin-bottom: 10px; }
    .single_feature_item p {
      font-size: 14px;
      line-height: 1.3; }
    .single_feature_item .feature_img {
      width: 75px;
      height: 75px; }

  .single_feature_item_3 {
    padding: 15px;
    margin-bottom: 45px; }
    .single_feature_item_3 h3 {
      margin-bottom: 10px; }
    .single_feature_item_3 p {
      font-size: 14px;
      line-height: 1.3; }
    .single_feature_item_3 .feature_img {
      width: 75px;
      height: 75px; }

  .single_feature_pattern_2, .single_feature_item_2, .single_feature_item_4, .single_feature_item_7, .single_feature_item_9, .single_feature_item_12 {
    margin-bottom: 45px; }

  .feature_area_5 .single_feature_item_5.red_bg, .feature_area_5 .single_feature_item_6.red_bg {
    top: 35px; }
    .feature_area_5 .single_feature_item_5.red_bg:hover, .feature_area_5 .single_feature_item_6.red_bg:hover {
      top: 30px; }
  .feature_area_5 .single_feature_item_5.green_bg, .feature_area_5 .single_feature_item_6.green_bg {
    top: -30px; }
    .feature_area_5 .single_feature_item_5.green_bg:hover, .feature_area_5 .single_feature_item_6.green_bg:hover {
      top: -35px; }
  .feature_area_5 .single_feature_item_5.blue_bg, .feature_area_5 .single_feature_item_6.blue_bg {
    top: 5px; }
    .feature_area_5 .single_feature_item_5.blue_bg:hover, .feature_area_5 .single_feature_item_6.blue_bg:hover {
      top: 0px; }

  .single_feature_item_5 {
    padding: 35px 25px;
    border-radius: 10px;
    top: 0; }
    .single_feature_item_5:hover {
      top: -5px; }

  .single_feature_item_8, .single_feature_item_11 {
    margin-top: 25px; } }
@media (max-width: 767px) {
  .single_feature_item {
    padding: 15px;
    margin-bottom: 35px; }
    .single_feature_item h3 {
      margin-bottom: 10px;
      font-size: 18px; }
    .single_feature_item p {
      font-size: 14px;
      line-height: 1.3; }
    .single_feature_item .feature_img {
      width: 75px;
      height: 75px; }

  .single_feature_item_3 {
    margin-bottom: 35px;
    padding: 15px; }
    .single_feature_item_3 h3 {
      margin-bottom: 10px;
      font-size: 18px; }
    .single_feature_item_3 p {
      font-size: 14px;
      line-height: 1.3; }
    .single_feature_item_3 .feature_img {
      width: 75px;
      height: 75px; }

  .single_feature_pattern_2, .single_feature_item_2, .single_feature_item_4, .single_feature_item_7, .single_feature_item_9, .single_feature_item_12 {
    margin-bottom: 35px; }

  .feature_area_5 {
    top: -120px; }
    .feature_area_5 .single_feature_item_5.red_bg, .feature_area_5 .single_feature_item_6.red_bg {
      top: 30px; }
      .feature_area_5 .single_feature_item_5.red_bg:hover, .feature_area_5 .single_feature_item_6.red_bg:hover {
        top: 25px; }
    .feature_area_5 .single_feature_item_5.green_bg, .feature_area_5 .single_feature_item_6.green_bg {
      top: -40px; }
      .feature_area_5 .single_feature_item_5.green_bg:hover, .feature_area_5 .single_feature_item_6.green_bg:hover {
        top: -45px; }
    .feature_area_5 .single_feature_item_5.blue_bg, .feature_area_5 .single_feature_item_6.blue_bg {
      top: -10px; }
      .feature_area_5 .single_feature_item_5.blue_bg:hover, .feature_area_5 .single_feature_item_6.blue_bg:hover {
        top: -15px; }

  .single_feature_item_5 {
    padding: 15px;
    top: 0; }
    .single_feature_item_5:hover {
      top: -5px; }
    .single_feature_item_5 .feature_icon {
      height: 70px; }
      .single_feature_item_5 .feature_icon img {
        width: 50px; }
    .single_feature_item_5 h3 {
      font-size: 16px;
      padding: 0;
      margin-bottom: 5px; }
    .single_feature_item_5 p {
      font-size: 12px; }

  .single_feature_item_8, .single_feature_item_11 {
    margin-top: 25px;
    padding: 15px; }
    .single_feature_item_8 .feature_icon, .single_feature_item_11 .feature_icon {
      height: 70px; }
      .single_feature_item_8 .feature_icon img, .single_feature_item_11 .feature_icon img {
        width: 50px; }
    .single_feature_item_8 h3, .single_feature_item_11 h3 {
      font-size: 16px;
      padding: 0;
      margin-bottom: 5px; }
    .single_feature_item_8 p, .single_feature_item_11 p {
      font-size: 12px; } }
.hosting_brand .container {
  position: relative; }
  .hosting_brand .container .styled_bg {
    position: absolute;
    width: 100%;
    height: 100%; }
    .hosting_brand .container .styled_bg:before {
      position: absolute;
      left: -210px;
      bottom: 80px;
      background-image: url(../img/domain/woman.png);
      width: 370px;
      height: 65%;
      background-position: bottom center;
      content: '';
      z-index: -1;
      background-size: cover;
      background-repeat: no-repeat; }
    .hosting_brand .container .styled_bg:after {
      position: absolute;
      right: 2px;
      top: 0;
      background-image: url(../img/domain/lamp.png);
      width: 230px;
      height: 24%;
      background-position: bottom center;
      content: '';
      z-index: -1;
      background-size: cover;
      background-repeat: no-repeat; }
  .hosting_brand .container .section_title h2 {
    margin-top: 90px;
    font-size: 36px;
    color: #fff;
    margin-bottom: 35px;
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif;
    line-height: 47px; }
    .hosting_brand .container .section_title h2 span {
      color: #0cbafc; }
  .hosting_brand .container .section_title p {
    margin-bottom: 35px;
    color: #f8fafe;
    font-size: 16px;
    padding: 0 50px;
    font-weight: 400;
    font-family: 'Fira Sans', sans-serif;
    line-height: 28px; }
  .hosting_brand .container .section_title .boxed_btn.boxed_blue_btn_2, .hosting_brand .container .section_title .boxed_btn.boxed_blue_btn {
    border: none;
    padding: 15px 30px; }
  .hosting_brand .container .section_title .boxed_btn.boxed_green_btn_2, .hosting_brand .container .section_title .boxed_btn.boxed_green_btn, .hosting_brand .container .section_title .hero_area .hero_content_wrapper .hero_content .boxed_btn, .hero_area .hero_content_wrapper .hero_content .hosting_brand .container .section_title .boxed_btn {
    border: none;
    padding: 15px 30px; }

.domain_form, .domain_form_2, .domain_form_3, .domain_form_4, .domain_form_5, .domain_form_6, .domain_form_7 {
  position: relative;
  background: #fff;
  text-align: center;
  padding: 55px 0;
  margin: 75px auto 0;
  z-index: 89;
  border-radius: 25px; }
  .domain_form .styled_bg_2, .domain_form_2 .styled_bg_2, .domain_form_3 .styled_bg_2, .domain_form_4 .styled_bg_2, .domain_form_5 .styled_bg_2, .domain_form_6 .styled_bg_2, .domain_form_7 .styled_bg_2 {
    background: #fff;
    width: 100%;
    height: 100%;
    border-radius: 25px;
    position: absolute;
    z-index: -1;
    padding: 55px 0;
    top: 0;
    left: 0;
    overflow: hidden; }
    .domain_form .styled_bg_2:before, .domain_form_2 .styled_bg_2:before, .domain_form_3 .styled_bg_2:before, .domain_form_4 .styled_bg_2:before, .domain_form_5 .styled_bg_2:before, .domain_form_6 .styled_bg_2:before, .domain_form_7 .styled_bg_2:before, .domain_form .styled_bg_2:after, .domain_form_2 .styled_bg_2:after, .domain_form_3 .styled_bg_2:after, .domain_form_4 .styled_bg_2:after, .domain_form_5 .styled_bg_2:after, .domain_form_6 .styled_bg_2:after, .domain_form_7 .styled_bg_2:after {
      position: absolute;
      content: '';
      width: 100%;
      height: 100%;
      border-radius: 15px;
      z-index: -1;
      background: #0cbafc;
      opacity: .20; }
    .domain_form .styled_bg_2:before, .domain_form_2 .styled_bg_2:before, .domain_form_3 .styled_bg_2:before, .domain_form_4 .styled_bg_2:before, .domain_form_5 .styled_bg_2:before, .domain_form_6 .styled_bg_2:before, .domain_form_7 .styled_bg_2:before {
      left: 8%;
      -webkit-transform: rotate(30deg);
      /* Ch <36, Saf 5.1+, iOS < 9.2, An =<4.4.4 */
      -ms-transform: rotate(30deg);
      /* IE 9 */
      transform: rotate(30deg);
      /* IE 10, Fx 16+, Op 12.1+ */
      top: -120%;
      opacity: .25; }
    .domain_form .styled_bg_2:after, .domain_form_2 .styled_bg_2:after, .domain_form_3 .styled_bg_2:after, .domain_form_4 .styled_bg_2:after, .domain_form_5 .styled_bg_2:after, .domain_form_6 .styled_bg_2:after, .domain_form_7 .styled_bg_2:after {
      border-radius: 10px;
      left: -70%;
      -webkit-transform: rotate(125deg);
      /* Ch <36, Saf 5.1+, iOS < 9.2, An =<4.4.4 */
      -ms-transform: rotate(125deg);
      /* IE 9 */
      transform: rotate(125deg);
      /* IE 10, Fx 16+, Op 12.1+ */
      top: 165%; }

.domain_form form, .domain_form_2 form, .domain_form_3 form, .domain_form_4 form, .domain_form_5 form, .domain_form_6 form, .domain_form_7 form {
  background: -webkit-linear-gradient(right, #0acffe 0%, #182dee 100%);
  /* For Safari 5.1 to 6.0 */
  background: -o-linear-gradient(left, #0acffe 0%, #182dee 100%);
  /* For Opera 11.1 to 12.0 */
  background: -moz-linear-gradient(to left, #0acffe 0%, #182dee 100%);
  /* For Firefox 3.6 to 15 */
  background: linear-gradient(to left, #0acffe 0%, #182dee 100%);
  display: inline-block;
  border-radius: 50px;
  text-align: center;
  padding: 4px;
  margin: 0 auto 45px; }
  .domain_form form .domain_in, .domain_form_2 form .domain_in, .domain_form_3 form .domain_in, .domain_form_4 form .domain_in, .domain_form_5 form .domain_in, .domain_form_6 form .domain_in, .domain_form_7 form .domain_in {
    color: #fff;
    font-weight: 400;
    font-family: 'Fira Sans', sans-serif;
    font-size: 16px;
    padding: 11px;
    float: left;
    background: none;
    border: none;
    outline: none;
    width: 392px;
    margin-right: 25px;
    border-radius: 50px;
    padding-left: 25px; }
    .domain_form form .domain_in::placeholder, .domain_form_2 form .domain_in::placeholder, .domain_form_3 form .domain_in::placeholder, .domain_form_4 form .domain_in::placeholder, .domain_form_5 form .domain_in::placeholder, .domain_form_6 form .domain_in::placeholder, .domain_form_7 form .domain_in::placeholder {
      opacity: 1;
      color: #0cbafc; }
    .domain_form form .domain_in:-ms-input-placeholder, .domain_form_2 form .domain_in:-ms-input-placeholder, .domain_form_3 form .domain_in:-ms-input-placeholder, .domain_form_4 form .domain_in:-ms-input-placeholder, .domain_form_5 form .domain_in:-ms-input-placeholder, .domain_form_6 form .domain_in:-ms-input-placeholder, .domain_form_7 form .domain_in:-ms-input-placeholder {
      opacity: 1;
      color: #0cbafc; }
    .domain_form form .domain_in::-ms-input-placeholder, .domain_form_2 form .domain_in::-ms-input-placeholder, .domain_form_3 form .domain_in::-ms-input-placeholder, .domain_form_4 form .domain_in::-ms-input-placeholder, .domain_form_5 form .domain_in::-ms-input-placeholder, .domain_form_6 form .domain_in::-ms-input-placeholder, .domain_form_7 form .domain_in::-ms-input-placeholder {
      opacity: 1;
      color: #0cbafc; }
    .domain_form form .domain_in:-moz-placeholder, .domain_form_2 form .domain_in:-moz-placeholder, .domain_form_3 form .domain_in:-moz-placeholder, .domain_form_4 form .domain_in:-moz-placeholder, .domain_form_5 form .domain_in:-moz-placeholder, .domain_form_6 form .domain_in:-moz-placeholder, .domain_form_7 form .domain_in:-moz-placeholder {
      opacity: 1;
      color: #0cbafc; }
    .domain_form form .domain_in::-moz-placeholder, .domain_form_2 form .domain_in::-moz-placeholder, .domain_form_3 form .domain_in::-moz-placeholder, .domain_form_4 form .domain_in::-moz-placeholder, .domain_form_5 form .domain_in::-moz-placeholder, .domain_form_6 form .domain_in::-moz-placeholder, .domain_form_7 form .domain_in::-moz-placeholder {
      opacity: 1;
      color: #0cbafc; }
  .domain_form form .select_wrapper, .domain_form_2 form .select_wrapper, .domain_form_3 form .select_wrapper, .domain_form_4 form .select_wrapper, .domain_form_5 form .select_wrapper, .domain_form_6 form .select_wrapper, .domain_form_7 form .select_wrapper {
    position: relative;
    z-index: 1;
    width: 90px;
    height: auto;
    background: none;
    display: inline-block;
    float: left;
    height: 42px;
    border: none; }
    .domain_form form .select_wrapper:after, .domain_form_2 form .select_wrapper:after, .domain_form_3 form .select_wrapper:after, .domain_form_4 form .select_wrapper:after, .domain_form_5 form .select_wrapper:after, .domain_form_6 form .select_wrapper:after, .domain_form_7 form .select_wrapper:after, .domain_form form .select_wrapper:before, .domain_form_2 form .select_wrapper:before, .domain_form_3 form .select_wrapper:before, .domain_form_4 form .select_wrapper:before, .domain_form_5 form .select_wrapper:before, .domain_form_6 form .select_wrapper:before, .domain_form_7 form .select_wrapper:before {
      position: absolute;
      right: 0;
      top: 0;
      width: 2px;
      height: 100%;
      content: "";
      text-align: center;
      background: #fff;
      opacity: .4; }
    .domain_form form .select_wrapper:before, .domain_form_2 form .select_wrapper:before, .domain_form_3 form .select_wrapper:before, .domain_form_4 form .select_wrapper:before, .domain_form_5 form .select_wrapper:before, .domain_form_6 form .select_wrapper:before, .domain_form_7 form .select_wrapper:before {
      left: -10px; }
    .domain_form form .select_wrapper #chose_domain, .domain_form_2 form .select_wrapper #chose_domain, .domain_form_3 form .select_wrapper #chose_domain, .domain_form_4 form .select_wrapper #chose_domain, .domain_form_5 form .select_wrapper #chose_domain, .domain_form_6 form .select_wrapper #chose_domain, .domain_form_7 form .select_wrapper #chose_domain {
      -webkit-transition: all 0.3s ease-in-out;
      -moz-transition: all 0.3s ease-in-out;
      -ms-transition: all 0.3s ease-in-out;
      -o-transition: all 0.3s ease-in-out;
      transition: all 0.3s ease-in-out;
      width: 100%;
      height: 100%;
      position: absolute;
      left: 0;
      top: 0;
      background: none;
      margin: 0;
      border: none;
      font-weight: 400;
      font-family: 'Fira Sans', sans-serif;
      text-shadow: 0 0 0 #fff;
      color: transparent;
      font-size: 18px;
      padding: 5px;
      cursor: pointer;
      line-height: 36px; }
    .domain_form form .select_wrapper .option_list, .domain_form_2 form .select_wrapper .option_list, .domain_form_3 form .select_wrapper .option_list, .domain_form_4 form .select_wrapper .option_list, .domain_form_5 form .select_wrapper .option_list, .domain_form_6 form .select_wrapper .option_list, .domain_form_7 form .select_wrapper .option_list {
      position: absolute;
      background: #fff;
      width: 150%;
      overflow: hidden;
      border-radius: 15px;
      top: 100%;
      display: none;
      visibility: hidden;
      right: 0;
      left: auto;
      -webkit-transition: all 0.3s ease-in-out;
      -moz-transition: all 0.3s ease-in-out;
      -ms-transition: all 0.3s ease-in-out;
      -o-transition: all 0.3s ease-in-out;
      transition: all 0.3s ease-in-out; }
      .domain_form form .select_wrapper .option_list.dropon, .domain_form_2 form .select_wrapper .option_list.dropon, .domain_form_3 form .select_wrapper .option_list.dropon, .domain_form_4 form .select_wrapper .option_list.dropon, .domain_form_5 form .select_wrapper .option_list.dropon, .domain_form_6 form .select_wrapper .option_list.dropon, .domain_form_7 form .select_wrapper .option_list.dropon {
        display: block !important;
        visibility: visible;
        top: 130%;
        -webkit-box-shadow: 2.347px 4.415px 20px 0px rgba(23, 6, 125, 0.3);
        -moz-box-shadow: 2.347px 4.415px 20px 0px rgba(23, 6, 125, 0.3);
        box-shadow: 2.347px 4.415px 20px 0px rgba(23, 6, 125, 0.3); }
      .domain_form form .select_wrapper .option_list li, .domain_form_2 form .select_wrapper .option_list li, .domain_form_3 form .select_wrapper .option_list li, .domain_form_4 form .select_wrapper .option_list li, .domain_form_5 form .select_wrapper .option_list li, .domain_form_6 form .select_wrapper .option_list li, .domain_form_7 form .select_wrapper .option_list li {
        -webkit-transition: all 0.3s ease-in-out;
        -moz-transition: all 0.3s ease-in-out;
        -ms-transition: all 0.3s ease-in-out;
        -o-transition: all 0.3s ease-in-out;
        transition: all 0.3s ease-in-out;
        font-weight: 400;
        font-family: 'Fira Sans', sans-serif;
        color: #0cbafc;
        background: #fff;
        font-size: 16px;
        padding: 5px 15px;
        cursor: pointer;
        margin: 0;
        text-align: left;
        line-height: 30px; }
        .domain_form form .select_wrapper .option_list li:hover, .domain_form_2 form .select_wrapper .option_list li:hover, .domain_form_3 form .select_wrapper .option_list li:hover, .domain_form_4 form .select_wrapper .option_list li:hover, .domain_form_5 form .select_wrapper .option_list li:hover, .domain_form_6 form .select_wrapper .option_list li:hover, .domain_form_7 form .select_wrapper .option_list li:hover {
          color: #fff;
          background: #0cbafc; }
    .domain_form form .select_wrapper .arrow, .domain_form_2 form .select_wrapper .arrow, .domain_form_3 form .select_wrapper .arrow, .domain_form_4 form .select_wrapper .arrow, .domain_form_5 form .select_wrapper .arrow, .domain_form_6 form .select_wrapper .arrow, .domain_form_7 form .select_wrapper .arrow {
      position: absolute;
      z-index: 19;
      left: auto;
      right: 10%;
      top: calc(50% - 8px);
      color: #fff;
      cursor: pointer;
      -webkit-transition: all 0.3s ease-in-out;
      -moz-transition: all 0.3s ease-in-out;
      -ms-transition: all 0.3s ease-in-out;
      -o-transition: all 0.3s ease-in-out;
      transition: all 0.3s ease-in-out;
      transform: scaleY(1); }
      .domain_form form .select_wrapper .arrow.reverce, .domain_form_2 form .select_wrapper .arrow.reverce, .domain_form_3 form .select_wrapper .arrow.reverce, .domain_form_4 form .select_wrapper .arrow.reverce, .domain_form_5 form .select_wrapper .arrow.reverce, .domain_form_6 form .select_wrapper .arrow.reverce, .domain_form_7 form .select_wrapper .arrow.reverce {
        transform: scaleY(-1); }

.domain_form .search_domain_btn, .domain_form_2 .search_domain_btn, .domain_form_3 .search_domain_btn, .domain_form_4 .search_domain_btn, .domain_form_5 .search_domain_btn, .domain_form_6 .search_domain_btn, .domain_form_7 .search_domain_btn {
  background: #fff;
  border: none;
  color: #304e73;
  border-radius: 50px;
  text-transform: uppercase;
  padding: 12px 42px;
  font-size: 16px;
  margin: 0;
  margin-left: 25px;
  border: 1px solid #fff;
  float: right;
  font-weight: 500;
  font-family: 'Fira Sans', sans-serif;
  -webkit-transition: all 0.3s ease-in-out;
  -moz-transition: all 0.3s ease-in-out;
  -ms-transition: all 0.3s ease-in-out;
  -o-transition: all 0.3s ease-in-out;
  transition: all 0.3s ease-in-out; }
  .domain_form .search_domain_btn i, .domain_form_2 .search_domain_btn i, .domain_form_3 .search_domain_btn i, .domain_form_4 .search_domain_btn i, .domain_form_5 .search_domain_btn i, .domain_form_6 .search_domain_btn i, .domain_form_7 .search_domain_btn i {
    color: #0cbafc;
    font-weight: 700;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
  .domain_form .search_domain_btn:hover i, .domain_form_2 .search_domain_btn:hover i, .domain_form_3 .search_domain_btn:hover i, .domain_form_4 .search_domain_btn:hover i, .domain_form_5 .search_domain_btn:hover i, .domain_form_6 .search_domain_btn:hover i, .domain_form_7 .search_domain_btn:hover i {
    color: #fff; }
  .domain_form .search_domain_btn:hover, .domain_form_2 .search_domain_btn:hover, .domain_form_3 .search_domain_btn:hover, .domain_form_4 .search_domain_btn:hover, .domain_form_5 .search_domain_btn:hover, .domain_form_6 .search_domain_btn:hover, .domain_form_7 .search_domain_btn:hover {
    color: #fff;
    cursor: pointer;
    background: rgba(0, 0, 0, 0.5);
    border: 1px solid rgba(0, 0, 0, 0); }

.domain_form .domain_list, .domain_form_2 .domain_list, .domain_form_3 .domain_list, .domain_form_4 .domain_list, .domain_form_5 .domain_list, .domain_form_6 .domain_list, .domain_form_7 .domain_list {
  display: inline-block;
  background: #fff;
  border-radius: 10px; }
  .domain_form .domain_list img, .domain_form_2 .domain_list img, .domain_form_3 .domain_list img, .domain_form_4 .domain_list img, .domain_form_5 .domain_list img, .domain_form_6 .domain_list img, .domain_form_7 .domain_list img {
    mix-blend-mode: multiply;
    margin: 0 10px;
    height: 35px;
    cursor: pointer; }

.hosting_brand_2 {
  position: relative;
  background: #00000059; }
  .hosting_brand_2 .layers {
    position: absolute;
    height: 100%;
    width: 100%;
    top: 0;
    left: 0;
    overflow: hidden; }
    .hosting_brand_2 .layers .layer-one {
      animation: hoa_move1 1.8s ease-in-out infinite alternate;
      position: absolute;
      top: 0;
      z-index: 5;
      margin-left: -50px; }
    .hosting_brand_2 .layers .layer-two {
      animation: hoa_move2 2s ease-in-out infinite alternate;
      position: absolute;
      top: 0;
      z-index: 2;
      margin-left: -50px; }
    .hosting_brand_2 .layers .layer-three {
      animation: hoa_move3 2s ease-in-out infinite alternate;
      position: absolute;
      top: 0;
      z-index: 5;
      margin-right: -20px; }
    .hosting_brand_2 .layers .layer-four {
      animation: hoa_move4 1.8s ease-in-out infinite alternate;
      position: absolute;
      top: 0;
      z-index: 2;
      margin-right: -20px; }

@-webkit-keyframes hoa_move1 {
  0% {
    transform: translate(0, 0); }
  100% {
    transform: translate(50px, 0); } }
@-webkit-keyframes hoa_move2 {
  0% {
    transform: translate(30px, 0); }
  100% {
    transform: translate(0, 0); } }
@-webkit-keyframes hoa_move3 {
  0% {
    transform: translate(0, 0); }
  100% {
    transform: translate(5%, 0); } }
@-webkit-keyframes hoa_move4 {
  0% {
    transform: translate(2%, 0); }
  100% {
    transform: translate(0, 0); } }
.domain_form_2 {
  background: none;
  box-shadow: none;
  margin: 0;
  padding: 0; }
  .domain_form_2 form {
    background: -webkit-linear-gradient(right, #1317d1 0%, #07164e 100%);
    background: -o-linear-gradient(left, #1317d1 0%, #07164e 100%);
    background: -moz-linear-gradient(to left, #1317d1 0%, #07164e 100%);
    background: linear-gradient(to left, #1317d1 0%, #07164e 100%); }
  .domain_form_2 .domain_list {
    background: #f8fafe; }

.domain_form_3 {
  background: none;
  box-shadow: none;
  margin: 0;
  padding: 0; }
  .domain_form_3 form {
    background: #fff; }
    .domain_form_3 form .domain_in {
      background: #fff;
      color: #304e73; }
      .domain_form_3 form .domain_in::placeholder {
        opacity: 1;
        color: #304e73; }
      .domain_form_3 form .domain_in:-ms-input-placeholder {
        opacity: 1;
        color: #304e73; }
      .domain_form_3 form .domain_in::-ms-input-placeholder {
        opacity: 1;
        color: #304e73; }
      .domain_form_3 form .domain_in:-moz-placeholder {
        opacity: 1;
        color: #304e73; }
      .domain_form_3 form .domain_in::-moz-placeholder {
        opacity: 1;
        color: #304e73; }
    .domain_form_3 form .select_wrapper #chose_domain {
      text-shadow: 0 0 0 #1b38ff; }
    .domain_form_3 form .select_wrapper .arrow {
      color: #1b38ff; }
    .domain_form_3 form .select_wrapper:after, .domain_form_3 form .select_wrapper:before {
      background: #304e73; }
    .domain_form_3 form .search_domain_btn {
      background: #1b38ff;
      border: 1px solid #1b38ff; }
      .domain_form_3 form .search_domain_btn i, .domain_form_3 form .search_domain_btn span {
        color: #fff; }
      .domain_form_3 form .search_domain_btn:hover {
        background: #0017b4; }
  .domain_form_3 .domain_names li {
    display: inline-block;
    color: #fff;
    font-size: 18px;
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif;
    margin: 0 18px; }
    .domain_form_3 .domain_names li:hover {
      cursor: pointer; }

.domain_form_4 {
  padding: 30px 0;
  margin-top: 165px;
  position: relative;
  z-index: 1; }
  .domain_form_4:after {
    position: absolute;
    left: 0;
    top: 0;
    width: 100%;
    height: 100%;
    content: '';
    background: -webkit-linear-gradient(bottom, #5317e6 0%, #07164e 100%);
    background: -o-linear-gradient(top, #5317e6 0%, #07164e 100%);
    background: -moz-linear-gradient(to top, #5317e6 0%, #07164e 100%);
    background: linear-gradient(to top, #5317e6 0%, #07164e 100%);
    z-index: -1;
    border-radius: 25px; }
  .domain_form_4 form {
    background: none;
    margin-bottom: 35px; }
    .domain_form_4 form .domain_in {
      border: 1px solid #fff;
      margin-right: 15px;
      background: rgba(0, 0, 0, 0.1);
      line-height: 1.5;
      padding: 8px;
      height: 50px;
      padding-left: 25px;
      width: 315px; }
      .domain_form_4 form .domain_in::placeholder {
        opacity: 1;
        color: #fff; }
      .domain_form_4 form .domain_in:-ms-input-placeholder {
        opacity: 1;
        color: #fff; }
      .domain_form_4 form .domain_in::-ms-input-placeholder {
        opacity: 1;
        color: #fff; }
      .domain_form_4 form .domain_in:-moz-placeholder {
        opacity: 1;
        color: #fff; }
      .domain_form_4 form .domain_in::-moz-placeholder {
        opacity: 1;
        color: #fff; }
    .domain_form_4 form .select_wrapper {
      width: 130px;
      height: 50px;
      border-radius: 50px;
      color: #fff;
      background: rgba(0, 0, 0, 0.1);
      border: 1px solid #fff; }
      .domain_form_4 form .select_wrapper:after, .domain_form_4 form .select_wrapper:before {
        display: none; }
      .domain_form_4 form .select_wrapper #chose_domain {
        padding-left: 25px; }
      .domain_form_4 form .select_wrapper .option_list {
        width: 100%; }
        .domain_form_4 form .select_wrapper .option_list li {
          color: #5117e2;
          background: #fff; }
          .domain_form_4 form .select_wrapper .option_list li:hover {
            color: #fff;
            background: #5117e2; }
      .domain_form_4 form .select_wrapper .arrow {
        right: 20%; }
  .domain_form_4 .search_domain_btn {
    margin-left: 15px;
    padding: 12px 32px;
    height: 50px; }
  .domain_form_4 .domain_list {
    border-radius: 10px;
    padding: 10px 10px 5px;
    background: white; }
    .domain_form_4 .domain_list img {
      margin: 0 15px; }

.domain_form_5, .domain_form_6, .domain_form_7 {
  background: none;
  box-shadow: none;
  margin: 0;
  padding: 0; }
  .domain_form_5 form, .domain_form_6 form, .domain_form_7 form {
    background: none;
    margin-bottom: 35px; }
    .domain_form_5 form .domain_in, .domain_form_6 form .domain_in, .domain_form_7 form .domain_in {
      border: none;
      background: #fff;
      color: #000;
      border: none;
      border-radius: 10px 0 0 10px;
      margin: 0;
      height: 72px;
      padding: 8px;
      padding-left: 25px;
      width: 445px; }
      .domain_form_5 form .domain_in::placeholder, .domain_form_6 form .domain_in::placeholder, .domain_form_7 form .domain_in::placeholder {
        opacity: 1;
        color: #000; }
      .domain_form_5 form .domain_in:-ms-input-placeholder, .domain_form_6 form .domain_in:-ms-input-placeholder, .domain_form_7 form .domain_in:-ms-input-placeholder {
        opacity: 1;
        color: #000; }
      .domain_form_5 form .domain_in::-ms-input-placeholder, .domain_form_6 form .domain_in::-ms-input-placeholder, .domain_form_7 form .domain_in::-ms-input-placeholder {
        opacity: 1;
        color: #000; }
      .domain_form_5 form .domain_in:-moz-placeholder, .domain_form_6 form .domain_in:-moz-placeholder, .domain_form_7 form .domain_in:-moz-placeholder {
        opacity: 1;
        color: #000; }
      .domain_form_5 form .domain_in::-moz-placeholder, .domain_form_6 form .domain_in::-moz-placeholder, .domain_form_7 form .domain_in::-moz-placeholder {
        opacity: 1;
        color: #000; }
    .domain_form_5 form .select_wrapper, .domain_form_6 form .select_wrapper, .domain_form_7 form .select_wrapper {
      width: 95px;
      height: 72px;
      border-radius: 0 10px 10px 0;
      color: #fff;
      background: -webkit-linear-gradient(bottom, #6a11cb 0%, #2575fc 100%);
      background: -o-linear-gradient(top, #6a11cb 0%, #2575fc 100%);
      background: -moz-linear-gradient(to top, #6a11cb 0%, #2575fc 100%);
      background: linear-gradient(to top, #6a11cb 0%, #2575fc 100%);
      border: none; }
      .domain_form_5 form .select_wrapper:before, .domain_form_6 form .select_wrapper:before, .domain_form_7 form .select_wrapper:before {
        display: none; }
      .domain_form_5 form .select_wrapper:after, .domain_form_6 form .select_wrapper:after, .domain_form_7 form .select_wrapper:after {
        left: 0;
        bottom: 0;
        top: auto;
        width: 100%;
        border-radius: 0 0 10px 0px;
        height: 22px;
        background: rgba(0, 0, 0, 0.7); }
      .domain_form_5 form .select_wrapper #chose_domain, .domain_form_6 form .select_wrapper #chose_domain, .domain_form_7 form .select_wrapper #chose_domain {
        padding: 0;
        text-align: center;
        height: 50px;
        font-size: 20px; }
      .domain_form_5 form .select_wrapper .option_list, .domain_form_6 form .select_wrapper .option_list, .domain_form_7 form .select_wrapper .option_list {
        width: 120%; }
      .domain_form_5 form .select_wrapper .option_list li, .domain_form_6 form .select_wrapper .option_list li, .domain_form_7 form .select_wrapper .option_list li {
        color: #6a11cb; }
        .domain_form_5 form .select_wrapper .option_list li:hover, .domain_form_6 form .select_wrapper .option_list li:hover, .domain_form_7 form .select_wrapper .option_list li:hover {
          background: #6a11cb;
          color: #fff; }
      .domain_form_5 form .select_wrapper .arrow, .domain_form_6 form .select_wrapper .arrow, .domain_form_7 form .select_wrapper .arrow {
        right: 0;
        left: 0;
        top: 70%; }
  .domain_form_5 .search_domain_btn, .domain_form_6 .search_domain_btn, .domain_form_7 .search_domain_btn {
    margin-left: 20px;
    padding: 25px 30px;
    height: 72px;
    color: #fff;
    border: 0;
    background: -webkit-linear-gradient(bottom, #6a11cb 0%, #2575fc 100%);
    background: -o-linear-gradient(top, #6a11cb 0%, #2575fc 100%);
    background: -moz-linear-gradient(to top, #6a11cb 0%, #2575fc 100%);
    background: linear-gradient(to top, #6a11cb 0%, #2575fc 100%);
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out;
    border-radius: 10px; }
    .domain_form_5 .search_domain_btn i, .domain_form_6 .search_domain_btn i, .domain_form_7 .search_domain_btn i {
      color: #fff; }
    .domain_form_5 .search_domain_btn:hover i, .domain_form_6 .search_domain_btn:hover i, .domain_form_7 .search_domain_btn:hover i {
      color: #6a11cb; }
    .domain_form_5 .search_domain_btn:hover, .domain_form_6 .search_domain_btn:hover, .domain_form_7 .search_domain_btn:hover {
      border: 0;
      color: #304e73; }
    .domain_form_5 .search_domain_btn:after, .domain_form_6 .search_domain_btn:after, .domain_form_7 .search_domain_btn:after {
      background: #fff;
      border-radius: 10px; }

.domain_form_6 form {
  margin-bottom: 0px; }
  .domain_form_6 form .select_wrapper {
    background: #3a2085; }
    .domain_form_6 form .select_wrapper .option_list li {
      color: #6a11cb; }
      .domain_form_6 form .select_wrapper .option_list li:hover {
        background: #6a11cb;
        color: #fff; }
    .domain_form_6 form .select_wrapper .arrow {
      right: 0;
      left: 0;
      top: 70%; }
.domain_form_6 .search_domain_btn {
  background: #3a2085; }
  .domain_form_6 .search_domain_btn:hover {
    border: 0;
    background: #fff;
    color: #304e73; }

.domain_form_7 form {
  margin-bottom: 0px; }
  .domain_form_7 form .select_wrapper {
    background: #3a2085; }
    .domain_form_7 form .select_wrapper .option_list li {
      color: #6a11cb;
      line-height: 1; }
      .domain_form_7 form .select_wrapper .option_list li:hover {
        background: #6a11cb;
        color: #fff; }
    .domain_form_7 form .select_wrapper .arrow {
      right: 0;
      left: 0;
      top: 70%; }
.domain_form_7 .search_domain_btn {
  background: #3a2085; }
  .domain_form_7 .search_domain_btn:hover {
    border: 0;
    background: #fff;
    color: #304e73; }

.domain_form_8 {
  position: relative;
  z-index: 89;
  background: none;
  box-shadow: none;
  margin: 0 auto;
  padding: 0; }
  .domain_form_8 form {
    margin: 0 auto; }
    .domain_form_8 form .input-group {
      width: auto;
      border-radius: 10px;
      -webkit-box-shadow: 0px 0px 28.5px 1.5px rgba(0, 0, 0, 0.2);
      -moz-box-shadow: 0px 0px 28.5px 1.5px rgba(0, 0, 0, 0.2);
      box-shadow: 0px 0px 28.5px 1.5px rgba(0, 0, 0, 0.2); }
      .domain_form_8 form .input-group span {
        border: none;
        border-radius: 10px 0 0 10px; }
    .domain_form_8 form .domain_in {
      font-size: 16px;
      font-weight: 400;
      font-family: 'Fira Sans', sans-serif;
      background: #fff;
      color: #000;
      border: none;
      float: left;
      outline: none;
      border-radius: 10px 0 0 10px;
      margin: 0;
      height: 60px;
      padding: 8px;
      padding-left: 12px;
      width: 355px; }
      .domain_form_8 form .domain_in::placeholder {
        opacity: 0.7;
        color: #000; }
      .domain_form_8 form .domain_in:-ms-input-placeholder {
        opacity: 0.7;
        color: #000; }
      .domain_form_8 form .domain_in::-ms-input-placeholder {
        opacity: 0.7;
        color: #000; }
      .domain_form_8 form .domain_in:-moz-placeholder {
        opacity: 0.7;
        color: #000; }
      .domain_form_8 form .domain_in::-moz-placeholder {
        opacity: 0.7;
        color: #000; }
    .domain_form_8 form .select_wrapper {
      position: relative;
      z-index: 1;
      display: inline-block;
      float: left;
      width: 95px;
      height: 60px;
      border-radius: 0 10px 10px 0;
      color: #fff;
      background: #191b41;
      border: none; }
      .domain_form_8 form .select_wrapper #chose_domain {
        -webkit-transition: all 0.3s ease-in-out;
        -moz-transition: all 0.3s ease-in-out;
        -ms-transition: all 0.3s ease-in-out;
        -o-transition: all 0.3s ease-in-out;
        transition: all 0.3s ease-in-out;
        width: 100%;
        height: 100%;
        position: absolute;
        left: 0;
        top: 0;
        background: none;
        margin: 0;
        border: none;
        font-weight: 400;
        font-family: 'Fira Sans', sans-serif;
        text-shadow: 0 0 0 #fff;
        color: transparent;
        padding: 10px;
        cursor: pointer;
        line-height: 36px;
        font-size: 20px; }
      .domain_form_8 form .select_wrapper .option_list {
        position: absolute;
        background: #fff;
        width: 120%;
        overflow: hidden;
        border-radius: 15px;
        top: 100%;
        display: none;
        visibility: hidden;
        right: 0;
        left: auto;
        -webkit-transition: all 0.3s ease-in-out;
        -moz-transition: all 0.3s ease-in-out;
        -ms-transition: all 0.3s ease-in-out;
        -o-transition: all 0.3s ease-in-out;
        transition: all 0.3s ease-in-out; }
        .domain_form_8 form .select_wrapper .option_list.dropon {
          display: block !important;
          visibility: visible;
          top: 130%;
          -webkit-box-shadow: 2.347px 4.415px 20px 0px rgba(23, 6, 125, 0.3);
          -moz-box-shadow: 2.347px 4.415px 20px 0px rgba(23, 6, 125, 0.3);
          box-shadow: 2.347px 4.415px 20px 0px rgba(23, 6, 125, 0.3); }
        .domain_form_8 form .select_wrapper .option_list li {
          -webkit-transition: all 0.3s ease-in-out;
          -moz-transition: all 0.3s ease-in-out;
          -ms-transition: all 0.3s ease-in-out;
          -o-transition: all 0.3s ease-in-out;
          transition: all 0.3s ease-in-out;
          font-weight: 400;
          font-family: 'Fira Sans', sans-serif;
          color: #191b41;
          background: #fff;
          font-size: 16px;
          padding: 5px 15px;
          cursor: pointer;
          margin: 0;
          text-align: left;
          line-height: 30px; }
          .domain_form_8 form .select_wrapper .option_list li:hover {
            background: #191b41;
            color: #fff; }
      .domain_form_8 form .select_wrapper .arrow {
        position: absolute;
        z-index: 19;
        left: auto;
        right: 15px;
        top: calc(50% - 8px);
        color: #fff;
        cursor: pointer;
        -webkit-transition: all 0.3s ease-in-out;
        -moz-transition: all 0.3s ease-in-out;
        -ms-transition: all 0.3s ease-in-out;
        -o-transition: all 0.3s ease-in-out;
        transition: all 0.3s ease-in-out;
        transform: scaleY(1); }
        .domain_form_8 form .select_wrapper .arrow.reverce {
          transform: scaleY(-1); }
    .domain_form_8 form .search_domain_btn {
      margin-left: 20px;
      padding: 20px 30px;
      height: 60px;
      -webkit-box-shadow: 0px 0px 28.5px 1.5px rgba(0, 0, 0, 0.2);
      -moz-box-shadow: 0px 0px 28.5px 1.5px rgba(0, 0, 0, 0.2);
      box-shadow: 0px 0px 28.5px 1.5px rgba(0, 0, 0, 0.2);
      color: #191b41;
      background: #fff;
      -webkit-transition: all 0.5s ease-in-out;
      -moz-transition: all 0.5s ease-in-out;
      -ms-transition: all 0.5s ease-in-out;
      -o-transition: all 0.5s ease-in-out;
      transition: all 0.5s ease-in-out;
      border-radius: 10px;
      border: 0; }
      .domain_form_8 form .search_domain_btn i {
        color: #191b41; }
      .domain_form_8 form .search_domain_btn:hover i {
        color: #fff; }
      .domain_form_8 form .search_domain_btn:hover {
        background: #191b41;
        color: #fff; }

@media only screen and (min-width: 992px) and (max-width: 1200px) {
  .hosting_brand .container .styled_bg:before {
    left: -150px;
    width: 350px;
    height: 73%; }
  .hosting_brand .container .styled_bg:after {
    right: 5px;
    width: 180px;
    height: 25%; }
  .hosting_brand .container .section_title h2 {
    margin-top: 50px;
    font-size: 30px;
    margin-bottom: 25px; }
  .hosting_brand .container .section_title p {
    margin-bottom: 25px;
    font-size: 14px;
    padding: 0 30px; }

  .domain_form form, .domain_form_2 form, .domain_form_3 form, .domain_form_4 form, .domain_form_5 form, .domain_form_6 form, .domain_form_7 form {
    margin-bottom: 30px; }
  .domain_form .styled_bg_2:before, .domain_form_2 .styled_bg_2:before, .domain_form_3 .styled_bg_2:before, .domain_form_4 .styled_bg_2:before, .domain_form_5 .styled_bg_2:before, .domain_form_6 .styled_bg_2:before, .domain_form_7 .styled_bg_2:before {
    left: 10%;
    top: -117%; }
  .domain_form .styled_bg_2:after, .domain_form_2 .styled_bg_2:after, .domain_form_3 .styled_bg_2:after, .domain_form_4 .styled_bg_2:after, .domain_form_5 .styled_bg_2:after, .domain_form_6 .styled_bg_2:after, .domain_form_7 .styled_bg_2:after {
    left: -72%;
    top: 170%; }
  .domain_form .domain_list img, .domain_form_2 .domain_list img, .domain_form_3 .domain_list img, .domain_form_4 .domain_list img, .domain_form_5 .domain_list img, .domain_form_6 .domain_list img, .domain_form_7 .domain_list img {
    margin: 0 10px; } }
@media only screen and (min-width: 768px) and (max-width: 991px) {
  .hosting_brand .container .styled_bg:before {
    left: -125px;
    height: 60%;
    width: 280px; }
  .hosting_brand .container .styled_bg:after {
    right: 2px;
    width: 100px;
    height: 17%; }
  .hosting_brand .container .section_title h2 {
    margin-top: 60px;
    font-size: 27px;
    margin-bottom: 10px; }
  .hosting_brand .container .section_title p {
    margin-bottom: 25px;
    font-size: 14px;
    padding: 0 25px;
    line-height: 20px; }
  .hosting_brand .container .section_title .boxed_btn {
    display: inline-block; }

  .domain_form, .domain_form_2, .domain_form_3, .domain_form_4, .domain_form_5, .domain_form_6, .domain_form_7 {
    margin-top: 25px; }
    .domain_form .styled_bg_2:before, .domain_form_2 .styled_bg_2:before, .domain_form_3 .styled_bg_2:before, .domain_form_4 .styled_bg_2:before, .domain_form_5 .styled_bg_2:before, .domain_form_6 .styled_bg_2:before, .domain_form_7 .styled_bg_2:before {
      left: 12%;
      top: -95%; }
    .domain_form .styled_bg_2:after, .domain_form_2 .styled_bg_2:after, .domain_form_3 .styled_bg_2:after, .domain_form_4 .styled_bg_2:after, .domain_form_5 .styled_bg_2:after, .domain_form_6 .styled_bg_2:after, .domain_form_7 .styled_bg_2:after {
      left: -70%;
      top: 135%; }

  .domain_form form, .domain_form_2 form, .domain_form_3 form, .domain_form_4 form, .domain_form_5 form, .domain_form_6 form, .domain_form_7 form {
    margin-bottom: 30px; }
    .domain_form form .domain_in, .domain_form_2 form .domain_in, .domain_form_3 form .domain_in, .domain_form_4 form .domain_in, .domain_form_5 form .domain_in, .domain_form_6 form .domain_in, .domain_form_7 form .domain_in {
      width: 220px;
      padding: 8px;
      padding-left: 15px; }
    .domain_form form .select_wrapper, .domain_form_2 form .select_wrapper, .domain_form_3 form .select_wrapper, .domain_form_4 form .select_wrapper, .domain_form_5 form .select_wrapper, .domain_form_6 form .select_wrapper, .domain_form_7 form .select_wrapper {
      height: 36px;
      width: 80px; }
      .domain_form form .select_wrapper:before, .domain_form_2 form .select_wrapper:before, .domain_form_3 form .select_wrapper:before, .domain_form_4 form .select_wrapper:before, .domain_form_5 form .select_wrapper:before, .domain_form_6 form .select_wrapper:before, .domain_form_7 form .select_wrapper:before {
        left: -10px; }
      .domain_form form .select_wrapper #chose_domain, .domain_form_2 form .select_wrapper #chose_domain, .domain_form_3 form .select_wrapper #chose_domain, .domain_form_4 form .select_wrapper #chose_domain, .domain_form_5 form .select_wrapper #chose_domain, .domain_form_6 form .select_wrapper #chose_domain, .domain_form_7 form .select_wrapper #chose_domain {
        font-size: 16px;
        padding: 5px;
        line-height: 28px; }
      .domain_form form .select_wrapper .option_list li, .domain_form_2 form .select_wrapper .option_list li, .domain_form_3 form .select_wrapper .option_list li, .domain_form_4 form .select_wrapper .option_list li, .domain_form_5 form .select_wrapper .option_list li, .domain_form_6 form .select_wrapper .option_list li, .domain_form_7 form .select_wrapper .option_list li {
        font-size: 14px;
        line-height: 25px; }
      .domain_form form .select_wrapper .arrow, .domain_form_2 form .select_wrapper .arrow, .domain_form_3 form .select_wrapper .arrow, .domain_form_4 form .select_wrapper .arrow, .domain_form_5 form .select_wrapper .arrow, .domain_form_6 form .select_wrapper .arrow, .domain_form_7 form .select_wrapper .arrow {
        right: 10%; }

  .domain_form_5 form .select_wrapper
  .arrow, .domain_form_6 form .select_wrapper
  .arrow, .domain_form_7 form .select_wrapper
  .arrow {
    right: 0%; }

  .domain_form .search_domain_btn, .domain_form_2 .search_domain_btn, .domain_form_3 .search_domain_btn, .domain_form_4 .search_domain_btn, .domain_form_5 .search_domain_btn, .domain_form_6 .search_domain_btn, .domain_form_7 .search_domain_btn {
    padding: 10px 30px;
    font-size: 14px;
    margin-left: 8px; }

  .domain_form .domain_list img, .domain_form_2 .domain_list img, .domain_form_3 .domain_list img, .domain_form_4 .domain_list img, .domain_form_5 .domain_list img, .domain_form_6 .domain_list img, .domain_form_7 .domain_list img {
    margin: 0 5px; }
    .domain_form .domain_list img:last-child, .domain_form_2 .domain_list img:last-child, .domain_form_3 .domain_list img:last-child, .domain_form_4 .domain_list img:last-child, .domain_form_5 .domain_list img:last-child, .domain_form_6 .domain_list img:last-child, .domain_form_7 .domain_list img:last-child, .domain_form .domain_list img:nth-last-child(2), .domain_form_2 .domain_list img:nth-last-child(2), .domain_form_3 .domain_list img:nth-last-child(2), .domain_form_4 .domain_list img:nth-last-child(2), .domain_form_5 .domain_list img:nth-last-child(2), .domain_form_6 .domain_list img:nth-last-child(2), .domain_form_7 .domain_list img:nth-last-child(2) {
      display: none;
      visibility: hidden; }

  .domain_form_2, .domain_form_3 {
    margin-top: 0px; }

  .domain_form_3 .domain_names li {
    margin: 0 6px; }

  .domain_form_4 {
    padding: 25px 0;
    margin-top: 55px; }
    .domain_form_4 form {
      margin-bottom: 20px; }
      .domain_form_4 form .domain_in {
        height: 40px; }
      .domain_form_4 form .select_wrapper {
        height: 40px; }
        .domain_form_4 form .select_wrapper .option_list li {
          padding: 0px 15px; }
    .domain_form_4 .search_domain_btn {
      height: 40px; }
    .domain_form_4 .domain_list {
      padding: 8px 5px 0px; }

  .domain_form_5 form .domain_in, .domain_form_6 form .domain_in, .domain_form_7 form .domain_in {
    height: 60px; }
  .domain_form_5 form .select_wrapper, .domain_form_6 form .select_wrapper, .domain_form_7 form .select_wrapper {
    height: 60px; }
    .domain_form_5 form .select_wrapper .option_list li, .domain_form_6 form .select_wrapper .option_list li, .domain_form_7 form .select_wrapper .option_list li {
      padding: 0 15px; }
  .domain_form_5 form .search_domain_btn, .domain_form_6 form .search_domain_btn, .domain_form_7 form .search_domain_btn {
    height: 60px;
    padding: 10px 20px; }

  .domain_form_8 form .domain_in {
    height: 60px;
    width: 220px; }
  .domain_form_8 form .select_wrapper {
    height: 60px; }
    .domain_form_8 form .select_wrapper .option_list li {
      padding: 0 15px; }
  .domain_form_8 form .search_domain_btn {
    height: 60px;
    padding: 10px 20px; } }
@media (max-width: 767px) {
  .hosting_brand .container .styled_bg {
    display: none;
    visibility: hidden; }
    .hosting_brand .container .styled_bg:before {
      left: -140px;
      height: 65%; }
    .hosting_brand .container .styled_bg:after {
      right: 2px;
      width: 100px;
      height: 17%; }
  .hosting_brand .container .section_title h2 {
    margin-top: 45px;
    margin-bottom: 10px;
    font-size: 24px;
    line-height: 30px; }
  .hosting_brand .container .section_title p {
    margin-bottom: 25px;
    font-size: 14px;
    padding: 0; }
  .hosting_brand .container .section_title .boxed_btn.boxed_blue_btn_2, .hosting_brand .container .section_title .boxed_btn.boxed_blue_btn {
    display: inline-block;
    padding: 10px 20px; }
  .hosting_brand .container .section_title .boxed_btn.boxed_green_btn_2, .hosting_brand .container .section_title .boxed_btn.boxed_green_btn, .hosting_brand .container .section_title .hero_area .hero_content_wrapper .hero_content .boxed_btn, .hero_area .hero_content_wrapper .hero_content .hosting_brand .container .section_title .boxed_btn {
    display: inline-block;
    padding: 10px 20px; }

  .domain_form, .domain_form_2, .domain_form_3, .domain_form_4, .domain_form_5, .domain_form_6, .domain_form_7 {
    padding: 30px 0;
    margin-top: 45px; }
    .domain_form .styled_bg_2:before, .domain_form_2 .styled_bg_2:before, .domain_form_3 .styled_bg_2:before, .domain_form_4 .styled_bg_2:before, .domain_form_5 .styled_bg_2:before, .domain_form_6 .styled_bg_2:before, .domain_form_7 .styled_bg_2:before {
      left: 12%;
      top: -95%; }
    .domain_form .styled_bg_2:after, .domain_form_2 .styled_bg_2:after, .domain_form_3 .styled_bg_2:after, .domain_form_4 .styled_bg_2:after, .domain_form_5 .styled_bg_2:after, .domain_form_6 .styled_bg_2:after, .domain_form_7 .styled_bg_2:after {
      left: -80%;
      top: 122%; }

  .domain_form form, .domain_form_2 form, .domain_form_3 form, .domain_form_4 form, .domain_form_5 form, .domain_form_6 form, .domain_form_7 form {
    margin: 0 auto;
    margin-bottom: 30px;
    border-radius: 50px;
    width: 90%; }
    .domain_form form .domain_in, .domain_form_2 form .domain_in, .domain_form_3 form .domain_in, .domain_form_4 form .domain_in, .domain_form_5 form .domain_in, .domain_form_6 form .domain_in, .domain_form_7 form .domain_in {
      width: 55%;
      padding: 8px;
      padding-left: 7px;
      font-size: 13px;
      float: left;
      margin-right: 0; }
    .domain_form form .select_wrapper, .domain_form_2 form .select_wrapper, .domain_form_3 form .select_wrapper, .domain_form_4 form .select_wrapper, .domain_form_5 form .select_wrapper, .domain_form_6 form .select_wrapper, .domain_form_7 form .select_wrapper {
      height: 33px;
      width: 65px; }
      .domain_form form .select_wrapper:before, .domain_form_2 form .select_wrapper:before, .domain_form_3 form .select_wrapper:before, .domain_form_4 form .select_wrapper:before, .domain_form_5 form .select_wrapper:before, .domain_form_6 form .select_wrapper:before, .domain_form_7 form .select_wrapper:before {
        left: -5px; }
      .domain_form form .select_wrapper #chose_domain, .domain_form_2 form .select_wrapper #chose_domain, .domain_form_3 form .select_wrapper #chose_domain, .domain_form_4 form .select_wrapper #chose_domain, .domain_form_5 form .select_wrapper #chose_domain, .domain_form_6 form .select_wrapper #chose_domain, .domain_form_7 form .select_wrapper #chose_domain {
        font-size: 14px;
        padding: 5px;
        line-height: 20px; }
      .domain_form form .select_wrapper .option_list li, .domain_form_2 form .select_wrapper .option_list li, .domain_form_3 form .select_wrapper .option_list li, .domain_form_4 form .select_wrapper .option_list li, .domain_form_5 form .select_wrapper .option_list li, .domain_form_6 form .select_wrapper .option_list li, .domain_form_7 form .select_wrapper .option_list li {
        font-size: 14px;
        line-height: 14px; }
      .domain_form form .select_wrapper .arrow, .domain_form_2 form .select_wrapper .arrow, .domain_form_3 form .select_wrapper .arrow, .domain_form_4 form .select_wrapper .arrow, .domain_form_5 form .select_wrapper .arrow, .domain_form_6 form .select_wrapper .arrow, .domain_form_7 form .select_wrapper .arrow {
        right: 12%; }

  .domain_form .search_domain_btn, .domain_form_2 .search_domain_btn, .domain_form_3 .search_domain_btn, .domain_form_4 .search_domain_btn, .domain_form_5 .search_domain_btn, .domain_form_6 .search_domain_btn, .domain_form_7 .search_domain_btn {
    width: 15%;
    font-size: 14px;
    margin-top: 0px;
    margin-left: 5px;
    float: left;
    padding: 8px 5px; }

  .domain_form .domain_list img, .domain_form_2 .domain_list img, .domain_form_3 .domain_list img, .domain_form_4 .domain_list img, .domain_form_5 .domain_list img, .domain_form_6 .domain_list img, .domain_form_7 .domain_list img {
    height: 24px;
    margin: 0 5px; }
    .domain_form .domain_list img:last-child, .domain_form_2 .domain_list img:last-child, .domain_form_3 .domain_list img:last-child, .domain_form_4 .domain_list img:last-child, .domain_form_5 .domain_list img:last-child, .domain_form_6 .domain_list img:last-child, .domain_form_7 .domain_list img:last-child, .domain_form .domain_list img:nth-last-child(2), .domain_form_2 .domain_list img:nth-last-child(2), .domain_form_3 .domain_list img:nth-last-child(2), .domain_form_4 .domain_list img:nth-last-child(2), .domain_form_5 .domain_list img:nth-last-child(2), .domain_form_6 .domain_list img:nth-last-child(2), .domain_form_7 .domain_list img:nth-last-child(2) {
      display: none;
      visibility: hidden; }

  .domain_form_2, .domain_form_3 {
    margin-top: 0px;
    padding: 0px; }

  .domain_form_3 .domain_names li {
    margin: 0 4px; }

  .domain_form_4 {
    padding: 20px 0;
    margin-top: 45px; }
    .domain_form_4 form {
      margin-bottom: 20px; }
      .domain_form_4 form .domain_in {
        height: 40px; }
      .domain_form_4 form .select_wrapper {
        height: 40px;
        width: 22%;
        margin-left: 3%; }
        .domain_form_4 form .select_wrapper .option_list li {
          padding: 3px 8px; }
    .domain_form_4 .search_domain_btn {
      height: 40px;
      width: 18%;
      margin-left: 2%; }
    .domain_form_4 .domain_list {
      padding: 8px 5px 0px; }

  .domain_form_5 form .domain_in, .domain_form_6 form .domain_in, .domain_form_7 form .domain_in {
    height: 45px; }
  .domain_form_5 form .select_wrapper, .domain_form_6 form .select_wrapper, .domain_form_7 form .select_wrapper {
    height: 45px; }
    .domain_form_5 form .select_wrapper #chose_domain, .domain_form_6 form .select_wrapper #chose_domain, .domain_form_7 form .select_wrapper #chose_domain {
      height: 30px; }
    .domain_form_5 form .select_wrapper .arrow, .domain_form_6 form .select_wrapper .arrow, .domain_form_7 form .select_wrapper .arrow {
      right: 0;
      top: 67%; }
    .domain_form_5 form .select_wrapper:after, .domain_form_6 form .select_wrapper:after, .domain_form_7 form .select_wrapper:after {
      height: 16px; }
  .domain_form_5 form .search_domain_btn, .domain_form_6 form .search_domain_btn, .domain_form_7 form .search_domain_btn {
    height: 45px;
    padding: 10px 20px; }

  .domain_form_8 {
    width: 90%; }
    .domain_form_8 form .domain_in {
      height: 45px;
      width: 55%; }
    .domain_form_8 form .select_wrapper {
      height: 45px; }
      .domain_form_8 form .select_wrapper #chose_domain {
        font-size: 14px;
        padding: 8px;
        line-height: 20px; }
      .domain_form_8 form .select_wrapper .option_list li {
        font-size: 14px;
        line-height: 1; }
      .domain_form_8 form .select_wrapper .arrow {
        right: 15px; }
    .domain_form_8 form .search_domain_btn {
      height: 45px;
      padding: 10px 20px; } }
@media only screen and (min-width: 480px) and (max-width: 767px) {
  .domain_form form .domain_in, .domain_form_2 form .domain_in, .domain_form_3 form .domain_in, .domain_form_4 form .domain_in, .domain_form_5 form .domain_in, .domain_form_6 form .domain_in, .domain_form_7 form .domain_in {
    padding-left: 15px; }
  .domain_form form .select_wrapper, .domain_form_2 form .select_wrapper, .domain_form_3 form .select_wrapper, .domain_form_4 form .select_wrapper, .domain_form_5 form .select_wrapper, .domain_form_6 form .select_wrapper, .domain_form_7 form .select_wrapper {
    width: 80px; }
  .domain_form form .search_domain_btn, .domain_form_2 form .search_domain_btn, .domain_form_3 form .search_domain_btn, .domain_form_4 form .search_domain_btn, .domain_form_5 form .search_domain_btn, .domain_form_6 form .search_domain_btn, .domain_form_7 form .search_domain_btn {
    margin-left: 10px; }
  .domain_form form .domain_list img:last-child, .domain_form_2 form .domain_list img:last-child, .domain_form_3 form .domain_list img:last-child, .domain_form_4 form .domain_list img:last-child, .domain_form_5 form .domain_list img:last-child, .domain_form_6 form .domain_list img:last-child, .domain_form_7 form .domain_list img:last-child,
  .domain_form form .domain_list img:nth-last-child(2),
  .domain_form_2 form .domain_list img:nth-last-child(2),
  .domain_form_3 form .domain_list img:nth-last-child(2),
  .domain_form_4 form .domain_list img:nth-last-child(2),
  .domain_form_5 form .domain_list img:nth-last-child(2),
  .domain_form_6 form .domain_list img:nth-last-child(2),
  .domain_form_7 form .domain_list img:nth-last-child(2) {
    visibility: visible;
    display: inline-block; } }
.blog_area {
  background: -webkit-linear-gradient(left, #13128c 0%, #480884 100%);
  background: -o-linear-gradient(right, #13128c 0%, #480884 100%);
  background: -moz-linear-gradient(to right, #13128c 0%, #480884 100%);
  background: linear-gradient(to right, #13128c 0%, #480884 100%); }

.single_blog_item {
  background: #fff;
  margin-bottom: 50px;
  position: relative;
  top: 0;
  -webkit-transition: all 0.3s ease-in-out;
  -moz-transition: all 0.3s ease-in-out;
  -ms-transition: all 0.3s ease-in-out;
  -o-transition: all 0.3s ease-in-out;
  transition: all 0.3s ease-in-out; }
  .single_blog_item .blog_img {
    height: 190px;
    background-size: cover;
    background-position: center;
    background-repeat: no-repeat; }
  .single_blog_item .blog_bg_1 {
    background-image: url("../img/blog/1.png"); }
  .single_blog_item .blog_bg_2 {
    background-image: url("../img/blog/2.png"); }
  .single_blog_item .blog_bg_3 {
    background-image: url("../img/blog/3.png"); }
  .single_blog_item .blog_content {
    padding: 25px; }
    .single_blog_item .blog_content h2 {
      color: #304e73;
      font-size: 18px;
      margin-bottom: 15px;
      font-weight: 700;
      font-family: 'Fira Sans', sans-serif; }
    .single_blog_item .blog_content p {
      font-size: 16px;
      color: #838bab;
      margin-bottom: 20px;
      line-height: 25px;
      font-weight: 400;
      font-family: 'Fira Sans', sans-serif; }
    .single_blog_item .blog_content .boxed_btn {
      display: inline-block;
      background: none;
      color: #0cbafc;
      font-size: 18px;
      font-weight: 500;
      font-family: 'Fira Sans', sans-serif; }
      .single_blog_item .blog_content .boxed_btn i {
        font-size: 13px;
        margin-left: 2px;
        -webkit-transition: all 0.3s ease-in-out;
        -moz-transition: all 0.3s ease-in-out;
        -ms-transition: all 0.3s ease-in-out;
        -o-transition: all 0.3s ease-in-out;
        transition: all 0.3s ease-in-out; }
      .single_blog_item .blog_content .boxed_btn:hover i {
        margin-left: 5px; }
  .single_blog_item:hover {
    top: -10px; }

@media only screen and (min-width: 768px) and (max-width: 991px) {
  .blog_area .single_blog_item {
    margin-bottom: 45px; } }
@media (max-width: 767px) {
  .blog_area {
    padding-bottom: 10px; }

  .single_blog_item {
    margin-bottom: 35px; }
    .single_blog_item .blog_content p {
      font-size: 14px; }
    .single_blog_item .blog_content .boxed_btn {
      font-size: 16px; } }
.blog_area_2 .swiper-pagination-bullet {
  background: transparent;
  border: 1px solid transparent;
  padding: 10px;
  position: relative;
  -webkit-transition: all 0.3s ease-in-out;
  -moz-transition: all 0.3s ease-in-out;
  -ms-transition: all 0.3s ease-in-out;
  -o-transition: all 0.3s ease-in-out;
  transition: all 0.3s ease-in-out;
  top: 10px;
  opacity: 1; }
  .blog_area_2 .swiper-pagination-bullet:after {
    background: #363bff;
    content: '';
    width: 10px;
    top: 5px;
    left: 5px;
    height: 10px;
    border-radius: 50%;
    position: absolute; }
.blog_area_2 .swiper-pagination-bullet-active {
  border: 1px solid #363bff; }

.single_blog_item_2 {
  margin: 30px 20px 80px;
  position: relative; }
  .single_blog_item_2 .blog_img:after {
    width: 100%;
    left: 0;
    height: 100%;
    top: 0;
    content: '';
    position: absolute;
    z-index: 2;
    background: -webkit-linear-gradient(bottom, #1317d1 0%, #07164e 100%);
    background: -o-linear-gradient(top, #1317d1 0%, #07164e 100%);
    background: -moz-linear-gradient(to top, #1317d1 0%, #07164e 100%);
    background: linear-gradient(to top, #1317d1 0%, #07164e 100%);
    opacity: .4; }
  .single_blog_item_2 .blog_img_1 {
    background-image: url(../img/blog/21.png); }
  .single_blog_item_2 .blog_img_2 {
    background-image: url(../img/blog/22.png); }
  .single_blog_item_2 .blog_img_3 {
    background-image: url(../img/blog/21.png); }
  .single_blog_item_2 .blog_img_4 {
    background-image: url(../img/blog/22.png); }
  .single_blog_item_2 .blog_img {
    background-size: cover;
    background-position: center;
    background-repeat: no-repeat;
    height: 110%;
    width: 45%;
    left: 0;
    top: -5%;
    position: absolute;
    overflow: hidden;
    z-index: 2;
    border-radius: 20px; }
  .single_blog_item_2 .blog_content {
    padding: 20px;
    padding-left: 50%;
    border-radius: 25px;
    width: 100%;
    position: relative;
    height: 300px;
    background: #fff; }
    .single_blog_item_2 .blog_content h2 {
      color: #363bff;
      font-size: 24px;
      font-weight: 700;
      font-family: 'Fira Sans', sans-serif;
      margin-bottom: 20px;
      text-transform: uppercase; }
    .single_blog_item_2 .blog_content p {
      font-size: 16px;
      line-height: 25px;
      color: #838bab;
      font-weight: 400;
      font-family: 'Fira Sans', sans-serif;
      margin-bottom: 15px; }
  .single_blog_item_2 .boxed_btn {
    font-size: 14px;
    color: #fff;
    padding: 12px 18px;
    border-radius: 25px;
    background: -webkit-linear-gradient(bottom, #1317d1 0%, #07164e 100%);
    background: -o-linear-gradient(top, #1317d1 0%, #07164e 100%);
    background: -moz-linear-gradient(to top, #1317d1 0%, #07164e 100%);
    background: linear-gradient(to top, #1317d1 0%, #07164e 100%);
    border: 2px solid #fff;
    margin-bottom: 30px; }
    .single_blog_item_2 .boxed_btn:after {
      border-radius: 25px;
      background: #fff;
      border: 2px solid #fff; }
    .single_blog_item_2 .boxed_btn:hover {
      color: #363bff;
      border: 2px solid #363bff; }

@media only screen and (min-width: 992px) and (max-width: 1200px) {
  .single_blog_item_2 .blog_content h2 {
    font-size: 20px;
    margin-bottom: 5px; }

  .single_blog_item_2 .blog_content p {
    font-size: 14px;
    margin-bottom: 10px; } }
@media (max-width: 767px) {
  .single_blog_item_2 .blog_content h2 {
    font-size: 18px;
    margin-bottom: 10px; }
  .single_blog_item_2 .blog_content p {
    font-size: 14px;
    line-height: 1.5; } }
.blog_area_3 {
  background: -webkit-linear-gradient(left, #13128c 0%, #370863 100%);
  background: -o-linear-gradient(right, #13128c 0%, #370863 100%);
  background: -moz-linear-gradient(to right, #13128c 0%, #370863 100%);
  background: linear-gradient(to right, #13128c 0%, #370863 100%); }
  .blog_area_3 .single_blog_item {
    background: #fff;
    margin-bottom: 50px;
    position: relative;
    top: 0;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
    .blog_area_3 .single_blog_item .blog_img {
      height: 190px;
      background-size: cover;
      background-position: center;
      background-repeat: no-repeat; }
    .blog_area_3 .single_blog_item .blog_bg_1 {
      background-image: url("../img/blog/1.png"); }
    .blog_area_3 .single_blog_item .blog_bg_2 {
      background-image: url("../img/blog/2.png"); }
    .blog_area_3 .single_blog_item .blog_bg_3 {
      background-image: url("../img/blog/3.png"); }
    .blog_area_3 .single_blog_item .blog_content {
      padding: 25px; }
      .blog_area_3 .single_blog_item .blog_content h2 {
        color: #304e73;
        font-size: 18px;
        margin-bottom: 15px;
        font-weight: 700;
        font-family: 'Fira Sans', sans-serif; }
      .blog_area_3 .single_blog_item .blog_content p {
        font-size: 16px;
        color: #838bab;
        margin-bottom: 20px;
        line-height: 25px;
        font-weight: 400;
        font-family: 'Fira Sans', sans-serif; }
      .blog_area_3 .single_blog_item .blog_content .boxed_btn {
        display: inline-block;
        background: none;
        color: #0cbafc;
        font-size: 18px;
        font-weight: 500;
        font-family: 'Fira Sans', sans-serif; }
        .blog_area_3 .single_blog_item .blog_content .boxed_btn i {
          font-size: 13px;
          margin-left: 2px;
          -webkit-transition: all 0.3s ease-in-out;
          -moz-transition: all 0.3s ease-in-out;
          -ms-transition: all 0.3s ease-in-out;
          -o-transition: all 0.3s ease-in-out;
          transition: all 0.3s ease-in-out; }
        .blog_area_3 .single_blog_item .blog_content .boxed_btn:hover i {
          margin-left: 5px; }
    .blog_area_3 .single_blog_item:hover {
      top: -10px; }

@media only screen and (min-width: 768px) and (max-width: 991px) {
  .blog_area_3 {
    padding-bottom: 10px; } }
@media (max-width: 767px) {
  .blog_area_3 {
    padding-bottom: 10px; }
    .blog_area_3 .single_blog_item {
      margin-bottom: 40px; }
      .blog_area_3 .single_blog_item .blog_content p {
        font-size: 14px; }
      .blog_area_3 .single_blog_item .blog_content .boxed_btn {
        font-size: 16px; } }
.blog_area_4 {
  background: transparent; }
  .blog_area_4 .single_blog_item_3 {
    position: relative;
    z-index: 1;
    margin-bottom: 50px; }
    .blog_area_4 .single_blog_item_3:hover .blog_img img {
      transform: scale(1.1) rotate(2deg); }
    .blog_area_4 .single_blog_item_3 .blog_img {
      border-radius: 10px;
      overflow: hidden; }
      .blog_area_4 .single_blog_item_3 .blog_img img {
        -webkit-transition: all 0.3s ease-in-out;
        -moz-transition: all 0.3s ease-in-out;
        -ms-transition: all 0.3s ease-in-out;
        -o-transition: all 0.3s ease-in-out;
        transition: all 0.3s ease-in-out; }
    .blog_area_4 .single_blog_item_3 .blog_info {
      position: absolute;
      background: -webkit-linear-gradient(bottom, #6a11cb 0%, #2575fc 100%);
      background: -o-linear-gradient(top, #6a11cb 0%, #2575fc 100%);
      background: -moz-linear-gradient(to top, #6a11cb 0%, #2575fc 100%);
      background: linear-gradient(to top, #6a11cb 0%, #2575fc 100%);
      width: 100%;
      height: auto;
      top: 69%;
      cursor: pointer;
      -webkit-transition: all 0.3s ease-in-out;
      -moz-transition: all 0.3s ease-in-out;
      -ms-transition: all 0.3s ease-in-out;
      -o-transition: all 0.3s ease-in-out;
      transition: all 0.3s ease-in-out;
      left: 10px;
      color: #fff;
      border-radius: 20px;
      padding: 20px; }
      .blog_area_4 .single_blog_item_3 .blog_info .meta_date {
        display: inline-block;
        padding: 5px 10px;
        background: white;
        border-radius: 5px;
        font-size: 16px;
        color: #363bff;
        font-weight: 400;
        font-family: 'Fira Sans', sans-serif;
        margin-bottom: 15px; }
      .blog_area_4 .single_blog_item_3 .blog_info h2 {
        font-size: 24px;
        font-weight: 700;
        font-family: 'Fira Sans', sans-serif;
        -webkit-transition: all 0.3s ease-in-out;
        -moz-transition: all 0.3s ease-in-out;
        -ms-transition: all 0.3s ease-in-out;
        -o-transition: all 0.3s ease-in-out;
        transition: all 0.3s ease-in-out; }
      .blog_area_4 .single_blog_item_3 .blog_info:hover h2 {
        color: #fff; }

@media only screen and (min-width: 768px) and (max-width: 991px) {
  .blog_area_4 .single_blog_item_3 .blog_info {
    padding: 15px 10px; }
    .blog_area_4 .single_blog_item_3 .blog_info .meta_date {
      font-size: 14px;
      margin-bottom: 15px; }
    .blog_area_4 .single_blog_item_3 .blog_info h2 {
      font-size: 18px; } }
@media (max-width: 767px) {
  .blog_area_4 .single_blog_item_3 {
    margin-bottom: 80px; }
    .blog_area_4 .single_blog_item_3 .blog_info {
      top: 67%; } }
@media only screen and (min-width: 480px) and (max-width: 767px) {
  .blog_area_4 .single_blog_item_3 {
    margin-bottom: 80px; }
    .blog_area_4 .single_blog_item_3 .blog_info {
      top: 82%; } }
.blog_area_5 {
  background: transparent; }
  .blog_area_5 .single_blog_item_4 {
    border-radius: 10px;
    box-shadow: 0px 10px 15px 0px rgba(69, 74, 167, 0.15);
    padding: 20px 25px;
    background: #fff;
    position: relative;
    top: 0;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
    .blog_area_5 .single_blog_item_4:hover {
      top: -5px; }
    .blog_area_5 .single_blog_item_4 .meta_date {
      display: inline-block;
      padding: 7px 10px;
      background: #3a2085;
      border-radius: 5px;
      color: #fff;
      font-weight: 400;
      font-family: 'Fira Sans', sans-serif;
      margin-bottom: 15px; }
    .blog_area_5 .single_blog_item_4 h2 {
      font-size: 18px;
      font-weight: 500;
      font-family: 'Fira Sans', sans-serif;
      margin-bottom: 15px;
      color: #191b41; }
    .blog_area_5 .single_blog_item_4 p {
      font-size: 14px;
      color: #838bab;
      line-height: 1.5;
      font-weight: 400;
      font-family: 'Fira Sans', sans-serif;
      margin-bottom: 20px; }
    .blog_area_5 .single_blog_item_4 .boxed_btn {
      color: #3a2085;
      -webkit-transition: all 0.3s ease-in-out;
      -moz-transition: all 0.3s ease-in-out;
      -ms-transition: all 0.3s ease-in-out;
      -o-transition: all 0.3s ease-in-out;
      transition: all 0.3s ease-in-out;
      background: #fff;
      font-weight: 700;
      font-family: 'Fira Sans', sans-serif;
      font-size: 16px;
      border-radius: 5px;
      padding: 10px 15px;
      display: inline-block; }
      .blog_area_5 .single_blog_item_4 .boxed_btn:hover {
        background: #3a2085;
        color: #fff; }

@media only screen and (min-width: 768px) and (max-width: 991px) {
  .blog_area_5
  .single_blog_item_4 {
    margin-top: 25px; } }
@media (max-width: 767px) {
  .blog_area_5
  .single_blog_item_4 {
    margin-top: 25px; } }
.single_blog_item_5 {
  background: #fff;
  margin-bottom: 50px;
  position: relative;
  top: 0;
  -webkit-transition: all 0.3s ease-in-out;
  -moz-transition: all 0.3s ease-in-out;
  -ms-transition: all 0.3s ease-in-out;
  -o-transition: all 0.3s ease-in-out;
  transition: all 0.3s ease-in-out; }
  .single_blog_item_5 .blog_img {
    height: 200px;
    overflow: hidden; }
    .single_blog_item_5 .blog_img img {
      height: 100%;
      width: 100%;
      object-fit: cover; }
  .single_blog_item_5 .blog_content {
    padding: 25px; }
    .single_blog_item_5 .blog_content h2 {
      color: #304e73;
      font-size: 18px;
      margin-bottom: 15px;
      font-weight: 700;
      font-family: 'Fira Sans', sans-serif; }
    .single_blog_item_5 .blog_content .blog_meta_list a {
      color: #3a3b58;
      margin-bottom: 15px;
      font-size: 15px;
      margin-right: 10px; }
      .single_blog_item_5 .blog_content .blog_meta_list a:hover {
        color: #363bff; }
      .single_blog_item_5 .blog_content .blog_meta_list a i {
        margin-right: 5px; }
    .single_blog_item_5 .blog_content p {
      font-size: 16px;
      color: #838bab;
      margin-bottom: 20px;
      line-height: 25px;
      font-weight: 400;
      font-family: 'Fira Sans', sans-serif; }
    .single_blog_item_5 .blog_content .boxed_btn {
      display: inline-block;
      background: none;
      color: #363bff;
      font-size: 18px;
      font-weight: 500;
      font-family: 'Fira Sans', sans-serif; }
      .single_blog_item_5 .blog_content .boxed_btn i {
        font-size: 13px;
        margin-left: 2px;
        -webkit-transition: all 0.3s ease-in-out;
        -moz-transition: all 0.3s ease-in-out;
        -ms-transition: all 0.3s ease-in-out;
        -o-transition: all 0.3s ease-in-out;
        transition: all 0.3s ease-in-out; }
      .single_blog_item_5 .blog_content .boxed_btn:hover i {
        margin-left: 5px; }
  .single_blog_item_5:hover {
    top: -10px; }

@media only screen and (min-width: 768px) and (max-width: 991px) {
  .blog_area {
    padding-bottom: 10px; } }
@media (max-width: 767px) {
  .blog_area {
    padding-bottom: 10px; }

  .single_blog_item_5 {
    margin-bottom: 40px; }
    .single_blog_item_5 .blog_content p {
      font-size: 14px; }
    .single_blog_item_5 .blog_content .boxed_btn {
      font-size: 16px; } }
.side_bar .search_box, .side_bar .subscribe_box {
  padding: 10px;
  border: 1px solid #e0e0e0;
  margin-bottom: 30px; }
  .side_bar .search_box .input-group, .side_bar .subscribe_box .input-group {
    border-radius: 0;
    border: 1px solid #ddd;
    background: #f9f9f9;
    font-size: 14px; }
    .side_bar .search_box .input-group input, .side_bar .subscribe_box .input-group input {
      border-radius: 0;
      border: none;
      color: #838bab;
      background: none;
      font-size: 14px;
      font-weight: 400;
      font-family: 'Fira Sans', sans-serif; }
    .side_bar .search_box .input-group span.input-group-btn, .side_bar .subscribe_box .input-group span.input-group-btn {
      border-left: 1px solid #ddd; }
      .side_bar .search_box .input-group span.input-group-btn .btn, .side_bar .subscribe_box .input-group span.input-group-btn .btn {
        color: #fff;
        border-radius: 0px;
        background: #2cd63c;
        -webkit-transition: all 0.5s ease-in-out;
        -moz-transition: all 0.5s ease-in-out;
        -ms-transition: all 0.5s ease-in-out;
        -o-transition: all 0.5s ease-in-out;
        transition: all 0.5s ease-in-out; }
        .side_bar .search_box .input-group span.input-group-btn .btn:focus, .side_bar .subscribe_box .input-group span.input-group-btn .btn:focus {
          box-shadow: none; }
        .side_bar .search_box .input-group span.input-group-btn .btn:hover, .side_bar .subscribe_box .input-group span.input-group-btn .btn:hover {
          background: rgba(44, 214, 60, 0.6); }
.side_bar .subscribe_box .input-group span.input-group-btn .btn i.ti-arrow-right {
  position: relative;
  -webkit-transition: all 0.5s ease-in-out;
  -moz-transition: all 0.5s ease-in-out;
  -ms-transition: all 0.5s ease-in-out;
  -o-transition: all 0.5s ease-in-out;
  transition: all 0.5s ease-in-out;
  left: 0; }
.side_bar .subscribe_box .input-group span.input-group-btn .btn:hover i.ti-arrow-right {
  left: 5px; }
.side_bar h3 {
  font-size: 24px;
  color: #363bff;
  font-weight: 500;
  font-family: 'Fira Sans', sans-serif;
  padding: 15px 0;
  margin-bottom: 30px;
  text-transform: uppercase;
  position: relative;
  z-index: 1; }
  .side_bar h3:after, .side_bar h3:before {
    background: #666;
    position: absolute;
    left: 0;
    bottom: 0px;
    z-index: -1;
    content: ''; }
  .side_bar h3:after {
    width: 100%;
    height: 1px; }
  .side_bar h3:before {
    width: 40%;
    height: 2px; }
.side_bar .archive, .side_bar .categories {
  margin-bottom: 40px; }
  .side_bar .archive p, .side_bar .categories p {
    padding: 10px 0;
    margin-bottom: 5px;
    border-bottom: 1px solid #ddd; }
    .side_bar .archive p:last-of-type, .side_bar .categories p:last-of-type {
      border: none; }
    .side_bar .archive p a, .side_bar .categories p a {
      font-size: 13px;
      color: #fff;
      -webkit-transition: all 0.5s ease-in-out;
      -moz-transition: all 0.5s ease-in-out;
      -ms-transition: all 0.5s ease-in-out;
      -o-transition: all 0.5s ease-in-out;
      transition: all 0.5s ease-in-out;
      font-weight: 500;
      font-family: 'Fira Sans', sans-serif; }
      .side_bar .archive p a:hover, .side_bar .categories p a:hover {
        color: #363bff; }
    .side_bar .archive p span, .side_bar .categories p span {
      font-size: 90%;
      color: #fff;
      font-weight: 400;
      font-family: 'Fira Sans', sans-serif; }
.side_bar .instagram .wrapper {
  margin-bottom: 40px; }
  .side_bar .instagram .wrapper a {
    margin-bottom: 15px;
    height: 80px;
    width: 80px;
    overflow: hidden;
    position: relative;
    z-index: 1; }
    .side_bar .instagram .wrapper a i {
      position: absolute;
      z-index: 2;
      width: 100%;
      height: 30%;
      background: rgba(0, 0, 0, 0.3);
      visibility: hidden;
      left: 0;
      bottom: -30%;
      -webkit-transition: all 0.5s ease-in-out;
      -moz-transition: all 0.5s ease-in-out;
      -ms-transition: all 0.5s ease-in-out;
      -o-transition: all 0.5s ease-in-out;
      transition: all 0.5s ease-in-out;
      color: #fff;
      font-size: 16px; }
    .side_bar .instagram .wrapper a:hover i {
      visibility: visible;
      bottom: 0; }
    .side_bar .instagram .wrapper a img {
      height: 100%;
      max-width: 200%;
      display: block; }
.side_bar .post_list {
  margin-bottom: 40px; }
  .side_bar .post_list .post {
    margin-bottom: 15px; }
    .side_bar .post_list .post .post_img {
      margin-right: 15px;
      height: 70px;
      width: 70px;
      overflow: hidden;
      position: relative; }
      .side_bar .post_list .post .post_img img {
        height: 100%;
        max-width: 400%;
        position: absolute; }
    .side_bar .post_list .post p {
      width: 70%;
      font-weight: 500;
      font-family: 'Fira Sans', sans-serif; }
      .side_bar .post_list .post p span {
        display: block;
        margin-top: 10px;
        color: #363bff; }
      .side_bar .post_list .post p a {
        -webkit-transition: all 0.5s ease-in-out;
        -moz-transition: all 0.5s ease-in-out;
        -ms-transition: all 0.5s ease-in-out;
        -o-transition: all 0.5s ease-in-out;
        transition: all 0.5s ease-in-out;
        color: #fff;
        font-size: 15px; }
        .side_bar .post_list .post p a:hover {
          color: #363bff; }
.side_bar .tags {
  margin-bottom: 40px; }
  .side_bar .tags a {
    padding: 10px 20px;
    display: inline-block;
    border-radius: 3px;
    margin: 0 10px 10px 0;
    background: #363bff;
    -webkit-transition: all 0.5s ease-in-out;
    -moz-transition: all 0.5s ease-in-out;
    -ms-transition: all 0.5s ease-in-out;
    -o-transition: all 0.5s ease-in-out;
    transition: all 0.5s ease-in-out;
    color: #fff; }
    .side_bar .tags a:hover {
      color: #363bff;
      background: #fafafa; }
.side_bar .follow {
  margin-bottom: 40px; }
  .side_bar .follow .wrapper a {
    font-size: 14px;
    font-weight: 400;
    color: #fff;
    display: flex;
    align-items: center;
    margin-bottom: 15px;
    border-radius: 3px;
    -webkit-transition: all 0.5s ease-in-out;
    -moz-transition: all 0.5s ease-in-out;
    -ms-transition: all 0.5s ease-in-out;
    -o-transition: all 0.5s ease-in-out;
    transition: all 0.5s ease-in-out;
    width: 45%; }
    .side_bar .follow .wrapper a i {
      font-size: 18px;
      line-height: 1;
      padding: 10px 15px;
      position: relative;
      margin-right: 10px;
      z-index: 1; }
      .side_bar .follow .wrapper a i:after {
        position: absolute;
        z-index: -1;
        content: '';
        right: 0;
        top: 0;
        width: 1px;
        height: 100%;
        background: rgba(255, 255, 255, 0.5); }
  .side_bar .follow .wrapper a.youtube {
    background: #ff0000;
    color: #fff; }
    .side_bar .follow .wrapper a.youtube:hover {
      background: rgba(255, 0, 0, 0.5); }
  .side_bar .follow .wrapper a.facebook {
    background: #3b5998;
    color: #fff; }
    .side_bar .follow .wrapper a.facebook:hover {
      background: rgba(59, 89, 152, 0.5); }
  .side_bar .follow .wrapper a.yahoo {
    background: #410093;
    color: #fff; }
    .side_bar .follow .wrapper a.yahoo:hover {
      background: rgba(65, 0, 147, 0.5); }
  .side_bar .follow .wrapper a.twitter {
    background: #1da1f2;
    color: #fff; }
    .side_bar .follow .wrapper a.twitter:hover {
      background: rgba(29, 161, 242, 0.5); }
  .side_bar .follow .wrapper a.tumblr {
    background: #35465c;
    color: #fff; }
    .side_bar .follow .wrapper a.tumblr:hover {
      background: rgba(53, 70, 92, 0.5); }
  .side_bar .follow .wrapper a.vimeo {
    background: #1ab7ea;
    color: #fff; }
    .side_bar .follow .wrapper a.vimeo:hover {
      background: rgba(26, 183, 234, 0.5); }

.details_section .blog_img {
  position: relative; }
  .details_section .blog_img a {
    overflow: hidden;
    display: block;
    height: 100%; }
    .details_section .blog_img a img {
      height: 100%;
      max-width: 200%; }
  .details_section .blog_img .blog_meta_list {
    position: absolute;
    width: calc(100% - 20px);
    left: 10px;
    bottom: 10px;
    padding: 8px; }
    .details_section .blog_img .blog_meta_list a {
      background: #fff;
      padding: 10px;
      width: 25%;
      display: flex;
      font-weight: 500;
      color: #838bab;
      text-align: left;
      border-right: 1px solid #838bab;
      font-size: 14px;
      align-items: center; }
      .details_section .blog_img .blog_meta_list a:hover {
        color: #363bff; }
      .details_section .blog_img .blog_meta_list a:last-of-type {
        border: none; }
      .details_section .blog_img .blog_meta_list a i {
        margin-right: 5px; }
.details_section h2.b_heading {
  font-size: 28px;
  font-weight: 500;
  font-family: 'Fira Sans', sans-serif;
  color: #363bff;
  margin: 30px 0; }
.details_section .mid_section {
  margin-bottom: 30px; }
  .details_section .mid_section p {
    margin-bottom: 0px; }
.details_section p {
  line-height: 1.8;
  margin-bottom: 25px;
  font-size: 14px;
  color: #fff;
  font-weight: 400;
  font-family: 'Fira Sans', sans-serif; }
.details_section p.special {
  -webkit-box-shadow: 0px 0px 9.3px 0.7px rgba(0, 0, 0, 0.12);
  -moz-box-shadow: 0px 0px 9.3px 0.7px rgba(0, 0, 0, 0.12);
  box-shadow: 0px 0px 9.3px 0.7px rgba(0, 0, 0, 0.12);
  padding: 30px; }
  .details_section p.special span {
    font-weight: 700; }
.details_section ul.social_link_2 {
  margin-bottom: 60px; }
  .details_section ul.social_link_2:after, .details_section ul.social_link_2:before {
    position: absolute;
    z-index: -1;
    left: 0;
    height: 1px;
    width: 100%;
    content: '';
    background: #363bff; }
  .details_section ul.social_link_2:after {
    top: 5px; }
  .details_section ul.social_link_2:before {
    bottom: 5px; }
.details_section .video_slider {
  margin-bottom: 40px; }
  .details_section .video_slider .swiper-button-next, .details_section .video_slider .swiper-button-prev {
    width: 60px;
    background: none;
    font-weight: 900; }
    .details_section .video_slider .swiper-button-next i, .details_section .video_slider .swiper-button-prev i {
      color: #fff;
      padding: 10px;
      border-radius: 40px;
      font-size: 28px;
      -webkit-transition: all 0.5s ease-in-out;
      -moz-transition: all 0.5s ease-in-out;
      -ms-transition: all 0.5s ease-in-out;
      -o-transition: all 0.5s ease-in-out;
      transition: all 0.5s ease-in-out; }
      .details_section .video_slider .swiper-button-next i:hover, .details_section .video_slider .swiper-button-prev i:hover {
        background: rgba(250, 250, 250, 0.5); }
.details_section .comments {
  margin-bottom: 40px; }
  .details_section .comments hr {
    height: 3px;
    background: #363bff;
    margin-top: -15px;
    margin-bottom: 30px; }
  .details_section .comments ul li a img {
    border-radius: 50%;
    border: 4px solid #838bab; }
  .details_section .comments ul li > ul {
    margin-left: 80px; }
  .details_section .comments ul li .comment {
    padding: 25px;
    border: 1px solid #838bab;
    position: relative;
    margin-left: 25px;
    margin-bottom: 30px; }
    .details_section .comments ul li .comment:after {
      position: absolute;
      content: '';
      left: -9px;
      top: 16px;
      height: 16px;
      border-right: 1px solid #838bab;
      width: 16px;
      background: #030221;
      border-bottom: 1px solid #838bab;
      transform: rotate(135deg); }
    .details_section .comments ul li .comment p {
      margin-bottom: 0px !important; }
    .details_section .comments ul li .comment .author {
      border-bottom: 1px solid #838bab;
      color: #363bff;
      padding-bottom: 10px;
      margin-bottom: 20px;
      text-transform: uppercase; }
      .details_section .comments ul li .comment .author h4 {
        font-size: 18px;
        font-weight: 500;
        font-family: 'Fira Sans', sans-serif; }
        .details_section .comments ul li .comment .author h4 span.date {
          margin-left: 10px;
          font-size: 14px; }
      .details_section .comments ul li .comment .author a {
        font-size: 14px;
        color: #838bab;
        -webkit-transition: all 0.5s ease-in-out;
        -moz-transition: all 0.5s ease-in-out;
        -ms-transition: all 0.5s ease-in-out;
        -o-transition: all 0.5s ease-in-out;
        transition: all 0.5s ease-in-out; }
        .details_section .comments ul li .comment .author a:hover {
          color: #363bff; }
        .details_section .comments ul li .comment .author a i {
          margin-right: 5px;
          color: #363bff;
          font-weight: 700; }
.details_section .comment_form form {
  padding: 50px 30px 50px 0; }
  .details_section .comment_form form input[type="text"], .details_section .comment_form form input[type="email"], .details_section .comment_form form textarea {
    background: #fff;
    font-size: 18px;
    color: #838bab;
    -webkit-transition: all 0.5s ease-in-out;
    -moz-transition: all 0.5s ease-in-out;
    -ms-transition: all 0.5s ease-in-out;
    -o-transition: all 0.5s ease-in-out;
    transition: all 0.5s ease-in-out;
    -webkit-box-shadow: 0 0px 10px 0px rgba(0, 0, 0, 0.1);
    -moz-box-shadow: 0 0px 10px 0px rgba(0, 0, 0, 0.1);
    box-shadow: 0 0px 10px 0px rgba(0, 0, 0, 0.1);
    border: 1px solid transparent; }
    .details_section .comment_form form input[type="text"]:focus, .details_section .comment_form form input[type="email"]:focus, .details_section .comment_form form textarea:focus {
      box-shadow: none;
      border: 1px solid #ddd; }
  .details_section .comment_form form .form-control {
    margin-bottom: 30px; }
  .details_section .comment_form form button {
    font-size: 18px;
    height: 44px;
    width: 170px;
    background: #363bff;
    color: #fff;
    border: none;
    font-weight: 400;
    font-family: 'Fira Sans', sans-serif;
    border-radius: 30px;
    cursor: pointer;
    -webkit-transition: all 0.5s ease-in-out;
    -moz-transition: all 0.5s ease-in-out;
    -ms-transition: all 0.5s ease-in-out;
    -o-transition: all 0.5s ease-in-out;
    transition: all 0.5s ease-in-out; }
    .details_section .comment_form form button:hover {
      color: #363bff;
      background: #fff; }

.side_bar, .details_section {
  padding: 25px;
  background: #00000054; }

.single_blog_with_sidebar {
  background: transparent; }
  .single_blog_with_sidebar .details_section .blog_img {
    height: 400px;
    position: relative; }

ul.social_link_2 {
  background: transparent;
  position: relative;
  z-index: 1;
  height: 20px; }
  ul.social_link_2 li {
    display: inline-block;
    background: #170735;
    padding: 0px 10px; }
    ul.social_link_2 li a {
      display: inline-block;
      line-height: 0; }
      ul.social_link_2 li a i {
        font-size: 16px;
        border-radius: 50%;
        padding: 10px;
        color: #fff;
        -webkit-transition: all 0.5s ease-in-out;
        -moz-transition: all 0.5s ease-in-out;
        -ms-transition: all 0.5s ease-in-out;
        -o-transition: all 0.5s ease-in-out;
        transition: all 0.5s ease-in-out; }
      ul.social_link_2 li a i.ti-facebook {
        background: #3b5998; }
        ul.social_link_2 li a i.ti-facebook:hover {
          color: #3b5998;
          background: #fff; }
      ul.social_link_2 li a i.ti-vimeo-alt {
        background: #1ab7ea; }
        ul.social_link_2 li a i.ti-vimeo-alt:hover {
          color: #1ab7ea;
          background: #fff; }
      ul.social_link_2 li a i.ti-twitter-alt {
        background: #1da1f2; }
        ul.social_link_2 li a i.ti-twitter-alt:hover {
          color: #1da1f2;
          background: #fff; }
      ul.social_link_2 li a i.ti-pinterest {
        background: #bd081c; }
        ul.social_link_2 li a i.ti-pinterest:hover {
          color: #bd081c;
          background: #fff; }
    ul.social_link_2 li a.replay i {
      font-size: 22px;
      padding: 15px;
      background: #2cd63c; }
      ul.social_link_2 li a.replay i:hover {
        color: #2cd63c;
        background: #fff; }

.navigation {
  background: #272727;
  padding: 50px 100px;
  margin-top: 100px; }
  .navigation a.prev_post, .navigation a.next_post {
    background: #2cd63c;
    padding: 10px 20px;
    border-radius: 3px;
    color: #fff;
    font-size: 18px;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
    .navigation a.prev_post:hover, .navigation a.next_post:hover {
      background: rgba(44, 214, 60, 0.7);
      color: #fff; }
    .navigation a.prev_post i, .navigation a.next_post i {
      font-size: 16px;
      margin: 0 5px;
      position: relative; }
    .navigation a.prev_post i.ti-arrow-left, .navigation a.next_post i.ti-arrow-left {
      left: 0;
      -webkit-transition: left 0.3s ease-in-out;
      -moz-transition: left 0.3s ease-in-out;
      -ms-transition: left 0.3s ease-in-out;
      -o-transition: left 0.3s ease-in-out;
      transition: left 0.3s ease-in-out; }
    .navigation a.prev_post i.ti-arrow-right, .navigation a.next_post i.ti-arrow-right {
      right: 0;
      -webkit-transition: right 0.3s ease-in-out;
      -moz-transition: right 0.3s ease-in-out;
      -ms-transition: right 0.3s ease-in-out;
      -o-transition: right 0.3s ease-in-out;
      transition: right 0.3s ease-in-out; }
    .navigation a.prev_post:hover i.ti-arrow-left, .navigation a.next_post:hover i.ti-arrow-left {
      left: -5px; }
    .navigation a.prev_post:hover i.ti-arrow-right, .navigation a.next_post:hover i.ti-arrow-right {
      right: -5px; }

ul.navigation_2 {
  margin: 50px 0 100px; }
  ul.navigation_2 li {
    display: inline-block;
    text-align: center; }
    ul.navigation_2 li a {
      display: flex;
      justify-content: center;
      align-items: center;
      width: 40px;
      height: 40px;
      font-size: 16px;
      line-height: 1;
      background: #fff;
      margin-right: 10px;
      color: #304e73;
      border: 1px solid #838bab;
      -webkit-transition: all 0.3s ease-in-out;
      -moz-transition: all 0.3s ease-in-out;
      -ms-transition: all 0.3s ease-in-out;
      -o-transition: all 0.3s ease-in-out;
      transition: all 0.3s ease-in-out; }
      ul.navigation_2 li a:hover {
        color: #fff;
        background: #2cd63c;
        border: 1px solid #2cd63c; }
      ul.navigation_2 li a i {
        font-size: 14px; }

.simple_blog {
  background: transparent; }

.masonry_blog, .grid_blog {
  background: transparent; }

.masonry_blog .grid-item {
  width: 30%;
  margin-bottom: 20px; }
  .masonry_blog .grid-item .single_blog_item_5 {
    margin: 0; }

.two_column_grid_blog {
  background: transparent; }

.two_column_with_side_bar {
  background: transparent; }
  .two_column_with_side_bar .single_blog_item_5 .blog_img {
    height: 220px; }

.full_grid_blog {
  background: transparent; }
  .full_grid_blog .single_blog_item_5 .blog_img {
    height: 400px; }

.full_content_blog {
  background: transparent; }
  .full_content_blog .details_section {
    padding: 25px; }
  .full_content_blog .single_blog_item_5 .blog_img {
    height: 500px; }
  .full_content_blog .single_blog_item_5 .blog_content_bottom {
    padding: 30px 0; }
  .full_content_blog .blog_meta_list {
    font-style: italic;
    color: #838bab; }
    .full_content_blog .blog_meta_list a {
      text-decoration: underline;
      font-weight: 500;
      color: #304e73; }
  .full_content_blog p span {
    text-decoration: underline;
    font-weight: 500;
    font-style: italic;
    color: #304e73; }
  .full_content_blog ul.social_link_2 li {
    background: #fff; }

.full_width_with_side_bar {
  background: transparent; }
  .full_width_with_side_bar .single_blog_item_5 .blog_img {
    margin-bottom: 25px;
    height: 400px; }
    .full_width_with_side_bar .single_blog_item_5 .blog_img ul.social_link_2 {
      background: none;
      position: absolute;
      right: 35px;
      top: 60px;
      margin: 0; }
      .full_width_with_side_bar .single_blog_item_5 .blog_img ul.social_link_2:after, .full_width_with_side_bar .single_blog_item_5 .blog_img ul.social_link_2:before {
        height: 0; }
      .full_width_with_side_bar .single_blog_item_5 .blog_img ul.social_link_2 li {
        background: none;
        height: auto; }
        .full_width_with_side_bar .single_blog_item_5 .blog_img ul.social_link_2 li a {
          overflow: visible;
          display: inline-block;
          line-height: 0; }
  .full_width_with_side_bar .single_blog_item_5 .blog_content_bottom {
    padding-top: 30px; }
  .full_width_with_side_bar .quote {
    padding: 50px 25px;
    margin-bottom: 50px;
    background: #272727;
    color: #fff; }
    .full_width_with_side_bar .quote i.ti-quote-left {
      font-size: 30px;
      margin-bottom: 10px;
      display: block; }
    .full_width_with_side_bar .quote p {
      font-size: 20px;
      line-height: 1.5;
      margin-bottom: 20px; }
    .full_width_with_side_bar .quote .blog_meta_list a {
      font-weight: 500;
      margin-right: 10px;
      color: #fff; }
      .full_width_with_side_bar .quote .blog_meta_list a:hover {
        color: #363bff; }
      .full_width_with_side_bar .quote .blog_meta_list a i {
        margin-right: 5px; }

@media only screen and (min-width: 768px) and (max-width: 991px) {
  .masonry_blog .grid-item {
    width: 47%; } }
@media (max-width: 767px) {
  .masonry_blog .grid-item {
    width: 100%; } }
.call_to_action_area {
  background: #00000059; }
  .call_to_action_area .ct_wrapper {
    min-height: 260px; }
    .call_to_action_area .ct_wrapper .ct_action h3 {
      font-size: 36px;
      line-height: 1.5;
      font-weight: 700;
      font-family: 'Fira Sans', sans-serif;
      color: #fff;
      margin-bottom: 10px; }
      .call_to_action_area .ct_wrapper .ct_action h3 span {
        color: #ffcc02; }
    .call_to_action_area .ct_wrapper .ct_action p {
      font-weight: 400;
      font-family: 'Fira Sans', sans-serif;
      font-size: 16px;
      line-height: 1.5;
      color: #fff; }
  .call_to_action_area .boxed_btn {
    margin-left: auto;
    border-radius: 30px;
    text-transform: uppercase;
    color: #fff;
    padding: 15px 25px;
    border: 2px solid #2cd63c;
    background: #2cd63c; }
    .call_to_action_area .boxed_btn:after {
      border: none;
      border-radius: 30px;
      background: rgba(7, 8, 45, 0.5); }
    .call_to_action_area .boxed_btn:hover {
      border: 2px solid #fff;
      background: transparent; }

.call_to_action_area_2 {
  background: #182dcc; }
  .call_to_action_area_2 .ct_action {
    color: #fff;
    padding: 27px 0;
    padding-left: 60px; }
    .call_to_action_area_2 .ct_action i {
      font-size: 48px;
      position: absolute;
      left: 20px; }
    .call_to_action_area_2 .ct_action h3, .call_to_action_area_2 .ct_action h4 {
      font-weight: 400;
      font-family: 'Rubik', sans-serif; }
    .call_to_action_area_2 .ct_action h4 {
      font-size: 18px; }
    .call_to_action_area_2 .ct_action h3 {
      font-size: 24px; }
  .call_to_action_area_2 .mail_subscribe {
    background: #2cd63c;
    position: relative;
    z-index: 4;
    padding: 22px 0; }
    .call_to_action_area_2 .mail_subscribe form {
      position: relative;
      width: 100%; }
      .call_to_action_area_2 .mail_subscribe form input {
        font-size: 18px;
        padding: 20px;
        margin-left: 30px;
        border: 1px solid #fff;
        background: rgba(0, 0, 0, 0.1);
        width: 65%;
        color: #fff; }
        .call_to_action_area_2 .mail_subscribe form input::placeholder {
          opacity: 0.9;
          color: #fff; }
        .call_to_action_area_2 .mail_subscribe form input:-ms-input-placeholder {
          opacity: 0.9;
          color: #fff; }
        .call_to_action_area_2 .mail_subscribe form input::-ms-input-placeholder {
          opacity: 0.9;
          color: #fff; }
        .call_to_action_area_2 .mail_subscribe form input:-moz-placeholder {
          opacity: 0.9;
          color: #fff; }
        .call_to_action_area_2 .mail_subscribe form input::-moz-placeholder {
          opacity: 0.9;
          color: #fff; }
      .call_to_action_area_2 .mail_subscribe form button {
        width: 20%;
        color: #2cd63c;
        background: #fff;
        height: 100%;
        cursor: pointer;
        position: absolute;
        border: 1px solid #fff;
        font-size: 24px;
        -webkit-transition: all 0.3s ease-in-out;
        -moz-transition: all 0.3s ease-in-out;
        -ms-transition: all 0.3s ease-in-out;
        -o-transition: all 0.3s ease-in-out;
        transition: all 0.3s ease-in-out; }
        .call_to_action_area_2 .mail_subscribe form button i {
          transform: rotate(90deg);
          color: #2cd63c;
          -webkit-transition: all 0.3s ease-in-out;
          -moz-transition: all 0.3s ease-in-out;
          -ms-transition: all 0.3s ease-in-out;
          -o-transition: all 0.3s ease-in-out;
          transition: all 0.3s ease-in-out; }
        .call_to_action_area_2 .mail_subscribe form button:hover i {
          transform: rotate(43deg); }
    .call_to_action_area_2 .mail_subscribe:after {
      position: absolute;
      top: 0;
      background: #2cd63c;
      left: 0;
      width: 1000%;
      height: 100%;
      z-index: -1;
      content: ''; }

.call_to_action_area_3 {
  background: transparent; }
  .call_to_action_area_3 .ct_wrapper {
    min-height: 140px;
    padding: 20px 0;
    color: #fff; }
    .call_to_action_area_3 .ct_wrapper .ct_action {
      font-size: 36px;
      line-height: 1.5;
      font-weight: 700;
      font-family: 'Fira Sans', sans-serif;
      color: #fff;
      margin-bottom: 10px; }
    .call_to_action_area_3 .ct_wrapper .low_price {
      font-size: 16px;
      font-weight: 400;
      font-family: 'Fira Sans', sans-serif; }
      .call_to_action_area_3 .ct_wrapper .low_price .dolor_sign {
        color: #ffcc02; }
      .call_to_action_area_3 .ct_wrapper .low_price span {
        font-size: 48px;
        font-weight: 700;
        font-family: 'Rubik', sans-serif;
        color: #2cd63c; }
    .call_to_action_area_3 .ct_wrapper .boxed_btn {
      border-radius: 30px;
      text-transform: uppercase;
      color: #fff;
      padding: 15px 25px;
      -webkit-transition: all 0.3s ease-in-out;
      -moz-transition: all 0.3s ease-in-out;
      -ms-transition: all 0.3s ease-in-out;
      -o-transition: all 0.3s ease-in-out;
      transition: all 0.3s ease-in-out;
      background: -webkit-linear-gradient(bottom, #5317e6 0%, #07164e 100%);
      background: -o-linear-gradient(top, #5317e6 0%, #07164e 100%);
      background: -moz-linear-gradient(to top, #5317e6 0%, #07164e 100%);
      background: linear-gradient(to top, #5317e6 0%, #07164e 100%); }
      .call_to_action_area_3 .ct_wrapper .boxed_btn:after {
        border: 2px solid #5117e2;
        border-radius: 30px;
        background: #170735; }
      .call_to_action_area_3 .ct_wrapper .boxed_btn:hover {
        color: #fff; }

.call_to_action_area_4 {
  color: #fff;
  position: relative;
  z-index: 1;
  background: -webkit-linear-gradient(left, #5317e6 0%, #07164e 100%);
  background: -o-linear-gradient(right, #5317e6 0%, #07164e 100%);
  background: -moz-linear-gradient(to right, #5317e6 0%, #07164e 100%);
  background: linear-gradient(to right, #5317e6 0%, #07164e 100%); }
  .call_to_action_area_4 h4 {
    font-weight: 400;
    font-family: 'Fira Sans', sans-serif;
    font-size: 16px;
    margin-bottom: 15px; }
  .call_to_action_area_4 h3 {
    font-size: 36px;
    text-transform: uppercase;
    margin-bottom: 30px;
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif; }
  .call_to_action_area_4 p {
    line-height: 2;
    font-size: 14px;
    font-weight: 400;
    font-family: 'Fira Sans', sans-serif;
    margin-bottom: 45px; }
  .call_to_action_area_4 .boxed_btn {
    background: #fff;
    padding: 15px 30px;
    font-size: 16px;
    text-transform: uppercase;
    color: #363bff;
    margin: 0 7px;
    border-radius: 5px;
    display: inline-block;
    font-weight: 500;
    font-family: 'Fira Sans', sans-serif;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
    .call_to_action_area_4 .boxed_btn:hover {
      background: rgba(0, 0, 0, 0.3);
      color: #fff; }
    .call_to_action_area_4 .boxed_btn.boxed_btn.alt {
      background: rgba(0, 0, 0, 0.3);
      color: #fff; }
      .call_to_action_area_4 .boxed_btn.boxed_btn.alt:hover {
        background: #fff;
        color: #363bff; }

.call_to_action_area_5 {
  color: #fff;
  position: relative;
  z-index: 1; }
  .call_to_action_area_5:after {
    transform: skewY(-3deg);
    background: -webkit-linear-gradient(top, #000b42 0%, #004161 100%);
    background: -o-linear-gradient(bottom, #000b42 0%, #004161 100%);
    background: -moz-linear-gradient(to bottom, #000b42 0%, #004161 100%);
    background: linear-gradient(to bottom, #000b42 0%, #004161 100%);
    position: absolute;
    left: 0;
    top: 0;
    width: 100%;
    height: 100%;
    content: '';
    z-index: -1; }
  .call_to_action_area_5 h4 {
    font-weight: 400;
    font-family: 'Fira Sans', sans-serif;
    font-size: 16px;
    margin-bottom: 15px; }
  .call_to_action_area_5 h3 {
    font-size: 36px;
    text-transform: uppercase;
    margin-bottom: 30px;
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif; }
  .call_to_action_area_5 p {
    line-height: 2;
    font-size: 14px;
    font-weight: 400;
    font-family: 'Fira Sans', sans-serif;
    margin-bottom: 45px; }
  .call_to_action_area_5 .boxed_btn {
    background: #fff;
    padding: 15px 30px;
    font-size: 16px;
    text-transform: uppercase;
    color: #363bff;
    margin: 0 7px;
    border-radius: 5px;
    display: inline-block;
    font-weight: 500;
    font-family: 'Fira Sans', sans-serif;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
    .call_to_action_area_5 .boxed_btn:hover {
      background: rgba(0, 0, 0, 0.3);
      color: #fff; }
    .call_to_action_area_5 .boxed_btn.boxed_btn.alt {
      background: rgba(0, 0, 0, 0.3);
      color: #fff; }
      .call_to_action_area_5 .boxed_btn.boxed_btn.alt:hover {
        background: #fff;
        color: #363bff; }

.call_to_action_area_6 {
  color: #fff;
  position: relative;
  z-index: 1; }
  .call_to_action_area_6 h4 {
    color: #fff;
    font-weight: 500;
    font-weight: 400;
    font-family: 'Fira Sans', sans-serif;
    font-size: 16px;
    margin-bottom: 15px; }
  .call_to_action_area_6 h3 {
    font-size: 36px;
    text-transform: uppercase;
    color: #363bff;
    margin-bottom: 30px;
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif; }
  .call_to_action_area_6 p {
    line-height: 2;
    color: #fff;
    font-size: 14px;
    font-weight: 400;
    font-family: 'Fira Sans', sans-serif;
    margin-bottom: 45px; }
  .call_to_action_area_6 .boxed_btn {
    background: #3a2085;
    padding: 15px 30px;
    font-size: 16px;
    text-transform: uppercase;
    color: #fff;
    margin: 0 7px;
    border-radius: 5px;
    display: inline-block;
    font-weight: 500;
    font-family: 'Fira Sans', sans-serif;
    -webkit-transition: all 0.5s ease-in-out;
    -moz-transition: all 0.5s ease-in-out;
    -ms-transition: all 0.5s ease-in-out;
    -o-transition: all 0.5s ease-in-out;
    transition: all 0.5s ease-in-out; }
    .call_to_action_area_6 .boxed_btn:hover {
      background: #191b41; }
    .call_to_action_area_6 .boxed_btn.boxed_btn.alt {
      background: #191b41; }
      .call_to_action_area_6 .boxed_btn.boxed_btn.alt:hover {
        background: #3a2085; }

.call_to_action_area_7 {
  color: #fff;
  background: -webkit-linear-gradient(top, #13128c 0%, #370863 100%);
  background: -o-linear-gradient(bottom, #13128c 0%, #370863 100%);
  background: -moz-linear-gradient(to bottom, #13128c 0%, #370863 100%);
  background: linear-gradient(to bottom, #13128c 0%, #370863 100%);
  position: relative;
  z-index: 1; }
  .call_to_action_area_7 h4 {
    font-weight: 500;
    font-weight: 400;
    font-family: 'Fira Sans', sans-serif;
    font-size: 16px;
    margin-bottom: 15px; }
  .call_to_action_area_7 h3 {
    font-size: 36px;
    text-transform: uppercase;
    margin-bottom: 30px;
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif; }
  .call_to_action_area_7 p {
    line-height: 2;
    font-size: 14px;
    font-weight: 400;
    font-family: 'Fira Sans', sans-serif;
    margin-bottom: 45px; }
  .call_to_action_area_7 .boxed_btn {
    background: #fff;
    padding: 15px 30px;
    font-size: 16px;
    text-transform: uppercase;
    color: #191b41;
    margin: 0 7px;
    border-radius: 5px;
    display: inline-block;
    font-weight: 500;
    font-family: 'Fira Sans', sans-serif;
    -webkit-transition: all 0.5s ease-in-out;
    -moz-transition: all 0.5s ease-in-out;
    -ms-transition: all 0.5s ease-in-out;
    -o-transition: all 0.5s ease-in-out;
    transition: all 0.5s ease-in-out; }
    .call_to_action_area_7 .boxed_btn:hover {
      background: rgba(0, 0, 0, 0.3);
      color: #fff; }
    .call_to_action_area_7 .boxed_btn.boxed_btn.alt {
      background: rgba(0, 0, 0, 0.3);
      color: #fff; }
      .call_to_action_area_7 .boxed_btn.boxed_btn.alt:hover {
        background: #fff;
        color: #191b41; }

.call_to_action_area_8 {
  color: #fff;
  background: -webkit-linear-gradient(top, #010094 0%, #1f003c 100%);
  background: -o-linear-gradient(bottom, #010094 0%, #1f003c 100%);
  background: -moz-linear-gradient(to bottom, #010094 0%, #1f003c 100%);
  background: linear-gradient(to bottom, #010094 0%, #1f003c 100%);
  position: relative;
  z-index: 1; }
  .call_to_action_area_8 h4 {
    font-weight: 500;
    font-weight: 400;
    font-family: 'Fira Sans', sans-serif;
    font-size: 16px;
    margin-bottom: 15px; }
  .call_to_action_area_8 h3 {
    font-size: 36px;
    text-transform: uppercase;
    margin-bottom: 30px;
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif; }
  .call_to_action_area_8 p {
    line-height: 2;
    font-size: 14px;
    font-weight: 400;
    font-family: 'Fira Sans', sans-serif;
    margin-bottom: 45px; }
  .call_to_action_area_8 .boxed_btn {
    background: #fff;
    padding: 15px 30px;
    font-size: 16px;
    text-transform: uppercase;
    color: #191b41;
    margin: 0 7px;
    border-radius: 5px;
    display: inline-block;
    font-weight: 500;
    font-family: 'Fira Sans', sans-serif;
    -webkit-transition: all 0.5s ease-in-out;
    -moz-transition: all 0.5s ease-in-out;
    -ms-transition: all 0.5s ease-in-out;
    -o-transition: all 0.5s ease-in-out;
    transition: all 0.5s ease-in-out; }
    .call_to_action_area_8 .boxed_btn:hover {
      background: rgba(0, 0, 0, 0.3);
      color: #fff; }
    .call_to_action_area_8 .boxed_btn.boxed_btn.alt {
      background: rgba(0, 0, 0, 0.3);
      color: #fff; }
      .call_to_action_area_8 .boxed_btn.boxed_btn.alt:hover {
        background: #fff;
        color: #191b41; }

@media only screen and (min-width: 992px) and (max-width: 1200px) {
  .call_to_action_area .ct_action {
    padding-right: 50px; }
    .call_to_action_area .ct_action h3 {
      font-size: 24px; }
    .call_to_action_area .ct_action p {
      font-size: 14px; }
  .call_to_action_area .boxed_btn {
    font-size: 14px;
    padding: 12px 22px; }

  .call_to_action_area_2 {
    background: #182dcc; }
    .call_to_action_area_2 .ct_action i {
      font-size: 40px;
      left: 25px; }
    .call_to_action_area_2 .ct_action h4 {
      font-size: 16px; }
    .call_to_action_area_2 .ct_action h3 {
      font-size: 20px; }

  .call_to_action_area_3 .ct_wrapper .ct_action {
    max-width: 50%; } }
@media only screen and (min-width: 768px) and (max-width: 991px) {
  .call_to_action_area .ct_wrapper .ct_action h3 {
    font-size: 24px; }
  .call_to_action_area .ct_wrapper .ct_action p {
    font-size: 14px; }
  .call_to_action_area .boxed_btn {
    font-size: 14px;
    padding: 12px 22px; }

  .call_to_action_area_2 .ct_action {
    padding: 20px;
    padding-left: 50px; }
    .call_to_action_area_2 .ct_action i {
      font-size: 36px;
      left: 20px; }
    .call_to_action_area_2 .ct_action h4 {
      font-size: 14px; }
    .call_to_action_area_2 .ct_action h3 {
      font-size: 16px; }
  .call_to_action_area_2 .mail_subscribe {
    padding: 20px 0; }
    .call_to_action_area_2 .mail_subscribe form input {
      font-size: 14px;
      padding: 8px;
      margin-left: 15px;
      width: 70%; }
    .call_to_action_area_2 .mail_subscribe button i {
      font-size: 20px; }

  .call_to_action_area_3 .ct_wrapper .ct_action {
    text-align: center;
    font-size: 28px; }
  .call_to_action_area_3 .ct_wrapper .low_price span {
    font-size: 36px; }
  .call_to_action_area_3 .ct_wrapper .boxed_btn {
    margin-top: 20px;
    font-size: 14px;
    padding: 10px 20px;
    display: inline-block; }

  .call_to_action_area_4 h4 {
    margin-bottom: 10px; }
  .call_to_action_area_4 h3 {
    font-size: 28px;
    margin-bottom: 25px; }
  .call_to_action_area_4 p {
    line-height: 1.7;
    margin-bottom: 35px; }
  .call_to_action_area_4 .boxed_btn {
    padding: 10px 20px; }

  .call_to_action_area_5 h4 {
    margin-bottom: 10px; }
  .call_to_action_area_5 h3 {
    font-size: 28px;
    margin-bottom: 25px; }
  .call_to_action_area_5 p {
    line-height: 1.7;
    margin-bottom: 35px; }
  .call_to_action_area_5 .boxed_btn {
    padding: 10px 20px; }

  .call_to_action_area_6 h4 {
    margin-bottom: 10px; }
  .call_to_action_area_6 h3 {
    font-size: 28px;
    margin-bottom: 25px; }
  .call_to_action_area_6 p {
    line-height: 1.7;
    margin-bottom: 35px; }
  .call_to_action_area_6 .boxed_btn {
    padding: 10px 20px; }

  .call_to_action_area_7 h4 {
    margin-bottom: 10px; }
  .call_to_action_area_7 h3 {
    font-size: 28px;
    margin-bottom: 25px; }
  .call_to_action_area_7 p {
    line-height: 1.7;
    margin-bottom: 35px; }
  .call_to_action_area_7 .boxed_btn {
    padding: 10px 20px; }

  .call_to_action_area_8 h4 {
    margin-bottom: 10px; }
  .call_to_action_area_8 h3 {
    font-size: 28px;
    margin-bottom: 25px; }
  .call_to_action_area_8 p {
    line-height: 1.7;
    margin-bottom: 35px; }
  .call_to_action_area_8 .boxed_btn {
    padding: 10px 20px; } }
@media (max-width: 767px) {
  .call_to_action_area .ct_wrapper {
    min-height: 170px; }
    .call_to_action_area .ct_wrapper .ct_action {
      text-align: center; }
      .call_to_action_area .ct_wrapper .ct_action h3 {
        font-size: 18px; }
      .call_to_action_area .ct_wrapper .ct_action p {
        font-size: 14px; }
  .call_to_action_area .boxed_btn {
    margin: auto;
    margin-bottom: 20px;
    padding: 12px 22px;
    font-size: 14px; }

  .call_to_action_area_2 .mail_subscribe:after {
    left: -30%; }

  .call_to_action_area_3 .ct_wrapper .ct_action {
    text-align: center;
    font-size: 28px; }
  .call_to_action_area_3 .ct_wrapper .low_price span {
    font-size: 36px; }
  .call_to_action_area_3 .ct_wrapper .boxed_btn {
    margin-top: 20px;
    font-size: 14px;
    padding: 10px 20px;
    display: inline-block; }

  .call_to_action_area_4 h4 {
    margin-bottom: 5px;
    font-size: 14px; }
  .call_to_action_area_4 h3 {
    font-size: 24px;
    margin-bottom: 20px; }
  .call_to_action_area_4 p {
    line-height: 1.5;
    margin-bottom: 25px; }
  .call_to_action_area_4 .boxed_btn {
    padding: 10px 15px;
    font-size: 14px; }

  .call_to_action_area_5 h4 {
    margin-bottom: 5px;
    font-size: 14px; }
  .call_to_action_area_5 h3 {
    font-size: 24px;
    margin-bottom: 20px; }
  .call_to_action_area_5 p {
    line-height: 1.5;
    margin-bottom: 25px; }
  .call_to_action_area_5 .boxed_btn {
    padding: 10px 15px;
    font-size: 14px; }

  .call_to_action_area_6 h4 {
    margin-bottom: 5px;
    font-size: 14px; }
  .call_to_action_area_6 h3 {
    font-size: 24px;
    margin-bottom: 20px; }
  .call_to_action_area_6 p {
    line-height: 1.5;
    margin-bottom: 25px; }
  .call_to_action_area_6 .boxed_btn {
    padding: 10px 15px;
    font-size: 14px; }

  .call_to_action_area_7 h4 {
    margin-bottom: 5px;
    font-size: 14px; }
  .call_to_action_area_7 h3 {
    font-size: 24px;
    margin-bottom: 20px; }
  .call_to_action_area_7 p {
    line-height: 1.5;
    margin-bottom: 25px; }
  .call_to_action_area_7 .boxed_btn {
    padding: 10px 15px;
    font-size: 14px; }

  .call_to_action_area_8 h4 {
    margin-bottom: 5px;
    font-size: 14px; }
  .call_to_action_area_8 h3 {
    font-size: 24px;
    margin-bottom: 20px; }
  .call_to_action_area_8 p {
    line-height: 1.5;
    margin-bottom: 25px; }
  .call_to_action_area_8 .boxed_btn {
    padding: 10px 15px;
    font-size: 14px; } }
@media only screen and (min-width: 480px) and (max-width: 767px) {
  .call_to_action_area .boxed_btn {
    margin-bottom: 30px; } }
.select_month_wrapper {
  position: relative;
  z-index: 8;
  width: 100%;
  height: 60px;
  border-radius: 8px;
  margin-bottom: 110px; }
  .select_month_wrapper #chose_plan {
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out;
    width: 100%;
    height: 100%;
    position: absolute;
    left: 0;
    border-radius: 6px;
    top: 0;
    margin: 0;
    border: none;
    background: #fff;
    text-shadow: 0 0 0 #304e73;
    color: transparent;
    padding: 12px 20px;
    cursor: pointer;
    line-height: 36px;
    font-size: 18px;
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif;
    -webkit-box-shadow: 0px 5px 10px 0px rgba(0, 0, 0, 0.1);
    -moz-box-shadow: 0px 5px 10px 0px rgba(0, 0, 0, 0.1);
    box-shadow: 0px 5px 10px 0px rgba(0, 0, 0, 0.1); }
  .select_month_wrapper .option_list {
    position: absolute;
    width: 100%;
    overflow: hidden;
    border-radius: 15px;
    top: 100%;
    display: none;
    opacity: 0;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
    .select_month_wrapper .option_list li {
      font-weight: 400;
      font-family: 'Fira Sans', sans-serif;
      font-size: 16px;
      line-height: 30px;
      color: #0cbafc;
      background: #fff;
      cursor: pointer;
      text-align: left;
      margin: 0;
      padding: 5px 15px;
      -webkit-transition: all 0.3s ease-in-out;
      -moz-transition: all 0.3s ease-in-out;
      -ms-transition: all 0.3s ease-in-out;
      -o-transition: all 0.3s ease-in-out;
      transition: all 0.3s ease-in-out; }
      .select_month_wrapper .option_list li:hover {
        color: #fff;
        background: #0cbafc; }
    .select_month_wrapper .option_list.dropon {
      display: block !important;
      opacity: 1;
      top: 130%;
      -webkit-box-shadow: 2.347px 4.415px 20px 0px rgba(23, 6, 125, 0.3);
      -moz-box-shadow: 2.347px 4.415px 20px 0px rgba(23, 6, 125, 0.3);
      box-shadow: 2.347px 4.415px 20px 0px rgba(23, 6, 125, 0.3); }
  .select_month_wrapper .arrow {
    position: absolute;
    z-index: 19;
    left: auto;
    right: 9%;
    top: calc(50% - 8px);
    width: 0px;
    height: 0;
    border-left: 8px solid transparent;
    border-right: 8px solid transparent;
    border-top: 12px solid #fff;
    cursor: pointer;
    margin: 0;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out;
    transform: scaleY(1) rotate(0deg); }
    .select_month_wrapper .arrow.reverce {
      transform: scaleY(-1) rotate(0deg); }
  .select_month_wrapper .split {
    position: absolute;
    z-index: 17;
    background: #2cd63c;
    width: 24%;
    height: 100%;
    left: auto;
    border-radius: 0 6px 6px 0;
    top: 0px;
    right: 0px;
    cursor: pointer; }

.tab_wrapper {
  position: relative;
  width: 100%; }
  .tab_wrapper .tab_1, .tab_wrapper .tab_2 {
    position: absolute;
    width: 100%;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
  .tab_wrapper .tab_2 {
    opacity: 0; }

.packege_pricing_area {
  background: -webkit-linear-gradient(left, #13128c 0%, #480884 100%);
  background: -o-linear-gradient(right, #13128c 0%, #480884 100%);
  background: -moz-linear-gradient(to right, #13128c 0%, #480884 100%);
  background: linear-gradient(to right, #13128c 0%, #480884 100%);
  position: relative; }
  .packege_pricing_area .tab_wrapper {
    height: 525px; }
  .packege_pricing_area .single_pakege {
    text-align: center;
    background: #fff;
    position: relative;
    top: 0;
    z-index: 1;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
    .packege_pricing_area .single_pakege .sticker {
      position: absolute;
      width: auto;
      font-size: 16px;
      left: 50%;
      transform: translateX(-50%);
      top: -15px;
      border-radius: 3px;
      color: #fff;
      margin: 0;
      padding: 10px 30px;
      background: #304e73;
      font-weight: 500;
      font-family: 'Fira Sans', sans-serif;
      -webkit-transition: all 0.3s ease-in-out;
      -moz-transition: all 0.3s ease-in-out;
      -ms-transition: all 0.3s ease-in-out;
      -o-transition: all 0.3s ease-in-out;
      transition: all 0.3s ease-in-out; }
      .packege_pricing_area .single_pakege .sticker.yellow_color {
        background: #ffcc02; }
    .packege_pricing_area .single_pakege .pakege_icon {
      margin-top: 40px;
      display: inline-block;
      width: 60px;
      height: 60px; }
    .packege_pricing_area .single_pakege h2 {
      font-size: 48px;
      font-weight: 700;
      font-family: 'Fira Sans', sans-serif;
      color: #304e73;
      margin-bottom: 35px;
      margin-top: 12px; }
    .packege_pricing_area .single_pakege ul li {
      font-size: 16px;
      color: #838bab;
      margin-bottom: 25px; }
    .packege_pricing_area .single_pakege .boxed_btn {
      background: -webkit-linear-gradient(left, #0acffe 0%, #182dee 100%);
      background: -o-linear-gradient(right, #0acffe 0%, #182dee 100%);
      background: -moz-linear-gradient(to right, #0acffe 0%, #182dee 100%);
      background: linear-gradient(to right, #0acffe 0%, #182dee 100%);
      padding: 12px 24px;
      border-radius: 5px;
      margin-bottom: 30px; }
      .packege_pricing_area .single_pakege .boxed_btn:after {
        background: #2cd63c;
        border-radius: 5px; }
    .packege_pricing_area .single_pakege:hover {
      top: -10px; }

.packege_pricing_area_2 .tab_wrapper {
  height: 580px; }
.packege_pricing_area_2 .select_month_wrapper {
  margin: 0px auto;
  width: 75%;
  margin-bottom: 60px; }
  .packege_pricing_area_2 .select_month_wrapper #chose_plan {
    border-radius: 30px; }
  .packege_pricing_area_2 .select_month_wrapper .split {
    border-radius: 0 30px 30px 30px; }
.packege_pricing_area_2 .single_pakege_2 {
  text-align: center;
  position: relative;
  z-index: 1;
  padding: 0px 65px;
  border-radius: 40px;
  top: 0;
  background: #fff;
  background-image: url("../img/pricing/pricing_footer.png");
  background-repeat: no-repeat;
  background-size: contain;
  background-position: center bottom;
  -webkit-transition: all 0.3s ease-in-out;
  -moz-transition: all 0.3s ease-in-out;
  -ms-transition: all 0.3s ease-in-out;
  -o-transition: all 0.3s ease-in-out;
  transition: all 0.3s ease-in-out; }
  .packege_pricing_area_2 .single_pakege_2:hover {
    top: -10px; }
  .packege_pricing_area_2 .single_pakege_2 .sticker {
    font-size: 16px;
    color: #0cbafc;
    text-transform: uppercase;
    background: -webkit-linear-gradient(bottom, #1317d1 0%, #07164e 100%);
    background: -o-linear-gradient(top, #1317d1 0%, #07164e 100%);
    background: -moz-linear-gradient(to top, #1317d1 0%, #07164e 100%);
    background: linear-gradient(to top, #1317d1 0%, #07164e 100%);
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif;
    top: 0;
    width: 150px;
    padding: 20px 10px 100px;
    border-radius: 0 0 100px 100px;
    left: 50%;
    position: absolute;
    transform: translateX(-50%); }
  .packege_pricing_area_2 .single_pakege_2 .pakege_service_list li {
    margin-bottom: 15px;
    padding: 5px 0;
    color: #363bff; }
  .packege_pricing_area_2 .single_pakege_2 .pakege_service_list li:nth-child(2n+1) {
    background: -webkit-linear-gradient(left, rgba(18, 23, 201, 0) 0%, rgba(19, 174, 255, 0.15) 47%, rgba(19, 172, 255, 0.14902) 48%, rgba(24, 45, 238, 0) 100%);
    background: -o-linear-gradient(left, rgba(18, 23, 201, 0) 0%, rgba(19, 174, 255, 0.15) 47%, rgba(19, 172, 255, 0.14902) 48%, rgba(24, 45, 238, 0) 100%);
    background: linear-gradient(to right, rgba(18, 23, 201, 0) 0%, rgba(19, 174, 255, 0.15) 47%, rgba(19, 172, 255, 0.14902) 48%, rgba(24, 45, 238, 0) 100%); }
  .packege_pricing_area_2 .single_pakege_2 h2 {
    font-size: 48px;
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif;
    position: relative;
    padding: 50px 0 65px;
    margin: 0px;
    color: #fff; }
  .packege_pricing_area_2 .single_pakege_2 .boxed_btn {
    background: #fff;
    border-radius: 30px;
    margin: 90px 0 30px;
    padding: 12px 24px;
    color: #304e73;
    border: 2px solid #fff; }
    .packege_pricing_area_2 .single_pakege_2 .boxed_btn:after {
      border-radius: 20px;
      background: rgba(7, 8, 45, 0.5); }
    .packege_pricing_area_2 .single_pakege_2 .boxed_btn:hover {
      color: #fff;
      background: transparent; }

.packege_pricing_area_3 .tab_wrapper {
  height: 585px; }
.packege_pricing_area_3 .single_pakege_3 {
  position: relative;
  z-index: 1;
  text-align: center;
  padding: 0px 65px;
  overflow: hidden;
  top: 0;
  background: #fff;
  background-position: center bottom;
  -webkit-transition: all 0.3s ease-in-out;
  -moz-transition: all 0.3s ease-in-out;
  -ms-transition: all 0.3s ease-in-out;
  -o-transition: all 0.3s ease-in-out;
  transition: all 0.3s ease-in-out; }
  .packege_pricing_area_3 .single_pakege_3:before, .packege_pricing_area_3 .single_pakege_3:after {
    content: '';
    left: 0;
    position: absolute;
    width: 100%;
    height: 155px; }
  .packege_pricing_area_3 .single_pakege_3:after {
    z-index: -1;
    background: #1e38ff;
    bottom: -25px;
    transform: skewy(5deg); }
  .packege_pricing_area_3 .single_pakege_3:before {
    background: rgba(30, 56, 255, 0.41);
    z-index: -2;
    bottom: -30px;
    transform: skewY(-7deg); }
  .packege_pricing_area_3 .single_pakege_3:hover {
    top: -10px; }
  .packege_pricing_area_3 .single_pakege_3 .sticker {
    font-size: 16px;
    color: #fff;
    text-transform: uppercase;
    background: #1b38ff;
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif;
    top: 0;
    width: 150px;
    padding: 20px 10px 100px;
    border-radius: 0 0 100px 100px;
    left: 50%;
    position: absolute;
    transform: translateX(-50%); }
  .packege_pricing_area_3 .single_pakege_3 .pakege_service_list {
    text-align: center; }
    .packege_pricing_area_3 .single_pakege_3 .pakege_service_list li {
      margin-bottom: 15px;
      padding: 5px 0;
      color: #363bff; }
    .packege_pricing_area_3 .single_pakege_3 .pakege_service_list li:nth-child(2n+1) {
      background: -webkit-linear-gradient(left, rgba(18, 23, 201, 0) 0%, rgba(19, 174, 255, 0.15) 47%, rgba(19, 172, 255, 0.14902) 48%, rgba(24, 45, 238, 0) 100%);
      background: -o-linear-gradient(left, rgba(18, 23, 201, 0) 0%, rgba(19, 174, 255, 0.15) 47%, rgba(19, 172, 255, 0.14902) 48%, rgba(24, 45, 238, 0) 100%);
      background: linear-gradient(to right, rgba(18, 23, 201, 0) 0%, rgba(19, 174, 255, 0.15) 47%, rgba(19, 172, 255, 0.14902) 48%, rgba(24, 45, 238, 0) 100%); }
  .packege_pricing_area_3 .single_pakege_3 h2 {
    position: relative;
    padding: 50px 0 65px;
    margin: 0px;
    z-index: 0;
    font-size: 48px;
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif;
    text-align: center;
    color: #fff; }
  .packege_pricing_area_3 .single_pakege_3 .boxed_btn {
    background: #fff;
    font-size: 16px;
    font-weight: 500;
    font-family: 'Fira Sans', sans-serif;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out;
    padding: 15px 30px;
    margin: 90px auto 30px;
    display: inline-block;
    color: #304e73; }
    .packege_pricing_area_3 .single_pakege_3 .boxed_btn:hover {
      color: #fff;
      background: #182dcc; }

.packege_pricing_area_4 {
  background: transparent; }
  .packege_pricing_area_4 .wrapper {
    margin: 0px auto 100px;
    display: inline-block;
    background: #fff;
    border: 1px solid #5117e2;
    padding: 5px;
    border-radius: 60px;
    overflow: hidden; }
  .packege_pricing_area_4 .toggle_radio {
    position: relative;
    background: #fff;
    overflow: hidden;
    padding: 0 !important;
    position: relative; }
  .packege_pricing_area_4 .toggle_radio > * {
    float: left; }
  .packege_pricing_area_4 .toggle_radio input[type=radio] {
    display: none; }
  .packege_pricing_area_4 .toggle_radio label {
    font-size: 24px;
    color: #304e73;
    position: relative;
    z-index: 0;
    display: block;
    font-weight: 500;
    font-family: 'Fira Sans', sans-serif;
    padding: 20px 55px;
    border-radius: 50px;
    cursor: pointer;
    z-index: 1;
    text-align: center;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
  .packege_pricing_area_4 .toggle_option_slider {
    width: 50%;
    height: 100%;
    position: absolute;
    top: 0px;
    left: 0px;
    right: auto;
    background: -webkit-linear-gradient(left, #5317e6 0%, #07164e 100%);
    background: -o-linear-gradient(right, #5317e6 0%, #07164e 100%);
    background: -moz-linear-gradient(to right, #5317e6 0%, #07164e 100%);
    background: linear-gradient(to right, #5317e6 0%, #07164e 100%);
    -webkit-border-radius: 50px;
    -moz-border-radius: 50px;
    border-radius: 50px;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
  .packege_pricing_area_4 #first_toggle:checked + label {
    color: #fff; }
  .packege_pricing_area_4 #first_toggle:checked ~ .toggle_option_slider {
    left: 0px;
    right: auto; }
  .packege_pricing_area_4 #second_toggle:checked + label {
    color: #fff; }
  .packege_pricing_area_4 #second_toggle:checked ~ .toggle_option_slider {
    left: 50%;
    right: auto; }

.tab_wrapper {
  height: 780px; }

.item_list.single_pakege_4, .item_list.single_pakege_5, .item_list.single_pakege_6, .item_list.single_pakege_7, .item_list.single_pakege_8 {
  box-shadow: none; }
  .item_list.single_pakege_4:hover, .item_list.single_pakege_5:hover, .item_list.single_pakege_6:hover, .item_list.single_pakege_7:hover, .item_list.single_pakege_8:hover {
    box-shadow: none; }
  .item_list.single_pakege_4 .pricing_top, .item_list.single_pakege_5 .pricing_top, .item_list.single_pakege_6 .pricing_top, .item_list.single_pakege_7 .pricing_top, .item_list.single_pakege_8 .pricing_top {
    background: transparent;
    position: relative;
    z-index: 1; }
    .item_list.single_pakege_4 .pricing_top:after, .item_list.single_pakege_5 .pricing_top:after, .item_list.single_pakege_6 .pricing_top:after, .item_list.single_pakege_7 .pricing_top:after, .item_list.single_pakege_8 .pricing_top:after {
      content: '';
      position: absolute;
      z-index: 2;
      height: 12px;
      background: #304e73;
      width: 100%;
      left: 0;
      bottom: 0; }
  .item_list.single_pakege_4 ul li, .item_list.single_pakege_5 ul li, .item_list.single_pakege_6 ul li, .item_list.single_pakege_7 ul li, .item_list.single_pakege_8 ul li {
    font-weight: 500;
    font-family: 'Fira Sans', sans-serif;
    font-size: 16px;
    background: #363bff;
    color: #fff; }

.single_pakege_4, .single_pakege_5, .single_pakege_6, .single_pakege_7, .single_pakege_8 {
  text-align: center;
  position: relative;
  z-index: 1;
  top: 0;
  border-radius: 25px;
  -webkit-transition: all 0.3s ease-in-out;
  -moz-transition: all 0.3s ease-in-out;
  -ms-transition: all 0.3s ease-in-out;
  -o-transition: all 0.3s ease-in-out;
  transition: all 0.3s ease-in-out; }
  .single_pakege_4 .pricing_top, .single_pakege_5 .pricing_top, .single_pakege_6 .pricing_top, .single_pakege_7 .pricing_top, .single_pakege_8 .pricing_top {
    height: 190px;
    border-radius: 24px 24px 0 0;
    overflow: hidden;
    background: #0cbafc; }
    .single_pakege_4 .pricing_top .plan_titel, .single_pakege_5 .pricing_top .plan_titel, .single_pakege_6 .pricing_top .plan_titel, .single_pakege_7 .pricing_top .plan_titel, .single_pakege_8 .pricing_top .plan_titel {
      font-size: 22px;
      color: #fff;
      padding: 20px 0;
      background: rgba(0, 0, 0, 0.1);
      font-weight: 500;
      font-family: 'Fira Sans', sans-serif;
      -webkit-transition: all 0.3s ease-in-out;
      -moz-transition: all 0.3s ease-in-out;
      -ms-transition: all 0.3s ease-in-out;
      -o-transition: all 0.3s ease-in-out;
      transition: all 0.3s ease-in-out; }
    .single_pakege_4 .pricing_top .price, .single_pakege_5 .pricing_top .price, .single_pakege_6 .pricing_top .price, .single_pakege_7 .pricing_top .price, .single_pakege_8 .pricing_top .price {
      font-size: 48px;
      font-weight: 700;
      font-family: 'Fira Sans', sans-serif;
      color: #fff;
      margin-top: 25px; }
      .single_pakege_4 .pricing_top .price span, .single_pakege_5 .pricing_top .price span, .single_pakege_6 .pricing_top .price span, .single_pakege_7 .pricing_top .price span, .single_pakege_8 .pricing_top .price span {
        font-size: 16px;
        display: block;
        text-transform: uppercase; }
  .single_pakege_4 ul, .single_pakege_5 ul, .single_pakege_6 ul, .single_pakege_7 ul, .single_pakege_8 ul {
    position: relative; }
    .single_pakege_4 ul:after, .single_pakege_5 ul:after, .single_pakege_6 ul:after, .single_pakege_7 ul:after, .single_pakege_8 ul:after {
      position: absolute;
      left: 0;
      bottom: 0;
      width: calc(100% + 30px);
      content: '';
      background: #fff;
      height: 100%; }
    .single_pakege_4 ul li, .single_pakege_5 ul li, .single_pakege_6 ul li, .single_pakege_7 ul li, .single_pakege_8 ul li {
      background: #fff;
      font-size: 16px;
      color: #838bab;
      position: relative;
      z-index: 1;
      padding: 14px 0; }
      .single_pakege_4 ul li i, .single_pakege_5 ul li i, .single_pakege_6 ul li i, .single_pakege_7 ul li i, .single_pakege_8 ul li i {
        font-size: 14px;
        font-weight: 900;
        color: #2cd63c; }
        .single_pakege_4 ul li i.unchecked, .single_pakege_5 ul li i.unchecked, .single_pakege_6 ul li i.unchecked, .single_pakege_7 ul li i.unchecked, .single_pakege_8 ul li i.unchecked {
          opacity: .5; }
      .single_pakege_4 ul li:after, .single_pakege_5 ul li:after, .single_pakege_6 ul li:after, .single_pakege_7 ul li:after, .single_pakege_8 ul li:after {
        position: absolute;
        left: 0;
        bottom: 0;
        width: 100%;
        content: '';
        background: #d6f3fe;
        height: 1px;
        z-index: -1; }
  .single_pakege_4 .pricing_footer, .single_pakege_5 .pricing_footer, .single_pakege_6 .pricing_footer, .single_pakege_7 .pricing_footer, .single_pakege_8 .pricing_footer {
    background: #fff;
    border-radius: 0 0 24px 24px; }
    .single_pakege_4 .pricing_footer .boxed_btn, .single_pakege_5 .pricing_footer .boxed_btn, .single_pakege_6 .pricing_footer .boxed_btn, .single_pakege_7 .pricing_footer .boxed_btn, .single_pakege_8 .pricing_footer .boxed_btn {
      padding: 13px 35px;
      color: #304e73;
      font-size: 16px;
      border-radius: 50px;
      margin-top: 35px;
      margin-bottom: 25px;
      font-weight: 400;
      font-family: 'Fira Sans', sans-serif;
      -webkit-transition: all 0.3s ease-in-out;
      -moz-transition: all 0.3s ease-in-out;
      -ms-transition: all 0.3s ease-in-out;
      -o-transition: all 0.3s ease-in-out;
      transition: all 0.3s ease-in-out;
      display: inline-block;
      border: 2px solid #5117e2; }
      .single_pakege_4 .pricing_footer .boxed_btn:after, .single_pakege_5 .pricing_footer .boxed_btn:after, .single_pakege_6 .pricing_footer .boxed_btn:after, .single_pakege_7 .pricing_footer .boxed_btn:after, .single_pakege_8 .pricing_footer .boxed_btn:after {
        background: -webkit-linear-gradient(bottom, #5317e6 0%, #07164e 100%);
        background: -o-linear-gradient(top, #5317e6 0%, #07164e 100%);
        background: -moz-linear-gradient(to top, #5317e6 0%, #07164e 100%);
        background: linear-gradient(to top, #5317e6 0%, #07164e 100%);
        border-radius: 50px; }
      .single_pakege_4 .pricing_footer .boxed_btn:hover, .single_pakege_5 .pricing_footer .boxed_btn:hover, .single_pakege_6 .pricing_footer .boxed_btn:hover, .single_pakege_7 .pricing_footer .boxed_btn:hover, .single_pakege_8 .pricing_footer .boxed_btn:hover {
        color: #fff;
        border: 2px solid #fff; }

.packege_pricing_area_4 .single_pakege_4 .pricing_footer .boxed_btn, .packege_pricing_area_4 .single_pakege_5 .pricing_footer .boxed_btn, .packege_pricing_area_4 .single_pakege_6 .pricing_footer .boxed_btn, .packege_pricing_area_4 .single_pakege_7 .pricing_footer .boxed_btn, .packege_pricing_area_4 .single_pakege_8 .pricing_footer .boxed_btn {
  background: #fff; }
  .packege_pricing_area_4 .single_pakege_4 .pricing_footer .boxed_btn:hover, .packege_pricing_area_4 .single_pakege_5 .pricing_footer .boxed_btn:hover, .packege_pricing_area_4 .single_pakege_6 .pricing_footer .boxed_btn:hover, .packege_pricing_area_4 .single_pakege_7 .pricing_footer .boxed_btn:hover, .packege_pricing_area_4 .single_pakege_8 .pricing_footer .boxed_btn:hover {
    background: -webkit-linear-gradient(bottom, #5317e6 0%, #07164e 100%);
    background: -o-linear-gradient(top, #5317e6 0%, #07164e 100%);
    background: -moz-linear-gradient(to top, #5317e6 0%, #07164e 100%);
    background: linear-gradient(to top, #5317e6 0%, #07164e 100%); }

.single_pakege_4.prof .pricing_top, .prof.single_pakege_5 .pricing_top, .prof.single_pakege_6 .pricing_top, .prof.single_pakege_7 .pricing_top, .prof.single_pakege_8 .pricing_top {
  background: #2cd63c; }
.single_pakege_4.prof ul, .prof.single_pakege_5 ul, .prof.single_pakege_6 ul, .prof.single_pakege_7 ul, .prof.single_pakege_8 ul {
  position: relative; }
  .single_pakege_4.prof ul:after, .prof.single_pakege_5 ul:after, .prof.single_pakege_6 ul:after, .prof.single_pakege_7 ul:after, .prof.single_pakege_8 ul:after {
    width: calc(100% + 30px); }

.single_pakege_4.advance .pricing_top, .advance.single_pakege_5 .pricing_top, .advance.single_pakege_6 .pricing_top, .advance.single_pakege_7 .pricing_top, .advance.single_pakege_8 .pricing_top {
  background: #ffcc02; }
.single_pakege_4.advance ul, .advance.single_pakege_5 ul, .advance.single_pakege_6 ul, .advance.single_pakege_7 ul, .advance.single_pakege_8 ul {
  position: relative; }
  .single_pakege_4.advance ul:after, .advance.single_pakege_5 ul:after, .advance.single_pakege_6 ul:after, .advance.single_pakege_7 ul:after, .advance.single_pakege_8 ul:after {
    width: 100%; }
  .single_pakege_4.advance ul li:after, .advance.single_pakege_5 ul li:after, .advance.single_pakege_6 ul li:after, .advance.single_pakege_7 ul li:after, .advance.single_pakege_8 ul li:after {
    width: 100%; }

.packege_pricing_area_5, .packege_pricing_area_6, .packege_pricing_area_7, .packege_pricing_area_8 {
  background: transparent;
  position: relative;
  z-index: 1; }
  .packege_pricing_area_5:after, .packege_pricing_area_6:after, .packege_pricing_area_7:after, .packege_pricing_area_8:after {
    position: absolute;
    left: auto;
    height: 100%;
    right: -1%;
    top: calc(50% - 235px);
    width: 17%;
    content: '';
    z-index: -1;
    background-repeat: no-repeat;
    background-image: url("../img/pricing/pricing_bg_2.png"); }
  .packege_pricing_area_5 .container.tab_wrapper, .packege_pricing_area_6 .container.tab_wrapper, .packege_pricing_area_7 .container.tab_wrapper, .packege_pricing_area_8 .container.tab_wrapper {
    border-radius: 20px;
    overflow: hidden;
    box-shadow: 0px 8px 16px 0px rgba(0, 0, 0, 0.1); }
    .packege_pricing_area_5 .container.tab_wrapper .col-lg-3, .packege_pricing_area_6 .container.tab_wrapper .col-lg-3, .packege_pricing_area_7 .container.tab_wrapper .col-lg-3, .packege_pricing_area_8 .container.tab_wrapper .col-lg-3 {
      padding: 0; }

.packege_pricing_area_5 .pricing_tabling, .packege_pricing_area_6 .pricing_tabling, .packege_pricing_area_7 .pricing_tabling, .packege_pricing_area_8 .pricing_tabling {
  overflow: visible;
  position: absolute;
  z-index: 11;
  height: 190px;
  width: 90%; }
  .packege_pricing_area_5 .pricing_tabling:after, .packege_pricing_area_6 .pricing_tabling:after, .packege_pricing_area_7 .pricing_tabling:after, .packege_pricing_area_8 .pricing_tabling:after {
    height: 0; }
  .packege_pricing_area_5 .pricing_tabling .select_month_wrapper, .packege_pricing_area_6 .pricing_tabling .select_month_wrapper, .packege_pricing_area_7 .pricing_tabling .select_month_wrapper, .packege_pricing_area_8 .pricing_tabling .select_month_wrapper {
    margin-bottom: 10px;
    width: 70%;
    height: 40px;
    border-radius: 5px;
    border: 1px solid #fff;
    background: transparent; }
    .packege_pricing_area_5 .pricing_tabling .select_month_wrapper #chose_plan, .packege_pricing_area_6 .pricing_tabling .select_month_wrapper #chose_plan, .packege_pricing_area_7 .pricing_tabling .select_month_wrapper #chose_plan, .packege_pricing_area_8 .pricing_tabling .select_month_wrapper #chose_plan {
      text-shadow: 0 0 0 #fff;
      background: rgba(0, 0, 0, 0.3);
      font-size: 12px; }
    .packege_pricing_area_5 .pricing_tabling .select_month_wrapper .arrow, .packege_pricing_area_6 .pricing_tabling .select_month_wrapper .arrow, .packege_pricing_area_7 .pricing_tabling .select_month_wrapper .arrow, .packege_pricing_area_8 .pricing_tabling .select_month_wrapper .arrow {
      top: calc(50% - 6px);
      border-left: 6px solid transparent;
      border-right: 6px solid transparent;
      border-top: 9px solid #363bff; }
    .packege_pricing_area_5 .pricing_tabling .select_month_wrapper .split, .packege_pricing_area_6 .pricing_tabling .select_month_wrapper .split, .packege_pricing_area_7 .pricing_tabling .select_month_wrapper .split, .packege_pricing_area_8 .pricing_tabling .select_month_wrapper .split {
      background: #fff;
      border-radius: 0; }
    .packege_pricing_area_5 .pricing_tabling .select_month_wrapper .option_list, .packege_pricing_area_6 .pricing_tabling .select_month_wrapper .option_list, .packege_pricing_area_7 .pricing_tabling .select_month_wrapper .option_list, .packege_pricing_area_8 .pricing_tabling .select_month_wrapper .option_list {
      border-radius: 7px; }
      .packege_pricing_area_5 .pricing_tabling .select_month_wrapper .option_list li, .packege_pricing_area_6 .pricing_tabling .select_month_wrapper .option_list li, .packege_pricing_area_7 .pricing_tabling .select_month_wrapper .option_list li, .packege_pricing_area_8 .pricing_tabling .select_month_wrapper .option_list li {
        color: #6a11cb; }
        .packege_pricing_area_5 .pricing_tabling .select_month_wrapper .option_list li:hover, .packege_pricing_area_6 .pricing_tabling .select_month_wrapper .option_list li:hover, .packege_pricing_area_7 .pricing_tabling .select_month_wrapper .option_list li:hover, .packege_pricing_area_8 .pricing_tabling .select_month_wrapper .option_list li:hover {
          background: #6a11cb;
          color: #fff; }
  .packege_pricing_area_5 .pricing_tabling h3, .packege_pricing_area_6 .pricing_tabling h3, .packege_pricing_area_7 .pricing_tabling h3, .packege_pricing_area_8 .pricing_tabling h3 {
    text-transform: uppercase;
    color: #fff;
    font-size: 18px; }

.single_pakege_5, .single_pakege_6, .single_pakege_7, .single_pakege_8 {
  border-radius: 0;
  box-shadow: none; }
  .single_pakege_5:hover, .single_pakege_6:hover, .single_pakege_7:hover, .single_pakege_8:hover {
    box-shadow: none; }
  .single_pakege_5 .pricing_top, .single_pakege_6 .pricing_top, .single_pakege_7 .pricing_top, .single_pakege_8 .pricing_top {
    border-radius: 0;
    background: #4940e2;
    position: relative;
    z-index: 1; }
    .single_pakege_5 .pricing_top:after, .single_pakege_6 .pricing_top:after, .single_pakege_7 .pricing_top:after, .single_pakege_8 .pricing_top:after {
      position: absolute;
      z-index: -1;
      width: 100%;
      height: 100%;
      left: 0;
      top: 0;
      content: '';
      background: rgba(0, 0, 0, 0.1); }
    .single_pakege_5 .pricing_top .plan_titel, .single_pakege_6 .pricing_top .plan_titel, .single_pakege_7 .pricing_top .plan_titel, .single_pakege_8 .pricing_top .plan_titel {
      padding: 0;
      background: none; }
    .single_pakege_5 .pricing_top .price, .single_pakege_6 .pricing_top .price, .single_pakege_7 .pricing_top .price, .single_pakege_8 .pricing_top .price {
      margin: 0; }
  .single_pakege_5 ul, .single_pakege_6 ul, .single_pakege_7 ul, .single_pakege_8 ul {
    z-index: 0; }
    .single_pakege_5 ul li, .single_pakege_6 ul li, .single_pakege_7 ul li, .single_pakege_8 ul li {
      border: 1px solid #d9f4ff;
      border-left: 0px;
      border-top: 0px; }
      .single_pakege_5 ul li:after, .single_pakege_6 ul li:after, .single_pakege_7 ul li:after, .single_pakege_8 ul li:after {
        height: 0; }
      .single_pakege_5 ul li:last-child, .single_pakege_6 ul li:last-child, .single_pakege_7 ul li:last-child, .single_pakege_8 ul li:last-child {
        border-bottom: 0px; }
  .single_pakege_5 .pricing_footer, .single_pakege_6 .pricing_footer, .single_pakege_7 .pricing_footer, .single_pakege_8 .pricing_footer {
    border-left: 1px solid #d9f4ff;
    height: 105px;
    overflow: hidden;
    border-radius: 0; }

.item_list.single_pakege_5, .item_list.single_pakege_6, .item_list.single_pakege_7, .item_list.single_pakege_8 {
  overflow: hidden; }
  .item_list.single_pakege_5 .pricing_top, .item_list.single_pakege_6 .pricing_top, .item_list.single_pakege_7 .pricing_top, .item_list.single_pakege_8 .pricing_top {
    height: 190px;
    background: #4940e2; }
    .item_list.single_pakege_5 .pricing_top:after, .item_list.single_pakege_6 .pricing_top:after, .item_list.single_pakege_7 .pricing_top:after, .item_list.single_pakege_8 .pricing_top:after {
      height: 0; }
  .item_list.single_pakege_5 ul li, .item_list.single_pakege_6 ul li, .item_list.single_pakege_7 ul li, .item_list.single_pakege_8 ul li {
    background: #fff;
    color: #363bff; }
  .item_list.single_pakege_5 .pricing_footer, .item_list.single_pakege_6 .pricing_footer, .item_list.single_pakege_7 .pricing_footer, .item_list.single_pakege_8 .pricing_footer {
    border-left: 0px; }

.packege_pricing_area_5 .single_pakege_5 .pricing_footer .boxed_btn, .packege_pricing_area_6 .single_pakege_5 .pricing_footer .boxed_btn, .packege_pricing_area_7 .single_pakege_5 .pricing_footer .boxed_btn, .packege_pricing_area_8 .single_pakege_5 .pricing_footer .boxed_btn, .packege_pricing_area_5 .single_pakege_6 .pricing_footer .boxed_btn, .packege_pricing_area_6 .single_pakege_6 .pricing_footer .boxed_btn, .packege_pricing_area_7 .single_pakege_6 .pricing_footer .boxed_btn, .packege_pricing_area_8 .single_pakege_6 .pricing_footer .boxed_btn, .packege_pricing_area_5 .single_pakege_7 .pricing_footer .boxed_btn, .packege_pricing_area_6 .single_pakege_7 .pricing_footer .boxed_btn, .packege_pricing_area_7 .single_pakege_7 .pricing_footer .boxed_btn, .packege_pricing_area_8 .single_pakege_7 .pricing_footer .boxed_btn, .packege_pricing_area_5 .single_pakege_8 .pricing_footer .boxed_btn, .packege_pricing_area_6 .single_pakege_8 .pricing_footer .boxed_btn, .packege_pricing_area_7 .single_pakege_8 .pricing_footer .boxed_btn, .packege_pricing_area_8 .single_pakege_8 .pricing_footer .boxed_btn {
  color: #fff;
  border: 0;
  background: -webkit-linear-gradient(bottom, #6a11cb 0%, #2575fc 100%);
  background: -o-linear-gradient(top, #6a11cb 0%, #2575fc 100%);
  background: -moz-linear-gradient(to top, #6a11cb 0%, #2575fc 100%);
  background: linear-gradient(to top, #6a11cb 0%, #2575fc 100%);
  border-radius: 5px; }
  .packege_pricing_area_5 .single_pakege_5 .pricing_footer .boxed_btn:after, .packege_pricing_area_6 .single_pakege_5 .pricing_footer .boxed_btn:after, .packege_pricing_area_7 .single_pakege_5 .pricing_footer .boxed_btn:after, .packege_pricing_area_8 .single_pakege_5 .pricing_footer .boxed_btn:after, .packege_pricing_area_5 .single_pakege_6 .pricing_footer .boxed_btn:after, .packege_pricing_area_6 .single_pakege_6 .pricing_footer .boxed_btn:after, .packege_pricing_area_7 .single_pakege_6 .pricing_footer .boxed_btn:after, .packege_pricing_area_8 .single_pakege_6 .pricing_footer .boxed_btn:after, .packege_pricing_area_5 .single_pakege_7 .pricing_footer .boxed_btn:after, .packege_pricing_area_6 .single_pakege_7 .pricing_footer .boxed_btn:after, .packege_pricing_area_7 .single_pakege_7 .pricing_footer .boxed_btn:after, .packege_pricing_area_8 .single_pakege_7 .pricing_footer .boxed_btn:after, .packege_pricing_area_5 .single_pakege_8 .pricing_footer .boxed_btn:after, .packege_pricing_area_6 .single_pakege_8 .pricing_footer .boxed_btn:after, .packege_pricing_area_7 .single_pakege_8 .pricing_footer .boxed_btn:after, .packege_pricing_area_8 .single_pakege_8 .pricing_footer .boxed_btn:after {
    background: #3a2085;
    border-radius: 5px; }
  .packege_pricing_area_5 .single_pakege_5 .pricing_footer .boxed_btn:hover, .packege_pricing_area_6 .single_pakege_5 .pricing_footer .boxed_btn:hover, .packege_pricing_area_7 .single_pakege_5 .pricing_footer .boxed_btn:hover, .packege_pricing_area_8 .single_pakege_5 .pricing_footer .boxed_btn:hover, .packege_pricing_area_5 .single_pakege_6 .pricing_footer .boxed_btn:hover, .packege_pricing_area_6 .single_pakege_6 .pricing_footer .boxed_btn:hover, .packege_pricing_area_7 .single_pakege_6 .pricing_footer .boxed_btn:hover, .packege_pricing_area_8 .single_pakege_6 .pricing_footer .boxed_btn:hover, .packege_pricing_area_5 .single_pakege_7 .pricing_footer .boxed_btn:hover, .packege_pricing_area_6 .single_pakege_7 .pricing_footer .boxed_btn:hover, .packege_pricing_area_7 .single_pakege_7 .pricing_footer .boxed_btn:hover, .packege_pricing_area_8 .single_pakege_7 .pricing_footer .boxed_btn:hover, .packege_pricing_area_5 .single_pakege_8 .pricing_footer .boxed_btn:hover, .packege_pricing_area_6 .single_pakege_8 .pricing_footer .boxed_btn:hover, .packege_pricing_area_7 .single_pakege_8 .pricing_footer .boxed_btn:hover, .packege_pricing_area_8 .single_pakege_8 .pricing_footer .boxed_btn:hover {
    border: 0; }

.single_pakege_5.advance .pricing_top, .advance.single_pakege_6 .pricing_top, .advance.single_pakege_7 .pricing_top, .advance.single_pakege_8 .pricing_top {
  background: #4940e2;
  position: relative;
  z-index: 1; }
  .single_pakege_5.advance .pricing_top:after, .advance.single_pakege_6 .pricing_top:after, .advance.single_pakege_7 .pricing_top:after, .advance.single_pakege_8 .pricing_top:after {
    position: absolute;
    z-index: -1;
    width: 100%;
    height: 100%;
    left: 0;
    top: 0;
    content: '';
    background: rgba(0, 0, 0, 0.2); }
.single_pakege_5.advance ul, .advance.single_pakege_6 ul, .advance.single_pakege_7 ul, .advance.single_pakege_8 ul {
  position: relative; }
  .single_pakege_5.advance ul:after, .advance.single_pakege_6 ul:after, .advance.single_pakege_7 ul:after, .advance.single_pakege_8 ul:after {
    width: 100%; }
  .single_pakege_5.advance ul li:after, .advance.single_pakege_6 ul li:after, .advance.single_pakege_7 ul li:after, .advance.single_pakege_8 ul li:after {
    width: 100%; }

.single_pakege_5.pro, .pro.single_pakege_6, .pro.single_pakege_7, .pro.single_pakege_8 {
  box-shadow: none; }
  .single_pakege_5.pro .pricing_top, .pro.single_pakege_6 .pricing_top, .pro.single_pakege_7 .pricing_top, .pro.single_pakege_8 .pricing_top {
    background: #4940e2;
    position: relative;
    z-index: 1; }
    .single_pakege_5.pro .pricing_top:after, .pro.single_pakege_6 .pricing_top:after, .pro.single_pakege_7 .pricing_top:after, .pro.single_pakege_8 .pricing_top:after {
      position: absolute;
      z-index: -1;
      width: 100%;
      height: 100%;
      left: 0;
      top: 0;
      content: '';
      background: rgba(0, 0, 0, 0.3); }
  .single_pakege_5.pro ul, .pro.single_pakege_6 ul, .pro.single_pakege_7 ul, .pro.single_pakege_8 ul {
    position: relative; }
    .single_pakege_5.pro ul:after, .pro.single_pakege_6 ul:after, .pro.single_pakege_7 ul:after, .pro.single_pakege_8 ul:after {
      width: calc(100% + 30px); }
    .single_pakege_5.pro ul li, .pro.single_pakege_6 ul li, .pro.single_pakege_7 ul li, .pro.single_pakege_8 ul li {
      border-right: none; }

.packege_pricing_area_6 {
  background: transparent; }
  .packege_pricing_area_6:after {
    height: 0; }

.packege_pricing_area_6 .single_pakege_6 .pricing_footer .boxed_btn {
  color: #fff;
  border: 0;
  background: -webkit-linear-gradient(bottom, #6a11cb 0%, #2575fc 100%);
  background: -o-linear-gradient(top, #6a11cb 0%, #2575fc 100%);
  background: -moz-linear-gradient(to top, #6a11cb 0%, #2575fc 100%);
  background: linear-gradient(to top, #6a11cb 0%, #2575fc 100%); }
  .packege_pricing_area_6 .single_pakege_6 .pricing_footer .boxed_btn:after {
    background: #3a2085; }
  .packege_pricing_area_6 .single_pakege_6 .pricing_footer .boxed_btn:hover {
    border: 0; }

.packege_pricing_area_7 {
  background: transparent; }
  .packege_pricing_area_7:after {
    height: 0; }

.single_pakege_7 .pricing_top {
  background: #3a2085; }

.item_list.single_pakege_7 .pricing_top {
  background: #3a2085; }
.item_list.single_pakege_7 ul li {
  color: #3a2085; }

.packege_pricing_area_7 .single_pakege_7 .pricing_footer .boxed_btn {
  background: #3a2085; }
  .packege_pricing_area_7 .single_pakege_7 .pricing_footer .boxed_btn:after {
    background: #191b41; }

.single_pakege_7.advance .pricing_top {
  background: #3a2085; }

.single_pakege_7.pro .pricing_top {
  background: #3a2085; }

.packege_pricing_area_8 {
  background: transparent; }
  .packege_pricing_area_8:after {
    height: 0; }

.single_pakege_8 .pricing_top {
  background: #3a2085; }

.item_list.single_pakege_8 .pricing_top {
  background: #3a2085; }
.item_list.single_pakege_8 ul li {
  color: #3a2085; }

.packege_pricing_area_8 .single_pakege_8 .pricing_footer .boxed_btn {
  background: #3a2085; }
  .packege_pricing_area_8 .single_pakege_8 .pricing_footer .boxed_btn:after {
    background: #191b41; }

.single_pakege_8.advance .pricing_top {
  background: #3a2085; }

.single_pakege_8.pro .pricing_top {
  background: #3a2085; }

@media only screen and (min-width: 992px) and (max-width: 1200px) {
  .single_pakege_3 p, .single_pakege_2 p, .single_pakege p {
    margin-bottom: 20px;
    font-size: 14px; } }
@media only screen and (min-width: 768px) and (max-width: 991px) {
  .select_month_wrapper {
    margin: 0 auto;
    margin-bottom: 110px;
    height: 40px; }
    .select_month_wrapper #chose_plan {
      font-size: 16px;
      padding: 12px; }
    .select_month_wrapper .option_list li {
      font-size: 15px;
      line-height: 20px; }
    .select_month_wrapper .split {
      width: 22%; }
    .select_month_wrapper .arrow {
      right: 7%; }

  .packege_pricing_area .tab_wrapper {
    height: 900px; }
  .packege_pricing_area .single_pakege {
    margin-bottom: 45px; }
    .packege_pricing_area .single_pakege .pakege_service_list {
      margin-bottom: 20px; }
      .packege_pricing_area .single_pakege .pakege_service_list li {
        margin-bottom: 13px; }
    .packege_pricing_area .single_pakege h2 {
      font-size: 40px;
      margin-bottom: 15px; }

  .packege_pricing_area_3 .tab_wrapper {
    height: 1215px; }
  .packege_pricing_area_3 .single_pakege_3 {
    margin-bottom: 45px; }
    .packege_pricing_area_3 .single_pakege_3 .pakege_service_list {
      margin-bottom: 20px; }
      .packege_pricing_area_3 .single_pakege_3 .pakege_service_list li {
        margin-bottom: 13px; }
    .packege_pricing_area_3 .single_pakege_3 h2 {
      font-size: 40px;
      margin-bottom: 15px; }

  .packege_pricing_area_2 .tab_wrapper {
    height: 1120px; }
  .packege_pricing_area_2 .single_pakege_2 {
    margin-bottom: 45px; }
    .packege_pricing_area_2 .single_pakege_2 .pakege_service_list {
      margin-bottom: 20px; }
      .packege_pricing_area_2 .single_pakege_2 .pakege_service_list li {
        margin-bottom: 10px; }
    .packege_pricing_area_2 .single_pakege_2 h2 {
      font-size: 40px;
      margin-bottom: 15px; }
    .packege_pricing_area_2 .single_pakege_2 .boxed_btn {
      margin-top: 60px; }

  .packege_pricing_area_4 .wrapper {
    margin: 0px auto 60px; }
  .packege_pricing_area_4 .toggle_radio label {
    font-size: 16px;
    padding: 10px 20px; }
  .packege_pricing_area_4 .tab_wrapper {
    height: 750px; }

  .single_pakege_4 .pricing_top, .single_pakege_5 .pricing_top, .single_pakege_6 .pricing_top, .single_pakege_7 .pricing_top, .single_pakege_8 .pricing_top {
    height: 140px; }
    .single_pakege_4 .pricing_top .plan_titel, .single_pakege_5 .pricing_top .plan_titel, .single_pakege_6 .pricing_top .plan_titel, .single_pakege_7 .pricing_top .plan_titel, .single_pakege_8 .pricing_top .plan_titel {
      font-size: 18px;
      padding: 12px 0; }
    .single_pakege_4 .pricing_top .price, .single_pakege_5 .pricing_top .price, .single_pakege_6 .pricing_top .price, .single_pakege_7 .pricing_top .price, .single_pakege_8 .pricing_top .price {
      font-size: 36px;
      margin-top: 15px; }
  .single_pakege_4 ul li, .single_pakege_5 ul li, .single_pakege_6 ul li, .single_pakege_7 ul li, .single_pakege_8 ul li {
    font-size: 14px;
    padding: 3px 0;
    line-height: 1.5; }
    .single_pakege_4 ul li i, .single_pakege_5 ul li i, .single_pakege_6 ul li i, .single_pakege_7 ul li i, .single_pakege_8 ul li i {
      font-size: 12px; }
  .single_pakege_4 .pricing_footer .boxed_btn, .single_pakege_5 .pricing_footer .boxed_btn, .single_pakege_6 .pricing_footer .boxed_btn, .single_pakege_7 .pricing_footer .boxed_btn, .single_pakege_8 .pricing_footer .boxed_btn {
    padding: 8px 22px;
    font-size: 14px;
    margin-bottom: 24px;
    margin-top: 24px; }

  .packege_pricing_area_5 .pricing_tabling, .packege_pricing_area_6 .pricing_tabling, .packege_pricing_area_7 .pricing_tabling, .packege_pricing_area_8 .pricing_tabling {
    overflow: visible;
    position: relative;
    background: rebeccapurple;
    border-radius: 25px;
    height: 120px;
    margin-bottom: 20px;
    width: 100%; }

  .single_pakege_5
  .pricing_top
  .price, .single_pakege_6
  .pricing_top
  .price, .single_pakege_7
  .pricing_top
  .price, .single_pakege_8
  .pricing_top
  .price {
    margin: 0; } }
@media (max-width: 767px) {
  .select_month_wrapper {
    margin: 0 auto;
    margin-bottom: 110px;
    height: 40px; }
    .select_month_wrapper #chose_plan {
      font-size: 16px;
      padding: 12px; }
    .select_month_wrapper .option_list li {
      font-size: 15px;
      line-height: 20px; }
    .select_month_wrapper .split {
      width: 22%; }
    .select_month_wrapper .arrow {
      right: 7%; }

  .packege_pricing_area .tab_wrapper {
    height: 1712px; }
  .packege_pricing_area .single_pakege {
    margin-bottom: 50px; }
    .packege_pricing_area .single_pakege .sticker {
      font-size: 14px; }
    .packege_pricing_area .single_pakege h2 {
      font-size: 36px;
      margin-bottom: 15px; }
    .packege_pricing_area .single_pakege .pakege_service_list {
      margin-bottom: 20px; }
      .packege_pricing_area .single_pakege .pakege_service_list li {
        margin-bottom: 10px;
        font-size: 14px; }
    .packege_pricing_area .single_pakege .boxed_btn {
      padding: 10px 20px; }

  .packege_pricing_area_2 .select_month_wrapper {
    margin-bottom: 60px;
    width: 50%;
    height: 35px; }
    .packege_pricing_area_2 .select_month_wrapper #chose_plan {
      font-size: 15px;
      padding: 12px 15px; }
    .packege_pricing_area_2 .select_month_wrapper .option_list {
      font-size: 16px; }
      .packege_pricing_area_2 .select_month_wrapper .option_list li {
        font-size: 15px;
        line-height: 15px; }
    .packege_pricing_area_2 .select_month_wrapper .split {
      width: 20%; }
    .packege_pricing_area_2 .select_month_wrapper .arrow {
      top: calc(50% - 6px);
      border-left: 6px solid transparent;
      border-right: 6px solid transparent;
      border-top: 8px solid #fff;
      right: 7%; }
  .packege_pricing_area_2 .tab_wrapper {
    height: 1780px; }
  .packege_pricing_area_2 .single_pakege_2 {
    margin-bottom: 50px; }
    .packege_pricing_area_2 .single_pakege_2 .sticker {
      font-size: 14px; }
    .packege_pricing_area_2 .single_pakege_2 h2 {
      font-size: 36px;
      margin-bottom: 15px; }
    .packege_pricing_area_2 .single_pakege_2 .pakege_service_list {
      margin-bottom: 20px; }
      .packege_pricing_area_2 .single_pakege_2 .pakege_service_list li {
        margin-bottom: 10px;
        font-size: 14px; }
    .packege_pricing_area_2 .single_pakege_2 .boxed_btn {
      margin-top: 100px; }

  .packege_pricing_area_3 .tab_wrapper {
    height: 1745px; }
  .packege_pricing_area_3 .single_pakege_3 {
    margin-bottom: 50px; }
    .packege_pricing_area_3 .single_pakege_3 .sticker {
      font-size: 14px; }
    .packege_pricing_area_3 .single_pakege_3 h2 {
      font-size: 36px;
      margin-bottom: 15px; }
    .packege_pricing_area_3 .single_pakege_3 .pakege_service_list {
      margin-bottom: 20px; }
      .packege_pricing_area_3 .single_pakege_3 .pakege_service_list li {
        margin-bottom: 10px;
        font-size: 14px; }
    .packege_pricing_area_3 .single_pakege_3 .boxed_btn {
      margin-top: 85px; }

  .packege_pricing_area_4 .wrapper {
    margin: 0px auto 60px; }
  .packege_pricing_area_4 .toggle_radio label {
    font-size: 16px;
    padding: 10px 20px; }
  .packege_pricing_area_4 .tab_wrapper {
    height: 1600px; }

  .single_pakege_4, .single_pakege_5, .single_pakege_6, .single_pakege_7, .single_pakege_8 {
    margin-top: 20px; }
    .single_pakege_4 .pricing_top, .single_pakege_5 .pricing_top, .single_pakege_6 .pricing_top, .single_pakege_7 .pricing_top, .single_pakege_8 .pricing_top {
      height: 120px; }
      .single_pakege_4 .pricing_top .plan_titel, .single_pakege_5 .pricing_top .plan_titel, .single_pakege_6 .pricing_top .plan_titel, .single_pakege_7 .pricing_top .plan_titel, .single_pakege_8 .pricing_top .plan_titel {
        font-size: 16px;
        padding: 6px 0; }
      .single_pakege_4 .pricing_top .price, .single_pakege_5 .pricing_top .price, .single_pakege_6 .pricing_top .price, .single_pakege_7 .pricing_top .price, .single_pakege_8 .pricing_top .price {
        font-size: 36px;
        margin-top: 15px; }
    .single_pakege_4 ul:after, .single_pakege_5 ul:after, .single_pakege_6 ul:after, .single_pakege_7 ul:after, .single_pakege_8 ul:after {
      display: none;
      width: 0; }
    .single_pakege_4 ul li, .single_pakege_5 ul li, .single_pakege_6 ul li, .single_pakege_7 ul li, .single_pakege_8 ul li {
      font-size: 14px;
      padding: 3px 0;
      line-height: 1.5; }
      .single_pakege_4 ul li span, .single_pakege_5 ul li span, .single_pakege_6 ul li span, .single_pakege_7 ul li span, .single_pakege_8 ul li span {
        position: relative;
        z-index: 1;
        margin-right: 25px; }
        .single_pakege_4 ul li span:after, .single_pakege_5 ul li span:after, .single_pakege_6 ul li span:after, .single_pakege_7 ul li span:after, .single_pakege_8 ul li span:after {
          content: '';
          position: absolute;
          width: 15px;
          left: auto;
          background: #838bab;
          right: -20px;
          height: 2px;
          top: calc(50% - 1px);
          z-index: -1; }
      .single_pakege_4 ul li i, .single_pakege_5 ul li i, .single_pakege_6 ul li i, .single_pakege_7 ul li i, .single_pakege_8 ul li i {
        font-size: 12px; }
    .single_pakege_4 .pricing_footer .boxed_btn, .single_pakege_5 .pricing_footer .boxed_btn, .single_pakege_6 .pricing_footer .boxed_btn, .single_pakege_7 .pricing_footer .boxed_btn, .single_pakege_8 .pricing_footer .boxed_btn {
      padding: 8px 22px;
      font-size: 14px;
      margin-bottom: 24px;
      margin-top: 24px; }

  .packege_pricing_area_5 .pricing_tabling, .packege_pricing_area_6 .pricing_tabling, .packege_pricing_area_7 .pricing_tabling, .packege_pricing_area_8 .pricing_tabling {
    overflow: visible;
    position: relative;
    background: #3a2085;
    border-radius: 25px;
    height: 125px;
    width: 100%;
    margin-bottom: 20px; }
  .packege_pricing_area_5 .container.tab_wrapper, .packege_pricing_area_6 .container.tab_wrapper, .packege_pricing_area_7 .container.tab_wrapper, .packege_pricing_area_8 .container.tab_wrapper {
    height: 1600px;
    box-shadow: none; }
    .packege_pricing_area_5 .container.tab_wrapper .col-lg-3, .packege_pricing_area_6 .container.tab_wrapper .col-lg-3, .packege_pricing_area_7 .container.tab_wrapper .col-lg-3, .packege_pricing_area_8 .container.tab_wrapper .col-lg-3 {
      padding: 0 15px; }

  .single_pakege_5, .single_pakege_6, .single_pakege_7, .single_pakege_8 {
    border-radius: 25px;
    overflow: hidden; }
    .single_pakege_5:hover, .single_pakege_6:hover, .single_pakege_7:hover, .single_pakege_8:hover {
      box-shadow: 0px 8px 16px 0px rgba(0, 0, 0, 0.1); }
    .single_pakege_5 .pricing_top .price, .single_pakege_6 .pricing_top .price, .single_pakege_7 .pricing_top .price, .single_pakege_8 .pricing_top .price {
      margin: 0; }
    .single_pakege_5 .pricing_footer, .single_pakege_6 .pricing_footer, .single_pakege_7 .pricing_footer, .single_pakege_8 .pricing_footer {
      height: 80px; } }
.service_area {
  background: -webkit-linear-gradient(left, #13128c 0%, #480884 100%);
  background: -o-linear-gradient(right, #13128c 0%, #480884 100%);
  background: -moz-linear-gradient(to right, #13128c 0%, #480884 100%);
  background: linear-gradient(to right, #13128c 0%, #480884 100%);
  clear: both; }

.single_service_item {
  margin-bottom: 40px;
  padding: 30px;
  background: #fff;
  -webkit-transition: all 0.3s ease-in-out;
  -moz-transition: all 0.3s ease-in-out;
  -ms-transition: all 0.3s ease-in-out;
  -o-transition: all 0.3s ease-in-out;
  transition: all 0.3s ease-in-out;
  position: relative;
  top: 0;
  z-index: 3; }
  .single_service_item .service_img {
    margin: auto;
    margin-bottom: 20px;
    width: 80px;
    height: 80px; }
  .single_service_item h3 {
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif;
    font-size: 24px;
    line-height: 32px;
    margin-bottom: 15px;
    color: #304e73;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
  .single_service_item p {
    color: #838bab;
    margin-bottom: 15px;
    font-weight: 400;
    font-family: 'Fira Sans', sans-serif;
    font-size: 16px;
    line-height: 28px; }
  .single_service_item .boxed_btn {
    background: -webkit-linear-gradient(left, #0acffe 0%, #182dee 100%);
    background: -o-linear-gradient(right, #0acffe 0%, #182dee 100%);
    background: -moz-linear-gradient(to right, #0acffe 0%, #182dee 100%);
    background: linear-gradient(to right, #0acffe 0%, #182dee 100%);
    padding: 15px 20px;
    border-radius: 5px; }
    .single_service_item .boxed_btn:after {
      border-radius: 5px;
      background: #2cd63c; }
  .single_service_item:before {
    width: 3px;
    height: 100%;
    top: 0;
    left: auto;
    background: -webkit-linear-gradient(bottom, #0acffe 0%, #182dee 100%);
    background: -o-linear-gradient(top, #0acffe 0%, #182dee 100%);
    background: -moz-linear-gradient(to top, #0acffe 0%, #182dee 100%);
    background: linear-gradient(to top, #0acffe 0%, #182dee 100%);
    right: 0px;
    position: absolute;
    z-index: -1;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out;
    content: '';
    opacity: 0; }
  .single_service_item:hover:before {
    opacity: 1; }
  .single_service_item:hover {
    top: -10px; }
  .single_service_item:hover h3 {
    color: #0cbafc; }

.service_area_2 .single_service_item_2 {
  margin-bottom: 40px;
  padding: 30px;
  background: #fff;
  -webkit-transition: all 0.3s ease-in-out;
  -moz-transition: all 0.3s ease-in-out;
  -ms-transition: all 0.3s ease-in-out;
  -o-transition: all 0.3s ease-in-out;
  transition: all 0.3s ease-in-out;
  position: relative;
  top: 0;
  z-index: 3;
  border-radius: 40px; }
  .service_area_2 .single_service_item_2 .service_img {
    margin: auto;
    margin-bottom: 20px;
    width: 80px;
    height: 80px; }
  .service_area_2 .single_service_item_2 h3 {
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif;
    font-size: 24px;
    line-height: 32px;
    margin-bottom: 15px;
    color: #304e73;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
  .service_area_2 .single_service_item_2 p {
    color: #838bab;
    margin-bottom: 15px;
    font-weight: 400;
    font-family: 'Fira Sans', sans-serif;
    font-size: 16px;
    line-height: 28px;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
  .service_area_2 .single_service_item_2 .boxed_btn {
    border-radius: 30px;
    background: -webkit-linear-gradient(bottom, #1317d1 0%, #07164e 100%);
    background: -o-linear-gradient(top, #1317d1 0%, #07164e 100%);
    background: -moz-linear-gradient(to top, #1317d1 0%, #07164e 100%);
    background: linear-gradient(to top, #1317d1 0%, #07164e 100%);
    color: #fff;
    padding: 14px 22px;
    border: 2px solid #fff; }
    .service_area_2 .single_service_item_2 .boxed_btn:after {
      border-radius: 20px;
      background: #fff;
      border: none; }
    .service_area_2 .single_service_item_2 .boxed_btn:hover {
      color: #363bff;
      border: 2px solid #fff; }
  .service_area_2 .single_service_item_2:before {
    width: 100%;
    height: 100%;
    top: 0;
    left: auto;
    background: -webkit-linear-gradient(bottom, #0acffe 0%, #182dee 100%);
    background: -o-linear-gradient(top, #0acffe 0%, #182dee 100%);
    background: -moz-linear-gradient(to top, #0acffe 0%, #182dee 100%);
    background: linear-gradient(to top, #0acffe 0%, #182dee 100%);
    right: 0px;
    position: absolute;
    z-index: -1;
    border-radius: 40px;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out;
    content: '';
    opacity: 0; }
  .service_area_2 .single_service_item_2:hover:before {
    opacity: 1;
    background: -webkit-linear-gradient(bottom, #1317d1 0%, #07164e 100%);
    background: -o-linear-gradient(top, #1317d1 0%, #07164e 100%);
    background: -moz-linear-gradient(to top, #1317d1 0%, #07164e 100%);
    background: linear-gradient(to top, #1317d1 0%, #07164e 100%); }
  .service_area_2 .single_service_item_2:hover {
    top: -10px; }
  .service_area_2 .single_service_item_2:hover h3 {
    color: #fff; }
  .service_area_2 .single_service_item_2:hover p {
    color: #a7b6f1; }

.service_area_3 {
  background: -webkit-linear-gradient(left, #13128c 0%, #370863 100%);
  background: -o-linear-gradient(right, #13128c 0%, #370863 100%);
  background: -moz-linear-gradient(to right, #13128c 0%, #370863 100%);
  background: linear-gradient(to right, #13128c 0%, #370863 100%); }
  .service_area_3 .single_service_item_3 {
    margin-bottom: 40px;
    background: none;
    box-shadow: none;
    padding: 30px;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out;
    position: relative;
    top: 0;
    z-index: 3; }
    .service_area_3 .single_service_item_3 .service_img {
      margin: auto;
      margin-bottom: 20px;
      width: 80px;
      height: 80px; }
    .service_area_3 .single_service_item_3 h3 {
      font-weight: 700;
      font-family: 'Fira Sans', sans-serif;
      font-size: 24px;
      line-height: 32px;
      margin-bottom: 15px;
      color: #fff;
      -webkit-transition: all 0.3s ease-in-out;
      -moz-transition: all 0.3s ease-in-out;
      -ms-transition: all 0.3s ease-in-out;
      -o-transition: all 0.3s ease-in-out;
      transition: all 0.3s ease-in-out; }
    .service_area_3 .single_service_item_3 p {
      color: #fff;
      margin-bottom: 15px;
      font-weight: 400;
      font-family: 'Fira Sans', sans-serif;
      font-size: 16px;
      line-height: 28px; }
    .service_area_3 .single_service_item_3 .boxed_btn {
      margin-bottom: 0;
      background: #fff;
      padding: 15px 20px;
      color: #1b38ff;
      border-radius: 0;
      display: inline-block;
      -webkit-transition: all 0.3s ease-in-out;
      -moz-transition: all 0.3s ease-in-out;
      -ms-transition: all 0.3s ease-in-out;
      -o-transition: all 0.3s ease-in-out;
      transition: all 0.3s ease-in-out; }
      .service_area_3 .single_service_item_3 .boxed_btn:hover {
        border-radius: 0;
        background: #304e73;
        color: #fff; }
    .service_area_3 .single_service_item_3:hover {
      background: rgba(0, 0, 0, 0.1);
      border: 1px solid #fff;
      color: #fff;
      top: -5px; }
    .service_area_3 .single_service_item_3:hover h3 {
      color: #0cbafc; }

.service_area_4 .single_service_item_4 {
  margin-bottom: 40px;
  padding: 30px;
  background: #fff;
  -webkit-transition: all 0.3s ease-in-out;
  -moz-transition: all 0.3s ease-in-out;
  -ms-transition: all 0.3s ease-in-out;
  -o-transition: all 0.3s ease-in-out;
  transition: all 0.3s ease-in-out;
  position: relative;
  top: 0;
  z-index: 3;
  border-radius: 40px; }
  .service_area_4 .single_service_item_4 .service_img {
    margin: auto;
    margin-bottom: 20px;
    width: 80px;
    height: 80px; }
  .service_area_4 .single_service_item_4 h3 {
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif;
    font-size: 24px;
    line-height: 32px;
    margin-bottom: 15px;
    color: #304e73;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
  .service_area_4 .single_service_item_4 p {
    color: #838bab;
    margin-bottom: 15px;
    font-weight: 400;
    font-family: 'Fira Sans', sans-serif;
    font-size: 16px;
    line-height: 28px;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
  .service_area_4 .single_service_item_4 .boxed_btn {
    border-radius: 30px;
    background: -webkit-linear-gradient(bottom, #5317e6 0%, #07164e 100%);
    background: -o-linear-gradient(top, #5317e6 0%, #07164e 100%);
    background: -moz-linear-gradient(to top, #5317e6 0%, #07164e 100%);
    background: linear-gradient(to top, #5317e6 0%, #07164e 100%);
    color: #fff;
    padding: 14px 22px;
    border: 2px solid #fff; }
    .service_area_4 .single_service_item_4 .boxed_btn:after {
      border-radius: 20px;
      background: #fff;
      border: none; }
    .service_area_4 .single_service_item_4 .boxed_btn:hover {
      color: #304e73;
      border: 2px solid #fff; }
  .service_area_4 .single_service_item_4:before {
    width: 100%;
    height: 100%;
    top: 0;
    left: auto;
    background: -webkit-linear-gradient(bottom, #5317e6 0%, #07164e 100%);
    background: -o-linear-gradient(top, #5317e6 0%, #07164e 100%);
    background: -moz-linear-gradient(to top, #5317e6 0%, #07164e 100%);
    background: linear-gradient(to top, #5317e6 0%, #07164e 100%);
    right: 0px;
    position: absolute;
    z-index: -1;
    border-radius: 40px;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out;
    content: '';
    opacity: 0; }
  .service_area_4 .single_service_item_4:hover:before {
    opacity: 1; }
  .service_area_4 .single_service_item_4:hover {
    top: -10px; }
  .service_area_4 .single_service_item_4:hover h3 {
    color: #fff; }
  .service_area_4 .single_service_item_4:hover p {
    color: #fff; }

.service_carousel_area_1 {
  position: relative;
  background: transparent;
  z-index: 2; }
  .service_carousel_area_1 .service_carousel {
    padding-bottom: 100px; }
    .service_carousel_area_1 .service_carousel .swiper-pagination-bullet {
      color: beige;
      background: #363bff;
      width: 15px;
      height: 15px;
      opacity: 1; }
      .service_carousel_area_1 .service_carousel .swiper-pagination-bullet.swiper-pagination-bullet-active {
        opacity: .5; }
  .service_carousel_area_1 .single_service_item_5 {
    overflow: hidden;
    margin: 0 15px;
    border-radius: 20px;
    background: #fff;
    padding: 30px;
    position: relative; }
    .service_carousel_area_1 .single_service_item_5.colored_bg {
      background: -webkit-linear-gradient(left, #5317e6 0%, #07164e 100%);
      background: -o-linear-gradient(right, #5317e6 0%, #07164e 100%);
      background: -moz-linear-gradient(to right, #5317e6 0%, #07164e 100%);
      background: linear-gradient(to right, #5317e6 0%, #07164e 100%);
      color: #fff;
      z-index: 1; }
      .service_carousel_area_1 .single_service_item_5.colored_bg h3 {
        background: none !important;
        -webkit-text-fill-color: #fff; }
      .service_carousel_area_1 .single_service_item_5.colored_bg h3, .service_carousel_area_1 .single_service_item_5.colored_bg p, .service_carousel_area_1 .single_service_item_5.colored_bg li, .service_carousel_area_1 .single_service_item_5.colored_bg i {
        color: #fff; }
      .service_carousel_area_1 .single_service_item_5.colored_bg a.boxed_btn {
        background: rgba(255, 255, 255, 0.15);
        color: #fff; }
        .service_carousel_area_1 .single_service_item_5.colored_bg a.boxed_btn:hover {
          color: #304e73; }
        .service_carousel_area_1 .single_service_item_5.colored_bg a.boxed_btn:after {
          background: #fff; }
        .service_carousel_area_1 .single_service_item_5.colored_bg a.boxed_btn:hover i {
          color: #304e73; }
    .service_carousel_area_1 .single_service_item_5 h3 {
      font-size: 36px;
      margin-bottom: 20px;
      font-weight: 500;
      font-family: 'Fira Sans', sans-serif;
      color: #6a11cb; }
    .service_carousel_area_1 .single_service_item_5 p {
      margin-bottom: 20px;
      font-size: 16px;
      line-height: 1.5;
      color: #838bab; }
    .service_carousel_area_1 .single_service_item_5 li {
      margin-bottom: 15px;
      font-weight: 500;
      font-family: 'Fira Sans', sans-serif;
      font-size: 18px;
      color: #304e73; }
      .service_carousel_area_1 .single_service_item_5 li i {
        -webkit-transition: all 0.3s ease-in-out;
        -moz-transition: all 0.3s ease-in-out;
        -ms-transition: all 0.3s ease-in-out;
        -o-transition: all 0.3s ease-in-out;
        transition: all 0.3s ease-in-out;
        font-weight: 900;
        margin-right: 5px;
        color: #2cd63c; }
      .service_carousel_area_1 .single_service_item_5 li:last-child {
        margin-bottom: 0; }
    .service_carousel_area_1 .single_service_item_5 a.boxed_btn {
      background: -webkit-linear-gradient(left, #6a11cb 0%, #2575fc 100%);
      background: -o-linear-gradient(right, #6a11cb 0%, #2575fc 100%);
      background: -moz-linear-gradient(to right, #6a11cb 0%, #2575fc 100%);
      background: linear-gradient(to right, #6a11cb 0%, #2575fc 100%);
      color: #fff;
      margin-top: 30px;
      padding: 12px 15px;
      border-radius: 5px;
      font-size: 14px;
      font-weight: 700;
      font-family: 'Fira Sans', sans-serif;
      text-transform: uppercase; }
      .service_carousel_area_1 .single_service_item_5 a.boxed_btn i {
        margin-left: 5px;
        color: #fff;
        font-size: 12px;
        font-weight: 700;
        -webkit-transition: all 0.3s ease-in-out;
        -moz-transition: all 0.3s ease-in-out;
        -ms-transition: all 0.3s ease-in-out;
        -o-transition: all 0.3s ease-in-out;
        transition: all 0.3s ease-in-out; }
      .service_carousel_area_1 .single_service_item_5 a.boxed_btn:after {
        background: #3a2085;
        border-radius: 5px; }
        .service_carousel_area_1 .single_service_item_5 a.boxed_btn:after:hover, .service_carousel_area_1 .single_service_item_5 a.boxed_btn:after:hover i {
          color: #fff; }
    .service_carousel_area_1 .single_service_item_5 img {
      position: absolute;
      left: 35%;
      top: 40%; }

.service_carousel_area_4 {
  position: relative;
  z-index: 2; }
  .service_carousel_area_4 .single_service_item_8 {
    overflow: hidden;
    margin: 0 15px;
    border-radius: 20px;
    background: #fff;
    padding: 30px;
    position: relative;
    border: 1px solid #363bff; }
    .service_carousel_area_4 .single_service_item_8.colored_bg {
      background: -webkit-linear-gradient(left, #6a11cb 0%, #2575fc 100%);
      background: -o-linear-gradient(right, #6a11cb 0%, #2575fc 100%);
      background: -moz-linear-gradient(to right, #6a11cb 0%, #2575fc 100%);
      background: linear-gradient(to right, #6a11cb 0%, #2575fc 100%);
      color: #fff;
      border: 1px solid transparent;
      z-index: 1; }
      .service_carousel_area_4 .single_service_item_8.colored_bg h3 {
        background: none !important;
        -webkit-text-fill-color: #fff; }
      .service_carousel_area_4 .single_service_item_8.colored_bg h3, .service_carousel_area_4 .single_service_item_8.colored_bg p, .service_carousel_area_4 .single_service_item_8.colored_bg li, .service_carousel_area_4 .single_service_item_8.colored_bg i {
        color: #fff; }
      .service_carousel_area_4 .single_service_item_8.colored_bg a.boxed_btn {
        background: rgba(255, 255, 255, 0.15);
        color: #fff; }
        .service_carousel_area_4 .single_service_item_8.colored_bg a.boxed_btn:hover {
          color: #304e73; }
        .service_carousel_area_4 .single_service_item_8.colored_bg a.boxed_btn:after {
          background: #fff; }
        .service_carousel_area_4 .single_service_item_8.colored_bg a.boxed_btn:hover i {
          color: #304e73; }
    .service_carousel_area_4 .single_service_item_8 h3 {
      font-size: 36px;
      margin-bottom: 20px;
      font-weight: 500;
      font-family: 'Fira Sans', sans-serif;
      color: #6a11cb; }
    .service_carousel_area_4 .single_service_item_8 p {
      margin-bottom: 20px;
      font-size: 16px;
      line-height: 1.5;
      color: #838bab; }
    .service_carousel_area_4 .single_service_item_8 li {
      margin-bottom: 15px;
      font-weight: 500;
      font-family: 'Fira Sans', sans-serif;
      font-size: 18px;
      color: #304e73; }
      .service_carousel_area_4 .single_service_item_8 li i {
        -webkit-transition: all 0.3s ease-in-out;
        -moz-transition: all 0.3s ease-in-out;
        -ms-transition: all 0.3s ease-in-out;
        -o-transition: all 0.3s ease-in-out;
        transition: all 0.3s ease-in-out;
        font-weight: 900;
        margin-right: 5px;
        color: #2cd63c; }
      .service_carousel_area_4 .single_service_item_8 li:last-child {
        margin-bottom: 0; }
    .service_carousel_area_4 .single_service_item_8 a.boxed_btn {
      background: -webkit-linear-gradient(left, #6a11cb 0%, #2575fc 100%);
      background: -o-linear-gradient(right, #6a11cb 0%, #2575fc 100%);
      background: -moz-linear-gradient(to right, #6a11cb 0%, #2575fc 100%);
      background: linear-gradient(to right, #6a11cb 0%, #2575fc 100%);
      color: #fff;
      margin-top: 30px;
      padding: 12px 15px;
      border-radius: 5px;
      font-size: 14px;
      font-weight: 700;
      font-family: 'Fira Sans', sans-serif;
      text-transform: uppercase; }
      .service_carousel_area_4 .single_service_item_8 a.boxed_btn i {
        margin-left: 5px;
        color: #fff;
        font-size: 12px;
        font-weight: 700;
        -webkit-transition: all 0.3s ease-in-out;
        -moz-transition: all 0.3s ease-in-out;
        -ms-transition: all 0.3s ease-in-out;
        -o-transition: all 0.3s ease-in-out;
        transition: all 0.3s ease-in-out; }
      .service_carousel_area_4 .single_service_item_8 a.boxed_btn:after {
        background: #3a2085;
        border-radius: 5px; }
        .service_carousel_area_4 .single_service_item_8 a.boxed_btn:after:hover, .service_carousel_area_4 .single_service_item_8 a.boxed_btn:after:hover i {
          color: #fff; }
    .service_carousel_area_4 .single_service_item_8 img {
      position: absolute;
      left: 35%;
      top: 40%; }
  .service_carousel_area_4 .service_carousel {
    padding-bottom: 100px; }
    .service_carousel_area_4 .service_carousel .swiper-pagination-bullet {
      color: beige;
      background: #363bff;
      width: 15px;
      height: 15px;
      opacity: 1; }
      .service_carousel_area_4 .service_carousel .swiper-pagination-bullet.swiper-pagination-bullet-active {
        opacity: .5; }

.service_carousel_area_2 {
  background: transparent;
  position: relative;
  z-index: 2; }
  .service_carousel_area_2 .single_service_item_6 {
    overflow: hidden;
    margin: 0 15px;
    border-radius: 20px;
    background: #fff;
    padding: 30px;
    position: relative;
    border: 1px solid #3a2085; }
    .service_carousel_area_2 .single_service_item_6.colored_bg {
      background: -webkit-linear-gradient(left, #010094 0%, #1f003c 100%);
      background: -o-linear-gradient(right, #010094 0%, #1f003c 100%);
      background: -moz-linear-gradient(to right, #010094 0%, #1f003c 100%);
      background: linear-gradient(to right, #010094 0%, #1f003c 100%);
      color: #fff;
      border: 1px solid #170055;
      z-index: 1; }
      .service_carousel_area_2 .single_service_item_6.colored_bg h3, .service_carousel_area_2 .single_service_item_6.colored_bg p, .service_carousel_area_2 .single_service_item_6.colored_bg li, .service_carousel_area_2 .single_service_item_6.colored_bg i {
        color: #fff; }
      .service_carousel_area_2 .single_service_item_6.colored_bg a.boxed_btn {
        background: rgba(255, 255, 255, 0.15);
        color: #fff; }
        .service_carousel_area_2 .single_service_item_6.colored_bg a.boxed_btn:hover {
          color: #304e73;
          background: #fff; }
        .service_carousel_area_2 .single_service_item_6.colored_bg a.boxed_btn:hover i {
          color: #304e73; }
    .service_carousel_area_2 .single_service_item_6 h3 {
      font-size: 36px;
      margin-bottom: 20px;
      font-weight: 500;
      font-family: 'Fira Sans', sans-serif;
      color: #6a11cb; }
    .service_carousel_area_2 .single_service_item_6 p {
      margin-bottom: 20px;
      font-size: 16px;
      line-height: 1.5; }
    .service_carousel_area_2 .single_service_item_6 li {
      margin-bottom: 15px;
      font-weight: 500;
      font-family: 'Fira Sans', sans-serif;
      color: #304e73;
      font-size: 18px; }
      .service_carousel_area_2 .single_service_item_6 li i {
        -webkit-transition: all 0.3s ease-in-out;
        -moz-transition: all 0.3s ease-in-out;
        -ms-transition: all 0.3s ease-in-out;
        -o-transition: all 0.3s ease-in-out;
        transition: all 0.3s ease-in-out;
        color: #2cd63c;
        font-weight: 900;
        margin-right: 5px; }
      .service_carousel_area_2 .single_service_item_6 li:last-child {
        margin-bottom: 0; }
    .service_carousel_area_2 .single_service_item_6 a.boxed_btn {
      margin-top: 30px;
      padding: 12px 15px;
      background: #3a2085;
      border-radius: 5px;
      color: #fff;
      font-size: 14px;
      font-weight: 700;
      font-family: 'Fira Sans', sans-serif;
      text-transform: uppercase;
      display: inline-block;
      -webkit-transition: all 0.3s ease-in-out;
      -moz-transition: all 0.3s ease-in-out;
      -ms-transition: all 0.3s ease-in-out;
      -o-transition: all 0.3s ease-in-out;
      transition: all 0.3s ease-in-out; }
      .service_carousel_area_2 .single_service_item_6 a.boxed_btn i {
        margin-left: 5px;
        font-size: 12px;
        font-weight: 700;
        color: #fff;
        -webkit-transition: all 0.3s ease-in-out;
        -moz-transition: all 0.3s ease-in-out;
        -ms-transition: all 0.3s ease-in-out;
        -o-transition: all 0.3s ease-in-out;
        transition: all 0.3s ease-in-out; }
      .service_carousel_area_2 .single_service_item_6 a.boxed_btn:hover {
        color: #fff;
        background: #191b41; }
      .service_carousel_area_2 .single_service_item_6 a.boxed_btn:hover i {
        color: #fff; }
    .service_carousel_area_2 .single_service_item_6 img {
      position: absolute;
      left: 35%;
      top: 40%; }
  .service_carousel_area_2 .service_carousel {
    padding-bottom: 100px; }
    .service_carousel_area_2 .service_carousel .swiper-pagination-bullet {
      color: beige;
      background: #3a2085;
      width: 15px;
      height: 15px;
      opacity: 1; }
      .service_carousel_area_2 .service_carousel .swiper-pagination-bullet.swiper-pagination-bullet-active {
        opacity: .5; }

.service_carousel_area_3 {
  position: relative;
  z-index: 99; }
  .service_carousel_area_3 .single_service_item_7 {
    overflow: hidden;
    margin: 0 15px;
    border-radius: 20px;
    background: #fff;
    padding: 30px;
    position: relative;
    border: 1px solid #15efa4; }
    .service_carousel_area_3 .single_service_item_7.colored_bg {
      background: -webkit-linear-gradient(left, #13128c 0%, #370863 100%);
      background: -o-linear-gradient(right, #13128c 0%, #370863 100%);
      background: -moz-linear-gradient(to right, #13128c 0%, #370863 100%);
      background: linear-gradient(to right, #13128c 0%, #370863 100%);
      color: #fff;
      border: 1px solid transparent;
      z-index: 1; }
      .service_carousel_area_3 .single_service_item_7.colored_bg h3 {
        background: none !important;
        -webkit-text-fill-color: #fff; }
      .service_carousel_area_3 .single_service_item_7.colored_bg h3, .service_carousel_area_3 .single_service_item_7.colored_bg p, .service_carousel_area_3 .single_service_item_7.colored_bg li, .service_carousel_area_3 .single_service_item_7.colored_bg i {
        color: #fff; }
      .service_carousel_area_3 .single_service_item_7.colored_bg a.boxed_btn {
        background: rgba(255, 255, 255, 0.15);
        color: #fff; }
        .service_carousel_area_3 .single_service_item_7.colored_bg a.boxed_btn:hover {
          color: #15efa4;
          background: #fff; }
        .service_carousel_area_3 .single_service_item_7.colored_bg a.boxed_btn:after {
          background: #fff; }
        .service_carousel_area_3 .single_service_item_7.colored_bg a.boxed_btn:hover i {
          color: #15efa4; }
    .service_carousel_area_3 .single_service_item_7 h3 {
      font-size: 36px;
      margin-bottom: 20px;
      font-weight: 500;
      font-family: 'Fira Sans', sans-serif;
      color: #15efa4; }
    .service_carousel_area_3 .single_service_item_7 p {
      margin-bottom: 20px;
      font-size: 16px;
      line-height: 1.5; }
    .service_carousel_area_3 .single_service_item_7 li {
      margin-bottom: 15px;
      font-weight: 500;
      font-family: 'Fira Sans', sans-serif;
      color: #304e73;
      font-size: 18px; }
      .service_carousel_area_3 .single_service_item_7 li i {
        -webkit-transition: all 0.3s ease-in-out;
        -moz-transition: all 0.3s ease-in-out;
        -ms-transition: all 0.3s ease-in-out;
        -o-transition: all 0.3s ease-in-out;
        transition: all 0.3s ease-in-out;
        color: #15efa4;
        font-weight: 900;
        margin-right: 5px; }
      .service_carousel_area_3 .single_service_item_7 li:last-child {
        margin-bottom: 0; }
    .service_carousel_area_3 .single_service_item_7 a.boxed_btn {
      margin-top: 30px;
      padding: 12px 15px;
      background: -webkit-linear-gradient(left, #15efa4 0%, #0bbdff 100%);
      background: -o-linear-gradient(right, #15efa4 0%, #0bbdff 100%);
      background: -moz-linear-gradient(to right, #15efa4 0%, #0bbdff 100%);
      background: linear-gradient(to right, #15efa4 0%, #0bbdff 100%);
      border-radius: 5px;
      color: #fff;
      font-size: 14px;
      font-weight: 700;
      font-family: 'Fira Sans', sans-serif;
      text-transform: uppercase; }
      .service_carousel_area_3 .single_service_item_7 a.boxed_btn i {
        margin-left: 5px;
        font-size: 12px;
        font-weight: 700;
        color: #fff;
        -webkit-transition: all 0.3s ease-in-out;
        -moz-transition: all 0.3s ease-in-out;
        -ms-transition: all 0.3s ease-in-out;
        -o-transition: all 0.3s ease-in-out;
        transition: all 0.3s ease-in-out; }
      .service_carousel_area_3 .single_service_item_7 a.boxed_btn:after {
        border-radius: 5px;
        background: #15efa4; }
      .service_carousel_area_3 .single_service_item_7 a.boxed_btn:hover, .service_carousel_area_3 .single_service_item_7 a.boxed_btn:hover i {
        color: #fff; }
    .service_carousel_area_3 .single_service_item_7 img {
      position: absolute;
      left: 35%;
      top: 40%; }

@media only screen and (min-width: 992px) and (max-width: 1200px) {
  .single_service_item_comn_2 img, .service_carousel_area_1 .single_service_item_5 img, .service_carousel_area_4 .single_service_item_8 img {
    top: 42%; }

  .service_carousel_area_2 .single_service_item_6 img {
    top: 42%; }

  .service_carousel_area_3 .single_service_item_7 img {
    top: 42%; } }
@media only screen and (min-width: 768px) and (max-width: 991px) {
  .service_area {
    padding-bottom: 20px; }

  .single_service_item_comn_2, .service_carousel_area_1 .single_service_item_5, .service_carousel_area_4 .single_service_item_8 {
    margin: 0 60px; }

  .service_carousel_area_2 .single_service_item_6 {
    margin: 0 60px; }

  .service_carousel_area_3 .single_service_item_7 {
    margin: 0 60px; } }
@media (max-width: 767px) {
  .service_area {
    padding-bottom: 10px; }

  .single_service_item h3 {
    font-size: 18px; }
  .single_service_item p {
    font-size: 14px; }
  .single_service_item .boxed_btn {
    padding: 10px 20px; }
    .single_service_item .boxed_btn span {
      font-size: 14px; }

  .single_service_item_comn_2, .service_carousel_area_1 .single_service_item_5, .service_carousel_area_4 .single_service_item_8 {
    padding: 15px; }
    .single_service_item_comn_2 h3, .service_carousel_area_1 .single_service_item_5 h3, .service_carousel_area_4 .single_service_item_8 h3 {
      font-size: 24px;
      margin-bottom: 10px; }
    .single_service_item_comn_2 p, .service_carousel_area_1 .single_service_item_5 p, .service_carousel_area_4 .single_service_item_8 p {
      font-size: 14px;
      margin-bottom: 15px; }
    .single_service_item_comn_2 li, .service_carousel_area_1 .single_service_item_5 li, .service_carousel_area_4 .single_service_item_8 li {
      font-size: 14px;
      margin-bottom: 10px; }
    .single_service_item_comn_2 .boxed_btn, .service_carousel_area_1 .single_service_item_5 .boxed_btn, .service_carousel_area_4 .single_service_item_8 .boxed_btn {
      margin-top: 10px;
      padding: 10px 15px; }

  .service_carousel_area_2 .single_service_item_6 {
    padding: 15px; }
    .service_carousel_area_2 .single_service_item_6 h3 {
      font-size: 24px;
      margin-bottom: 10px; }
    .service_carousel_area_2 .single_service_item_6 p {
      font-size: 14px;
      margin-bottom: 15px; }
    .service_carousel_area_2 .single_service_item_6 li {
      font-size: 14px;
      margin-bottom: 10px; }
    .service_carousel_area_2 .single_service_item_6 .boxed_btn {
      margin-top: 10px;
      padding: 10px 15px; }

  .service_carousel_area_3 .single_service_item_7 {
    padding: 15px; }
    .service_carousel_area_3 .single_service_item_7 h3 {
      font-size: 24px;
      margin-bottom: 10px; }
    .service_carousel_area_3 .single_service_item_7 p {
      font-size: 14px;
      margin-bottom: 15px; }
    .service_carousel_area_3 .single_service_item_7 li {
      font-size: 14px;
      margin-bottom: 10px; }
    .service_carousel_area_3 .single_service_item_7 .boxed_btn {
      margin-top: 10px;
      padding: 10px 15px; } }
.promo_content_area .left_side h2 {
  color: #363bff;
  font-size: 36px;
  font-weight: 400;
  font-family: 'Fira Sans', sans-serif; }
.promo_content_area .left_side .promo_item {
  margin-top: 55px; }
  .promo_content_area .left_side .promo_item h3 {
    font-size: 20px;
    color: #fff;
    line-height: 35px;
    margin-left: 45px;
    font-weight: 500;
    font-family: 'Fira Sans', sans-serif; }
    .promo_content_area .left_side .promo_item h3 span {
      font-size: 36px;
      font-weight: 700;
      font-family: 'Fira Sans', sans-serif;
      color: #2cd63c;
      line-height: 30px;
      position: absolute;
      left: 15px; }
  .promo_content_area .left_side .promo_item p {
    font-size: 15px;
    color: #fff;
    line-height: 1.5;
    font-weight: 400;
    font-family: 'Fira Sans', sans-serif;
    margin: 0; }

.promo_content_2 {
  overflow: hidden;
  width: 100%;
  border-radius: 30px;
  position: relative;
  height: 440px; }
  .promo_content_2 img {
    display: block;
    height: 100%;
    width: auto;
    max-width: 1000%; }
  .promo_content_2:after {
    width: 100%;
    height: 100%;
    left: 0;
    top: 0;
    content: '';
    position: absolute;
    background: -webkit-linear-gradient(bottom, #0acffe 0%, #182dee 100%);
    background: -o-linear-gradient(top, #0acffe 0%, #182dee 100%);
    background: -moz-linear-gradient(to top, #0acffe 0%, #182dee 100%);
    background: linear-gradient(to top, #0acffe 0%, #182dee 100%);
    opacity: .2;
    z-index: 2; }

.promo_content_area_4 {
  width: 100%;
  height: 450px;
  overflow: hidden;
  position: relative;
  background-image: url("../img/promo/video_3.png");
  background-size: cover;
  background-position: center;
  background-repeat: no-repeat;
  padding: 80px 0;
  z-index: 1; }
  .promo_content_area_4:after {
    background: rgba(0, 0, 0, 0.7);
    position: absolute;
    content: '';
    left: 0;
    top: 0;
    width: 100%;
    height: 100%;
    z-index: -1; }
  .promo_content_area_4 .promo_content_4 {
    color: #fff; }
    .promo_content_area_4 .promo_content_4 p {
      font-size: 24px;
      font-weight: 400;
      font-family: 'Fira Sans', sans-serif; }
    .promo_content_area_4 .promo_content_4 h3 {
      font-size: 36px;
      margin-top: 160px;
      margin-bottom: 15px;
      font-weight: 400;
      font-family: 'Rubik', sans-serif; }
      .promo_content_area_4 .promo_content_4 h3 span {
        font-weight: 700; }
    .promo_content_area_4 .promo_content_4 .play_btn_pluse {
      top: 35%; }

.promo_content_6 {
  overflow: hidden;
  width: 100%;
  border-radius: 0px;
  position: relative;
  height: 400px; }
  .promo_content_6 img {
    display: block;
    width: auto; }
  .promo_content_6:after {
    width: 100%;
    height: 120%;
    left: 0;
    top: 0;
    content: '';
    position: absolute;
    background: -webkit-linear-gradient(bottom, #0acffe 0%, #182dee 100%);
    background: -o-linear-gradient(top, #0acffe 0%, #182dee 100%);
    background: -moz-linear-gradient(to top, #0acffe 0%, #182dee 100%);
    background: linear-gradient(to top, #0acffe 0%, #182dee 100%);
    opacity: .2;
    z-index: 2; }

.promo_content_7 {
  overflow: hidden;
  width: 100%;
  border-radius: 0px;
  position: relative;
  height: 260px; }
  .promo_content_7 img {
    display: block;
    height: 100%;
    width: auto;
    max-width: 200%; }
  .promo_content_7:after {
    width: 100%;
    height: 100%;
    left: 0;
    top: 0;
    content: '';
    position: absolute;
    background: -webkit-linear-gradient(bottom, #0acffe 0%, #182dee 100%);
    background: -o-linear-gradient(top, #0acffe 0%, #182dee 100%);
    background: -moz-linear-gradient(to top, #0acffe 0%, #182dee 100%);
    background: linear-gradient(to top, #0acffe 0%, #182dee 100%);
    opacity: .2;
    z-index: 2; }

@media only screen and (min-width: 992px) and (max-width: 1200px) {
  .promo_content_area .left_side h2 {
    font-size: 40px; }
  .promo_content_area .left_side .promo_item {
    margin-top: 20px; } }
@media only screen and (min-width: 768px) and (max-width: 991px) {
  .promo_content_area .left_side h2 {
    font-size: 30px;
    margin-bottom: 0px; }
  .promo_content_area .left_side .promo_item {
    margin-top: 30px; }
    .promo_content_area .left_side .promo_item p {
      font-size: 14px;
      line-height: 20px; }
  .promo_content_area .right_side .promo_content {
    margin-top: 30px; }

  .promo_content_2 {
    margin-top: 30px;
    height: 330px; }

  .promo_content_area_4 {
    height: 400px;
    padding: 60px 0; }

  .promo_content_6 {
    height: 300px; }

  .promo_content_7 {
    margin-bottom: 30px;
    height: 230px; } }
@media (max-width: 767px) {
  .promo_content_area .left_side {
    text-align: center; }
    .promo_content_area .left_side h2 {
      font-size: 28px;
      margin-bottom: 0px; }
    .promo_content_area .left_side .promo_item {
      margin-top: 30px; }
      .promo_content_area .left_side .promo_item p {
        font-size: 14px;
        line-height: 20px; }
      .promo_content_area .left_side .promo_item h3 {
        position: relative;
        display: inline-block;
        left: 20px; }
        .promo_content_area .left_side .promo_item h3 span {
          left: -44px; }

  .promo_content_2 {
    margin-top: 30px;
    height: 330px; }

  .promo_content_area_4 {
    height: 300px; }
    .promo_content_area_4 .promo_content_4 {
      color: #fff; }
      .promo_content_area_4 .promo_content_4 p {
        font-size: 18px; }
      .promo_content_area_4 .promo_content_4 h3 {
        font-size: 28px;
        margin-top: 65px; }
      .promo_content_area_4 .promo_content_4 .play_btn_pluse {
        top: 25%; }

  .promo_content_6 {
    height: 250px; }

  .promo_content_7 {
    margin-bottom: 30px;
    height: 200px; } }
.chat_section {
  width: 300px;
  position: fixed;
  right: 50px;
  bottom: -350px;
  -webkit-transition: all 1s ease-in-out;
  -moz-transition: all 1s ease-in-out;
  -ms-transition: all 1s ease-in-out;
  -o-transition: all 1s ease-in-out;
  transition: all 1s ease-in-out;
  z-index: 999; }

.first-section:hover {
  cursor: pointer; }

.open-more {
  bottom: 0px;
  -webkit-transition: all 1s ease-in-out;
  -moz-transition: all 1s ease-in-out;
  -ms-transition: all 1s ease-in-out;
  -o-transition: all 1s ease-in-out;
  transition: all 1s ease-in-out; }

.border-chat-top, .border-chat-middle, .border-chat-end {
  border: 1px solid #363bff;
  margin: 0px; }

.border-chat-top {
  border-radius: 25px 25px 0 0;
  margin: 0px; }

.first-section {
  border-radius: 20px 20px 0 0;
  background-color: #363bff; }
  .first-section p {
    color: #fff;
    margin: 0px;
    padding: 10px 0px;
    display: inline-block;
    cursor: pointer; }
  .first-section a {
    color: #fff;
    float: right;
    display: inline-block;
    font-size: 15px;
    padding: 12px 3px; }

.chat-section ul li {
  list-style: none;
  margin-top: 20px;
  position: relative; }

.chat-section {
  overflow-y: scroll;
  height: 300px;
  background: -webkit-linear-gradient(bottom, #6a11cb 0%, #2575fc 100%);
  background: -o-linear-gradient(top, #6a11cb 0%, #2575fc 100%);
  background: -moz-linear-gradient(to top, #6a11cb 0%, #2575fc 100%);
  background: linear-gradient(to top, #6a11cb 0%, #2575fc 100%); }

.chat-section ul {
  padding: 0px; }

.left-chat img, .right-chat img {
  width: 50px;
  height: 50px;
  float: left;
  margin: 0px 10px;
  border-radius: 50%; }

.right-chat img {
  float: right; }

.second-section {
  padding: 0px;
  margin: 0px;
  background-color: #cacaca;
  height: 300px; }

.left-chat, .right-chat {
  overflow: hidden; }

.left-chat p, .right-chat p {
  background-color: #FD8468;
  padding: 10px;
  color: #fff;
  border-radius: 5px;
  float: left;
  width: 70%;
  margin-bottom: 20px; }

.left-chat span, .right-chat span {
  position: absolute;
  right: 15px;
  bottom: 0px;
  color: #000; }

.right-chat span {
  left: 15px; }

.right-chat p {
  float: right;
  background-color: #FFFFFF;
  color: #FD8468; }

.third-section {
  background: #363bff;
  padding-right: 0; }

.text-bar input {
  width: 90%;
  margin-left: -15px;
  padding: 10px 10px;
  border: 1px solid #fff; }

.text-bar a {
  display: inline-block;
  margin: 0 auto; }
  .text-bar a i {
    background-color: #0cbafc;
    color: #fff;
    width: 30px;
    height: 30px;
    padding: 7px;
    border-radius: 50%;
    text-align: center; }

.left-chat:before {
  content: " ";
  position: absolute;
  top: 10px;
  left: 45px;
  border: 15px solid transparent;
  border-right-color: #FD8468; }

.right-chat:before {
  content: " ";
  position: absolute;
  top: 10px;
  right: 45px;
  border: 15px solid transparent;
  border-left-color: #fff; }

.client_area, .client_area_2 {
  background: -webkit-linear-gradient(left, #13128c 0%, #480884 100%);
  background: -o-linear-gradient(right, #13128c 0%, #480884 100%);
  background: -moz-linear-gradient(to right, #13128c 0%, #480884 100%);
  background: linear-gradient(to right, #13128c 0%, #480884 100%);
  padding: 100px 0px;
  min-height: 440px;
  height: 440px; }
  .client_area .client_img, .client_area_2 .client_img {
    margin-bottom: 20px;
    height: 110px;
    width: 100%;
    background: #fff;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out;
    -webkit-box-shadow: 0px 6px 10px 0px rgba(0, 0, 0, 0.1);
    -moz-box-shadow: 0px 6px 10px 0px rgba(0, 0, 0, 0.1);
    box-shadow: 0px 6px 10px 0px rgba(0, 0, 0, 0.1); }
    .client_area .client_img a, .client_area_2 .client_img a {
      font-size: 0;
      text-align: center; }
      .client_area .client_img a img, .client_area_2 .client_img a img {
        width: 70%; }
    .client_area .client_img:hover, .client_area_2 .client_img:hover {
      transform: scale(1.1); }

.client_area_2 {
  background: #00000059; }
  .client_area_2 .client_img {
    border: 8px solid #2930c1; }

.client_area_3 {
  background: -webkit-linear-gradient(left, #13128c 0%, #370863 100%);
  background: -o-linear-gradient(right, #13128c 0%, #370863 100%);
  background: -moz-linear-gradient(to right, #13128c 0%, #370863 100%);
  background: linear-gradient(to right, #13128c 0%, #370863 100%);
  padding: 100px 0px 80px;
  height: auto; }
  .client_area_3 .wrapper {
    margin: 0 15px; }
  .client_area_3 .client_img {
    margin: 20px 0;
    height: 110px;
    width: 100%;
    background: #fff;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out;
    -webkit-box-shadow: 0px 6px 10px 0px rgba(0, 0, 0, 0.1);
    -moz-box-shadow: 0px 6px 10px 0px rgba(0, 0, 0, 0.1);
    box-shadow: 0px 6px 10px 0px rgba(0, 0, 0, 0.1); }
    .client_area_3 .client_img a {
      font-size: 0;
      text-align: center; }
      .client_area_3 .client_img a img {
        width: 70%; }
    .client_area_3 .client_img:hover {
      transform: scale(1.1); }

.client_area_4 {
  background: none;
  padding: 100px 0px 80px;
  height: auto;
  border-bottom: 1px solid rgba(255, 255, 255, 0.1); }
  .client_area_4 .wrapper {
    margin: 0 15px; }
  .client_area_4 .client_img {
    margin: 0;
    height: 100px;
    width: 100%;
    border-radius: 5px;
    background: #fff;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out;
    -webkit-box-shadow: 0px 6px 10px 0px rgba(0, 0, 0, 0.1);
    -moz-box-shadow: 0px 6px 10px 0px rgba(0, 0, 0, 0.1);
    box-shadow: 0px 6px 10px 0px rgba(0, 0, 0, 0.1); }
    .client_area_4 .client_img a {
      font-size: 0;
      text-align: center; }
      .client_area_4 .client_img a img {
        width: 70%; }
    .client_area_4 .client_img:hover {
      transform: scale(1.1); }

.client_area_5 {
  height: auto;
  padding-bottom: 50px; }
  .client_area_5 .wrapper {
    margin: auto 20px; }
  .client_area_5 .client_img {
    height: 100px;
    width: 100%;
    box-shadow: none;
    background: #fff;
    border-radius: 5px;
    margin: 20px auto;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
    .client_area_5 .client_img:hover {
      -webkit-box-shadow: 0px 6px 10px 0px rgba(0, 0, 0, 0.1);
      -moz-box-shadow: 0px 6px 10px 0px rgba(0, 0, 0, 0.1);
      box-shadow: 0px 6px 10px 0px rgba(0, 0, 0, 0.1);
      transform: scale(1.1); }
    .client_area_5 .client_img a {
      font-size: 0;
      text-align: center; }
      .client_area_5 .client_img a img {
        width: 70%; }

.client_area_6 {
  background: none;
  height: auto; }
  .client_area_6 .wrapper {
    margin: auto 15px; }
  .client_area_6 .client_img {
    margin: 20px auto;
    height: 100px;
    width: 100%;
    border-radius: 5px;
    background: #fff;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out;
    -webkit-box-shadow: 0px 0px 15px 3px rgba(0, 0, 0, 0.1);
    -moz-box-shadow: 0px 0px 15px 3px rgba(0, 0, 0, 0.1);
    box-shadow: 0px 0px 15px 3px rgba(0, 0, 0, 0.1); }
    .client_area_6 .client_img:hover {
      transform: scale(1.1);
      box-shadow: none; }
  .client_area_6 a {
    font-size: 0;
    text-align: center; }
    .client_area_6 a img {
      width: 70%; }
  .client_area_6 .swiper-container {
    padding-bottom: 30px; }
  .client_area_6 .swiper-pagination-bullet {
    background: transparent;
    border: 1px solid transparent;
    padding: 10px;
    position: relative;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out;
    top: 10px;
    opacity: 1; }
    .client_area_6 .swiper-pagination-bullet:after {
      background: #15efa4;
      content: '';
      width: 10px;
      top: 5px;
      left: 5px;
      height: 10px;
      border-radius: 50%;
      position: absolute; }
  .client_area_6 .swiper-pagination-bullet-active {
    border: 1px solid #15efa4; }

@media only screen and (min-width: 992px) and (max-width: 1200px) {
  .client_area, .client_area_2 {
    padding: 55px 0px;
    min-height: 350px;
    height: 350px; } }
@media only screen and (min-width: 768px) and (max-width: 991px) {
  .client_area, .client_area_2 {
    padding: 45px 0px;
    min-height: 350px;
    height: 350px; }
    .client_area .client_img, .client_area_2 .client_img {
      height: 75px; }

  .client_area_2 .client_img {
    border: 4px solid #2930c1; }

  .client_area_3 {
    padding: 55px 0px 35px; }

  .client_area_4 {
    padding: 55px 0px 35px; } }
@media (max-width: 767px) {
  .client_area, .client_area_2 {
    padding: 50px 0px 75px;
    height: auto; }
    .client_area .client_img, .client_area_2 .client_img {
      height: 140px; }
      .client_area .client_img img, .client_area_2 .client_img img {
        width: auto; }

  .client_area_3 {
    padding: 55px 0px 35px; }
    .client_area_3 .wrapper {
      padding: 0 90px; }
    .client_area_3 .client_img {
      height: 130px;
      width: 80%; }
      .client_area_3 .client_img img {
        width: 70%; }

  .client_area_4 {
    padding: 55px 0px 35px; }
    .client_area_4 .wrapper {
      padding: 0 90px; }
    .client_area_4 .client_img {
      height: 130px;
      width: 80%; }
      .client_area_4 .client_img img {
        width: 70%; }

  .client_area_5 {
    padding-bottom: 20px; }
    .client_area_5 .client_img {
      width: 80%;
      height: 140px; }

  .client_area_6 .client_img {
    width: 80%;
    height: 140px; } }
@media only screen and (min-width: 480px) and (max-width: 767px) {
  .client_area_3 {
    padding: 55px 0px 35px; }
    .client_area_3 .wrapper {
      padding: 0; }

  .client_area_4 {
    padding: 55px 0px 35px; }
    .client_area_4 .wrapper {
      padding: 0; }

  .client_area_5 .client_img {
    width: 100%;
    height: 130px; }

  .client_area_6 .client_img {
    width: 100%;
    height: 130px; } }
.subscribe_area_1, .subscribe_area_2 {
  position: relative;
  margin-left: 35px;
  top: -135px;
  background: #fff;
  border-radius: 10px;
  padding: 25px;
  overflow: hidden;
  z-index: 1;
  -webkit-box-shadow: -6px 0px 10px 0px rgba(0, 0, 0, 0.1);
  -moz-box-shadow: -6px 0px 10px 0px rgba(0, 0, 0, 0.1);
  box-shadow: -6px 0px 10px 0px rgba(0, 0, 0, 0.1); }
  .subscribe_area_1:after, .subscribe_area_2:after {
    position: absolute;
    content: '';
    width: 100%;
    height: 100%;
    border-radius: 10px;
    left: 50%;
    -webkit-transform: rotate(65deg);
    /* Ch <36, Saf 5.1+, iOS < 9.2, An =<4.4.4 */
    -ms-transform: rotate(65deg);
    /* IE 9 */
    transform: rotate(65deg);
    /* IE 10, Fx 16+, Op 12.1+ */
    top: 35%;
    z-index: -1;
    background: #0cbafc;
    opacity: .25; }
  .subscribe_area_1 h4, .subscribe_area_2 h4 {
    font-size: 18px;
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif;
    color: #0cbafc;
    margin-bottom: 15px; }
  .subscribe_area_1 p, .subscribe_area_2 p {
    font-size: 14px;
    color: #304e73;
    margin-bottom: 40px;
    font-weight: 400;
    font-family: 'Fira Sans', sans-serif;
    line-height: 24px; }
  .subscribe_area_1 .subscribe_in, .subscribe_area_2 .subscribe_in {
    width: 100%;
    border-radius: 5px;
    background: #fff;
    border: 1px solid #0cbafc;
    -webkit-box-shadow: 0px 0px 13px 0px rgba(12, 186, 252, 0.3);
    -moz-box-shadow: 0px 0px 13px 0px rgba(12, 186, 252, 0.3);
    box-shadow: 0px 0px 13px 0px rgba(12, 186, 252, 0.3);
    margin-bottom: 30px;
    font-weight: 400;
    font-family: 'Fira Sans', sans-serif; }
    .subscribe_area_1 .subscribe_in::placeholder, .subscribe_area_2 .subscribe_in::placeholder {
      opacity: 0.8;
      color: #0cbafc; }
    .subscribe_area_1 .subscribe_in:-ms-input-placeholder, .subscribe_area_2 .subscribe_in:-ms-input-placeholder {
      opacity: 0.8;
      color: #0cbafc; }
    .subscribe_area_1 .subscribe_in::-ms-input-placeholder, .subscribe_area_2 .subscribe_in::-ms-input-placeholder {
      opacity: 0.8;
      color: #0cbafc; }
    .subscribe_area_1 .subscribe_in:-moz-placeholder, .subscribe_area_2 .subscribe_in:-moz-placeholder {
      opacity: 0.8;
      color: #0cbafc; }
    .subscribe_area_1 .subscribe_in::-moz-placeholder, .subscribe_area_2 .subscribe_in::-moz-placeholder {
      opacity: 0.8;
      color: #0cbafc; }
  .subscribe_area_1 button, .subscribe_area_2 button {
    display: block;
    width: 100%;
    font-size: 18px;
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif;
    padding: 12px;
    color: #fff;
    background: #2cd63c;
    border: none;
    border-radius: 5px;
    margin-bottom: 90px;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
    .subscribe_area_1 button:hover, .subscribe_area_2 button:hover {
      cursor: pointer;
      -webkit-box-shadow: 0 0 10px 0 #999;
      -moz-box-shadow: 0 0 10px 0 #999;
      box-shadow: 0 0 10px 0 #999; }
  .subscribe_area_1 .phoneNo h4, .subscribe_area_2 .phoneNo h4 {
    color: #304e73;
    font-weight: 700;
    font-family: 'Rubik', sans-serif;
    font-size: 18px; }
  .subscribe_area_1 .phoneNo h3, .subscribe_area_2 .phoneNo h3 {
    -webkit-box-shadow: 0px 3px 7px 0px rgba(12, 186, 252, 0.35);
    -moz-box-shadow: 0px 3px 7px 0px rgba(12, 186, 252, 0.35);
    box-shadow: 0px 3px 7px 0px rgba(12, 186, 252, 0.35);
    background: #fff;
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif;
    font-size: 24px;
    color: #0cbafc;
    text-align: center;
    padding: 15px 35px;
    margin-bottom: 15px;
    display: inline-block;
    border-radius: 50px; }

.subscribe_area_2 {
  top: -130px; }
  .subscribe_area_2 h4 {
    font-size: 24px;
    color: #363bff;
    margin-bottom: 10px; }
    .subscribe_area_2 h4 span {
      color: #2cd63c; }
  .subscribe_area_2 p {
    margin-bottom: 30px; }
  .subscribe_area_2 .subscribe_in {
    padding-left: 20px;
    font-size: 14px; }
  .subscribe_area_2 .subscribe_in, .subscribe_area_2 .subscribe_btn {
    border-radius: 25px; }
  .subscribe_area_2 .phoneNo h4 {
    font-size: 18px;
    color: #304e73;
    margin-bottom: 10px; }

@media only screen and (min-width: 992px) and (max-width: 1200px) {
  .subscribe_area_1, .subscribe_area_2 {
    top: -98px;
    padding: 20px; }
    .subscribe_area_1 h4, .subscribe_area_2 h4 {
      font-size: 16px; }
    .subscribe_area_1 p, .subscribe_area_2 p {
      font-size: 14px;
      margin-bottom: 25px; }
    .subscribe_area_1 .subscribe_in, .subscribe_area_2 .subscribe_in {
      margin-bottom: 25px; }
    .subscribe_area_1 button, .subscribe_area_2 button {
      margin-bottom: 35px; }
    .subscribe_area_1 .phoneNo h3, .subscribe_area_2 .phoneNo h3 {
      padding: 10px 20px;
      border-radius: 50px; }

  .subscribe_area_2 {
    top: -75px; } }
@media only screen and (min-width: 768px) and (max-width: 991px) {
  .subscribe_area_1, .subscribe_area_2 {
    top: -76px;
    padding: 20px; }
    .subscribe_area_1:after, .subscribe_area_2:after {
      left: 40%;
      -webkit-transform: rotate(70deg);
      /* Ch <36, Saf 5.1+, iOS < 9.2, An =<4.4.4 */
      -ms-transform: rotate(70deg);
      /* IE 9 */
      transform: rotate(70deg);
      /* IE 10, Fx 16+, Op 12.1+ */
      top: 42%; }
    .subscribe_area_1 h4, .subscribe_area_2 h4 {
      font-size: 16px; }
    .subscribe_area_1 p, .subscribe_area_2 p {
      font-size: 14px;
      margin-bottom: 25px; }
    .subscribe_area_1 .subscribe_in, .subscribe_area_2 .subscribe_in {
      margin-bottom: 25px; }
    .subscribe_area_1 button, .subscribe_area_2 button {
      margin-bottom: 35px; }
    .subscribe_area_1 .phoneNo h3, .subscribe_area_2 .phoneNo h3 {
      padding: 10px 20px;
      border-radius: 50px; }

  .subscribe_area_2 {
    top: -58px; } }
@media (max-width: 767px) {
  .subscribe_area_1, .subscribe_area_2 {
    top: 25px;
    padding: 20px;
    margin: 0px;
    width: 100%;
    border-radius: 0; }
    .subscribe_area_1:after, .subscribe_area_2:after {
      left: 38%;
      -webkit-transform: rotate(70deg);
      /* Ch <36, Saf 5.1+, iOS < 9.2, An =<4.4.4 */
      -ms-transform: rotate(70deg);
      /* IE 9 */
      transform: rotate(70deg);
      /* IE 10, Fx 16+, Op 12.1+ */
      top: 52%; }
    .subscribe_area_1 h4, .subscribe_area_2 h4 {
      font-size: 16px; }
    .subscribe_area_1 p, .subscribe_area_2 p {
      font-size: 14px;
      margin-bottom: 25px; }
    .subscribe_area_1 .subscribe_in, .subscribe_area_2 .subscribe_in {
      margin-bottom: 25px; }
    .subscribe_area_1 button, .subscribe_area_2 button {
      margin-bottom: 35px; }
    .subscribe_area_1 .phoneNo h3, .subscribe_area_2 .phoneNo h3 {
      padding: 10px 20px;
      border-radius: 50px; }

  .subscribe_area_2 {
    top: 25px;
    padding: 20px;
    margin: 0px;
    width: 100%; } }
.tooltip .tooltip-inner {
  background-color: #0cc3ff;
  color: #fff;
  border-radius: 7px;
  padding: 0 10px !important; }

.tooltip.bs-tooltip-top .arrow:before {
  border-top-color: #0cc3ff !important; }

.info_area_1 {
  background-image: url(../img/info_bg.jpg);
  background-size: cover;
  background-position: center;
  background-repeat: no-repeat;
  position: relative;
  z-index: 1; }
  .info_area_1:after {
    content: '';
    position: absolute;
    left: 0;
    top: 0;
    width: 100%;
    height: 100%;
    background: #000033;
    z-index: -1;
    opacity: .9; }
  .info_area_1 .info_img {
    position: relative;
    left: -30px; }
  .info_area_1 h3 {
    color: #fff;
    font-size: 36px;
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif;
    margin-bottom: 60px; }
    .info_area_1 h3 span {
      color: #2cd63c; }
  .info_area_1 .info_box {
    position: relative;
    left: 70px;
    margin-bottom: 60px; }
    .info_area_1 .info_box i {
      position: absolute;
      left: -70px;
      color: #fff;
      background: rgba(0, 50, 251, 0.45);
      padding: 15px;
      border: 4px solid #fff;
      margin-top: 5px;
      border-radius: 50%;
      font-size: 22px; }
    .info_area_1 .info_box h4 {
      font-size: 24px;
      color: #2cd63c;
      font-weight: 500;
      font-family: 'Fira Sans', sans-serif; }
    .info_area_1 .info_box p {
      color: #fff;
      font-weight: 400;
      font-family: 'Fira Sans', sans-serif;
      line-height: 1.5;
      font-size: 16px; }

.info_area_2 {
  background-image: url(../img/info_bg.jpg);
  background-size: cover;
  background-position: center;
  background-repeat: no-repeat;
  position: relative;
  z-index: 1; }
  .info_area_2:after {
    content: '';
    position: absolute;
    left: 0;
    top: 0;
    width: 100%;
    height: 100%;
    background: rgba(0, 0, 0, 0.7);
    z-index: -1;
    opacity: .9; }
  .info_area_2 .info_img {
    position: relative;
    left: -30px; }
  .info_area_2 h3 {
    color: #fff;
    font-size: 36px;
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif;
    margin-bottom: 60px; }
    .info_area_2 h3 span {
      color: #2cd63c; }
  .info_area_2 .info_box {
    position: relative;
    left: 70px;
    margin-bottom: 60px; }
    .info_area_2 .info_box i {
      position: absolute;
      left: -70px;
      color: #fff;
      background: -webkit-linear-gradient(bottom, #5317e6 0%, #07164e 100%);
      background: -o-linear-gradient(top, #5317e6 0%, #07164e 100%);
      background: -moz-linear-gradient(to top, #5317e6 0%, #07164e 100%);
      background: linear-gradient(to top, #5317e6 0%, #07164e 100%);
      padding: 15px;
      border: 4px solid #fff;
      margin-top: 5px;
      border-radius: 50%;
      font-size: 22px; }
    .info_area_2 .info_box h4 {
      font-size: 24px;
      color: #2cd63c;
      font-weight: 500;
      font-family: 'Fira Sans', sans-serif; }
    .info_area_2 .info_box p {
      color: #fff;
      font-weight: 400;
      font-family: 'Fira Sans', sans-serif;
      line-height: 1.5;
      font-size: 16px; }

@media only screen and (min-width: 768px) and (max-width: 991px) {
  .info_area_1 h3 {
    font-size: 28px;
    margin-bottom: 25px; }
  .info_area_1 .info_box {
    padding-right: 55px;
    margin-bottom: 25px;
    left: 60px; }
    .info_area_1 .info_box i {
      left: -60px;
      padding: 12px;
      border: 3px solid #fff;
      margin-top: 0px;
      border-radius: 50%;
      font-size: 18px; }
    .info_area_1 .info_box h4 {
      font-size: 18px; }
    .info_area_1 .info_box p {
      font-size: 14px; }

  .info_area_2 h3 {
    font-size: 28px;
    margin-bottom: 25px; }
  .info_area_2 .info_box {
    padding-right: 55px;
    margin-bottom: 25px;
    left: 60px; }
    .info_area_2 .info_box i {
      left: -60px;
      padding: 12px;
      border: 3px solid #fff;
      margin-top: 0px;
      border-radius: 50%;
      font-size: 18px; }
    .info_area_2 .info_box h4 {
      font-size: 18px; }
    .info_area_2 .info_box p {
      font-size: 14px; } }
@media (max-width: 767px) {
  .info_area_1 h3 {
    font-size: 28px;
    margin-bottom: 25px; }
  .info_area_1 .info_box {
    padding-right: 55px;
    margin-bottom: 25px; }
    .info_area_1 .info_box i {
      left: -60px;
      padding: 12px;
      border: 3px solid #fff;
      margin-top: 0px;
      border-radius: 50%;
      font-size: 18px; }
    .info_area_1 .info_box h4 {
      font-size: 18px; }
    .info_area_1 .info_box p {
      font-size: 14px; }

  .info_area_2 h3 {
    font-size: 28px;
    margin-bottom: 25px; }
  .info_area_2 .info_box {
    padding-right: 55px;
    margin-bottom: 25px; }
    .info_area_2 .info_box i {
      left: -60px;
      padding: 12px;
      border: 3px solid #fff;
      margin-top: 0px;
      border-radius: 50%;
      font-size: 18px; }
    .info_area_2 .info_box h4 {
      font-size: 18px; }
    .info_area_2 .info_box p {
      font-size: 14px; } }
.terms_and_con_area {
  background: #00000056; }
  .terms_and_con_area .single_terms h2 {
    font-size: 24px;
    margin: 40px 0 10px;
    color: #363bff; }
  .terms_and_con_area .single_terms p {
    font-size: 16px;
    color: #fff;
    line-height: 1.5; }

.mega_nav.navbar .navbar-nav >
li.nav-item {
  padding: 0 15px; }
  .mega_nav.navbar .navbar-nav >
  li.nav-item:last-child {
    padding-right: 0; }

.navbar .navbar-nav >
li.nav-item > a {
  position: relative;
  display: inline-block;
  z-index: 1;
  font-size: 18px;
  padding: 30px 0px;
  color: #fff;
  font-weight: 400;
  font-family: 'Fira Sans', sans-serif; }
  .navbar .navbar-nav >
  li.nav-item > a:after {
    position: absolute;
    width: 100%;
    background: #fff;
    height: 2px;
    bottom: 0px;
    left: 0;
    content: '';
    transform-origin: right center;
    transform: scaleX(0);
    transition: transform 0.25s cubic-bezier(0.37, 0.31, 0.2, 0.85), -webkit-transform 0.25s cubic-bezier(0.37, 0.31, 0.2, 0.85); }
  .navbar .navbar-nav >
  li.nav-item > a:hover {
    color: #fff; }
  .navbar .navbar-nav >
  li.nav-item > a:hover:after {
    transform: scaleX(1);
    transform-origin: left center;
    background: #fff; }

.navbar .navbar-nav li.nav-item.nav_right {
  position: relative;
  padding-left: 5px !important; }
  .navbar .navbar-nav li.nav-item.nav_right a {
    cursor: pointer;
    display: inline-block;
    margin-left: 5px;
    font-size: 16px;
    color: #fff; }
    .navbar .navbar-nav li.nav-item.nav_right a:after {
      display: none; }
    .navbar .navbar-nav li.nav-item.nav_right a:hover:after {
      display: none; }
  .navbar .navbar-nav li.nav-item.nav_right span {
    position: absolute;
    right: 10px;
    top: 25px;
    color: #fff;
    z-index: 1;
    background: red;
    border-radius: 15px;
    height: 15px;
    width: 15px;
    text-align: center;
    font-size: 12px; }

.home_drop {
  position: relative; }
  .home_drop #mega_home {
    -webkit-box-shadow: 0px 12px 51px 0px rgba(0, 0, 0, 0.3);
    -moz-box-shadow: 0px 12px 51px 0px rgba(0, 0, 0, 0.3);
    box-shadow: 0px 12px 51px 0px rgba(0, 0, 0, 0.3);
    background: #fff;
    width: 600px;
    padding: 20px;
    right: auto;
    left: 0;
    top: 100%;
    z-index: -1;
    position: absolute; }
    .home_drop #mega_home .single_element {
      display: flex;
      width: 50%;
      padding: 15px;
      float: left;
      margin-bottom: 10px;
      -webkit-transition: all 0.3s ease-in-out;
      -moz-transition: all 0.3s ease-in-out;
      -ms-transition: all 0.3s ease-in-out;
      -o-transition: all 0.3s ease-in-out;
      transition: all 0.3s ease-in-out;
      -webkit-box-shadow: 0px 2px 4px 0px rgba(3, 27, 78, 0.06);
      -moz-box-shadow: 0px 2px 4px 0px rgba(3, 27, 78, 0.06);
      box-shadow: 0px 2px 4px 0px rgba(3, 27, 78, 0.06); }
      .home_drop #mega_home .single_element .numbering p {
        margin-right: 15px;
        font-size: 36px;
        -webkit-transition: all 0.3s ease-in-out;
        -moz-transition: all 0.3s ease-in-out;
        -ms-transition: all 0.3s ease-in-out;
        -o-transition: all 0.3s ease-in-out;
        transition: all 0.3s ease-in-out;
        font-weight: 700;
        font-family: 'Rubik', sans-serif;
        color: #2cd63c; }
      .home_drop #mega_home .single_element .discription .title {
        font-size: 24px;
        font-weight: 700;
        font-family: 'Rubik', sans-serif;
        color: #191b41;
        -webkit-transition: all 0.3s ease-in-out;
        -moz-transition: all 0.3s ease-in-out;
        -ms-transition: all 0.3s ease-in-out;
        -o-transition: all 0.3s ease-in-out;
        transition: all 0.3s ease-in-out; }
      .home_drop #mega_home .single_element .discription p {
        color: #191b41;
        font-size: 14px;
        -webkit-transition: all 0.3s ease-in-out;
        -moz-transition: all 0.3s ease-in-out;
        -ms-transition: all 0.3s ease-in-out;
        -o-transition: all 0.3s ease-in-out;
        transition: all 0.3s ease-in-out;
        font-weight: 400;
        font-family: 'Rubik', sans-serif; }
      .home_drop #mega_home .single_element:hover {
        background: #0cbafc; }
        .home_drop #mega_home .single_element:hover .numbering p {
          color: #fff; }
        .home_drop #mega_home .single_element:hover .discription .title {
          color: #fff; }
        .home_drop #mega_home .single_element:hover .discription p {
          color: #fff; }

.mega_page_details {
  -webkit-box-shadow: 0px 12px 51px 0px rgba(0, 0, 0, 0.3);
  -moz-box-shadow: 0px 12px 51px 0px rgba(0, 0, 0, 0.3);
  box-shadow: 0px 12px 51px 0px rgba(0, 0, 0, 0.3);
  background: #fff;
  padding: 20px;
  visibility: visible;
  position: absolute;
  left: 0;
  z-index: -1; }
  .mega_page_details #mega_page_slider {
    margin-top: 10px;
    height: 250px;
    overflow: hidden; }
    .mega_page_details #mega_page_slider .carousel-control-next i, .mega_page_details #mega_page_slider .carousel-control-prev i {
      color: #363bff;
      padding: 10px;
      border-radius: 40px;
      font-size: 28px;
      -webkit-transition: all 0.5s ease-in-out;
      -moz-transition: all 0.5s ease-in-out;
      -ms-transition: all 0.5s ease-in-out;
      -o-transition: all 0.5s ease-in-out;
      transition: all 0.5s ease-in-out; }
      .mega_page_details #mega_page_slider .carousel-control-next i:hover, .mega_page_details #mega_page_slider .carousel-control-prev i:hover {
        background: rgba(0, 0, 0, 0.5);
        color: #fff; }
  .mega_page_details li a {
    font-size: 14px;
    font-weight: 400;
    font-family: 'Fira Sans', sans-serif;
    padding: 10px 0;
    margin-bottom: 5px;
    display: block;
    border-bottom: 1px solid #f7f7f7;
    color: #191b41;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
    .mega_page_details li a:hover {
      color: #363bff; }

.blog_drop {
  position: relative; }
  .blog_drop #mega_blog {
    -webkit-box-shadow: 0px 12px 51px 0px rgba(0, 0, 0, 0.3);
    -moz-box-shadow: 0px 12px 51px 0px rgba(0, 0, 0, 0.3);
    box-shadow: 0px 12px 51px 0px rgba(0, 0, 0, 0.3);
    background: #fff;
    width: 270px;
    padding: 20px;
    right: auto;
    left: 0;
    top: 100%;
    z-index: -1;
    position: absolute; }
    .blog_drop #mega_blog .mega_blog_details {
      -webkit-transition: all 0.3s ease-in-out;
      -moz-transition: all 0.3s ease-in-out;
      -ms-transition: all 0.3s ease-in-out;
      -o-transition: all 0.3s ease-in-out;
      transition: all 0.3s ease-in-out;
      padding: 0px; }
      .blog_drop #mega_blog .mega_blog_details li a {
        font-size: 14px;
        font-weight: 400;
        font-family: 'Fira Sans', sans-serif;
        padding: 10px;
        margin-bottom: 5px;
        display: block;
        border-bottom: 1px solid #f7f7f7;
        color: #191b41;
        -webkit-transition: all 0.3s ease-in-out;
        -moz-transition: all 0.3s ease-in-out;
        -ms-transition: all 0.3s ease-in-out;
        -o-transition: all 0.3s ease-in-out;
        transition: all 0.3s ease-in-out; }
        .blog_drop #mega_blog .mega_blog_details li a:hover {
          color: #363bff; }

.hosting_drop {
  position: relative; }
  .hosting_drop #mega_hosting {
    -webkit-box-shadow: 0px 12px 51px 0px rgba(0, 0, 0, 0.3);
    -moz-box-shadow: 0px 12px 51px 0px rgba(0, 0, 0, 0.3);
    box-shadow: 0px 12px 51px 0px rgba(0, 0, 0, 0.3);
    background: #fff;
    width: 270px;
    padding: 20px;
    right: auto;
    left: 0;
    top: 100%;
    z-index: -1;
    position: absolute; }
    .hosting_drop #mega_hosting .mega_hosting_details {
      padding: 0px; }
      .hosting_drop #mega_hosting .mega_hosting_details li a {
        font-size: 14px;
        font-weight: 400;
        font-family: 'Fira Sans', sans-serif;
        padding: 10px;
        margin-bottom: 5px;
        display: block;
        border-bottom: 1px solid #f7f7f7;
        color: #191b41;
        -webkit-transition: all 0.3s ease-in-out;
        -moz-transition: all 0.3s ease-in-out;
        -ms-transition: all 0.3s ease-in-out;
        -o-transition: all 0.3s ease-in-out;
        transition: all 0.3s ease-in-out; }
        .hosting_drop #mega_hosting .mega_hosting_details li a:hover {
          color: #363bff; }

.nav_right .drop_notf_btn, .nav_right .drop_cart_btn {
  position: relative;
  z-index: 1;
  display: inline-block; }
  .nav_right .drop_notf_btn a, .nav_right .drop_notf_btn a:hover, .nav_right .drop_cart_btn a, .nav_right .drop_cart_btn a:hover {
    color: #fff; }
.nav_right #collapse_notf, .nav_right #collapse_cart {
  width: 300px;
  left: auto;
  right: 0;
  top: 100%;
  z-index: -1;
  position: absolute; }
.nav_right .drop_cart_details {
  -webkit-box-shadow: 0px 12px 51px 0px rgba(0, 0, 0, 0.3);
  -moz-box-shadow: 0px 12px 51px 0px rgba(0, 0, 0, 0.3);
  box-shadow: 0px 12px 51px 0px rgba(0, 0, 0, 0.3);
  -webkit-transition: all 0.3s ease-in-out;
  -moz-transition: all 0.3s ease-in-out;
  -ms-transition: all 0.3s ease-in-out;
  -o-transition: all 0.3s ease-in-out;
  transition: all 0.3s ease-in-out;
  background: #fff;
  color: #304e73;
  padding: 20px; }
  .nav_right .drop_cart_details .cart_title {
    font-size: 18px;
    margin-bottom: 15px; }
  .nav_right .drop_cart_details .cart_text {
    font-size: 14px;
    line-height: 1.5;
    margin-bottom: 10px; }
    .nav_right .drop_cart_details .cart_text i {
      cursor: auto !important;
      color: #304e73 !important;
      padding: 0 !important;
      font-weight: 700; }
  .nav_right .drop_cart_details .cart_btn {
    padding: 10px;
    font-size: 16px;
    display: inline-block;
    margin: 0 auto;
    color: #0cbafc;
    background: transparent;
    border-radius: 5px;
    border: 1px solid #0cbafc;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out;
    margin-right: 15px;
    margin-top: 10px; }
    .nav_right .drop_cart_details .cart_btn:hover {
      color: #fff;
      background: #0cbafc; }
.nav_right .drop_notf_details {
  -webkit-box-shadow: 0px 12px 51px 0px rgba(0, 0, 0, 0.3);
  -moz-box-shadow: 0px 12px 51px 0px rgba(0, 0, 0, 0.3);
  box-shadow: 0px 12px 51px 0px rgba(0, 0, 0, 0.3);
  -webkit-transition: all 0.3s ease-in-out;
  -moz-transition: all 0.3s ease-in-out;
  -ms-transition: all 0.3s ease-in-out;
  -o-transition: all 0.3s ease-in-out;
  transition: all 0.3s ease-in-out;
  background: #fff;
  color: #304e73;
  padding: 20px; }
  .nav_right .drop_notf_details .notf_title {
    font-size: 18px;
    margin-bottom: 15px; }
  .nav_right .drop_notf_details .notf_text {
    font-size: 14px;
    line-height: 1.5;
    margin-bottom: 10px; }
    .nav_right .drop_notf_details .notf_text i {
      cursor: auto !important;
      color: #304e73 !important;
      padding: 0 !important;
      font-weight: 700; }
  .nav_right .drop_notf_details .notf_btn {
    padding: 10px;
    font-size: 16px;
    display: inline-block;
    margin: 0 auto;
    color: #0cbafc;
    border-radius: 5px;
    border: 1px solid #0cbafc;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out;
    margin-right: 15px;
    margin-top: 10px;
    background: transparent; }
    .nav_right .drop_notf_details .notf_btn:hover {
      color: #fff;
      background: #0cbafc; }

.header_wrap {
  position: absolute;
  width: 100%;
  z-index: 99; }
  .header_wrap .sign_in_up_area {
    margin-top: 25px; }
    .header_wrap .sign_in_up_area .boxed_btn.boxed_blue_btn_2, .header_wrap .sign_in_up_area .hosting_brand .container .section_title .boxed_btn.boxed_blue_btn, .hosting_brand .container .section_title .header_wrap .sign_in_up_area .boxed_btn.boxed_blue_btn, .header_wrap .sign_in_up_area .boxed_btn.boxed_blue_btn {
      padding: 10px 30px; }
    .header_wrap .sign_in_up_area .boxed_btn.boxed_green_btn_2, .header_wrap .sign_in_up_area .hosting_brand .container .section_title .boxed_btn.boxed_green_btn, .hosting_brand .container .section_title .header_wrap .sign_in_up_area .boxed_btn.boxed_green_btn, .header_wrap .sign_in_up_area .boxed_btn.boxed_green_btn, .header_wrap .sign_in_up_area .hero_area .hero_content_wrapper .hero_content .boxed_btn, .hero_area .hero_content_wrapper .hero_content .header_wrap .sign_in_up_area .boxed_btn {
      padding: 10px 30px; }
  .header_wrap .navbar .navbar-nav > li.nav-item > a {
    padding: 15px 0 25px;
    font-size: 16px; }
    .header_wrap .navbar .navbar-nav > li.nav-item > a:after {
      height: 2px; }
  .header_wrap .blog_drop #mega_blog {
    left: auto;
    right: 0; }

.header_wrap_2 {
  position: absolute;
  margin-top: 55px;
  width: 100%;
  z-index: 99; }
  .header_wrap_2 > .container {
    -webkit-box-shadow: 0px 12px 51px 0px rgba(0, 0, 0, 0.3);
    -moz-box-shadow: 0px 12px 51px 0px rgba(0, 0, 0, 0.3);
    box-shadow: 0px 12px 51px 0px rgba(0, 0, 0, 0.3);
    background: #fff;
    border-radius: 10px; }
  .header_wrap_2 .navbar .navbar-nav > li.nav-item > a {
    padding: 30px 5px;
    font-size: 18px;
    line-height: 1.2;
    color: #304e73; }
    .header_wrap_2 .navbar .navbar-nav > li.nav-item > a:after {
      height: 2px;
      background: #363bff; }
    .header_wrap_2 .navbar .navbar-nav > li.nav-item > a:hover {
      color: #363bff; }
    .header_wrap_2 .navbar .navbar-nav > li.nav-item > a:hover:after {
      background: #363bff; }

.header_wrap_3 {
  width: 100%;
  z-index: 99;
  position: absolute; }
  .header_wrap_3 .header_top {
    height: 50px;
    background: -webkit-linear-gradient(right, #13128c 0%, #370863 100%);
    background: -o-linear-gradient(left, #13128c 0%, #370863 100%);
    background: -moz-linear-gradient(to left, #13128c 0%, #370863 100%);
    background: linear-gradient(to left, #13128c 0%, #370863 100%);
    color: #fff;
    /** Custom Select **/ }
    .header_wrap_3 .header_top p {
      display: inline-block;
      font-size: 16px;
      margin-right: 25px;
      font-weight: 400;
      font-family: 'Fira Sans', sans-serif; }
      .header_wrap_3 .header_top p i {
        margin-right: 5px;
        font-size: 14px; }
    .header_wrap_3 .header_top .boxed_btn {
      padding: 15px;
      width: 80px;
      height: 50px;
      font-weight: 400;
      font-family: 'Fira Sans', sans-serif;
      background: rgba(13, 18, 35, 0.2);
      -webkit-transition: all 0.3s ease-in-out;
      -moz-transition: all 0.3s ease-in-out;
      -ms-transition: all 0.3s ease-in-out;
      -o-transition: all 0.3s ease-in-out;
      transition: all 0.3s ease-in-out;
      color: #fff;
      display: inline-block;
      font-size: 12px;
      margin-right: 15px; }
      .header_wrap_3 .header_top .boxed_btn i {
        margin-right: 5px; }
    .header_wrap_3 .header_top .custom_select_wrapper {
      position: relative; }
      .header_wrap_3 .header_top .custom_select_wrapper select {
        display: none;
        position: relative; }
      .header_wrap_3 .header_top .custom_select_wrapper .custom_select .custom_select_trigger {
        position: relative;
        display: block;
        width: 100px;
        height: 50px;
        padding: 18px 12px;
        font-size: 12px;
        font-weight: 400;
        border: none;
        color: #fff;
        background: rgba(13, 18, 35, 0.2);
        cursor: pointer;
        -webkit-transition: all 0.5s ease-in-out;
        -moz-transition: all 0.5s ease-in-out;
        -ms-transition: all 0.5s ease-in-out;
        -o-transition: all 0.5s ease-in-out;
        transition: all 0.5s ease-in-out; }
        .header_wrap_3 .header_top .custom_select_wrapper .custom_select .custom_select_trigger:after {
          position: absolute;
          display: block;
          content: '';
          width: 10px;
          height: 10px;
          top: 50%;
          right: 15px;
          margin-top: -3px;
          border-bottom: 1px solid #fff;
          border-right: 1px solid #fff;
          transform: rotate(45deg) translateY(-50%);
          -webkit-transition: all 0.5s ease-in-out;
          -moz-transition: all 0.5s ease-in-out;
          -ms-transition: all 0.5s ease-in-out;
          -o-transition: all 0.5s ease-in-out;
          transition: all 0.5s ease-in-out;
          transform-origin: 50% 0; }
      .header_wrap_3 .header_top .custom_select_wrapper .custom_select.opened {
        -webkit-box-shadow: 0px 0px 38px 2px rgba(0, 0, 0, 0.1);
        -moz-box-shadow: 0px 0px 38px 2px rgba(0, 0, 0, 0.1);
        box-shadow: 0px 0px 38px 2px rgba(0, 0, 0, 0.1); }
      .header_wrap_3 .header_top .custom_select_wrapper .custom_select.opened .custom_select_trigger:after {
        margin-top: 3px;
        transform: rotate(-135deg) translateY(-50%); }
      .header_wrap_3 .header_top .custom_select_wrapper .custom_select .custom_options {
        position: absolute;
        z-index: 99;
        display: block;
        top: 100%;
        left: 0;
        min-width: 100%;
        box-sizing: border-box;
        -webkit-box-shadow: 0 2px 1px 0px rgba(0, 0, 0, 0.07);
        -moz-box-shadow: 0 2px 1px 0px rgba(0, 0, 0, 0.07);
        box-shadow: 0 2px 1px 0px rgba(0, 0, 0, 0.07);
        background: #0d1223;
        -webkit-transition: all 0.5s ease-in-out;
        -moz-transition: all 0.5s ease-in-out;
        -ms-transition: all 0.5s ease-in-out;
        -o-transition: all 0.5s ease-in-out;
        transition: all 0.5s ease-in-out;
        opacity: 0;
        visibility: hidden;
        pointer-events: none;
        transform: translateY(-15px); }
        .header_wrap_3 .header_top .custom_select_wrapper .custom_select .custom_options .custom_option {
          font-size: 14px;
          padding: 5px 15px;
          cursor: pointer;
          margin: 0;
          text-align: left;
          line-height: 30px;
          display: block;
          color: #fff;
          transition: all .4s ease-in-out; }
          .header_wrap_3 .header_top .custom_select_wrapper .custom_select .custom_options .custom_option:last-of-type {
            border-bottom: 0; }
          .header_wrap_3 .header_top .custom_select_wrapper .custom_select .custom_options .custom_option:hover {
            background: #1b38ff;
            color: #fff; }
      .header_wrap_3 .header_top .custom_select_wrapper .custom_select.opened .custom_options {
        opacity: 1;
        visibility: visible;
        pointer-events: all;
        transform: translateY(0px); }
  .header_wrap_3 .header_bottom {
    height: 100px;
    background: #0d1223; }
    .header_wrap_3 .header_bottom .navbar .navbar-nav > li.nav-item > a {
      padding: 15px 0;
      font-size: 16px;
      color: #fff;
      -webkit-transition: all 0.3s ease-in-out;
      -moz-transition: all 0.3s ease-in-out;
      -ms-transition: all 0.3s ease-in-out;
      -o-transition: all 0.3s ease-in-out;
      transition: all 0.3s ease-in-out; }
      .header_wrap_3 .header_bottom .navbar .navbar-nav > li.nav-item > a:hover {
        color: #1b38ff; }
      .header_wrap_3 .header_bottom .navbar .navbar-nav > li.nav-item > a:after {
        height: 0px; }
    .header_wrap_3 .header_bottom .navbar .navbar-nav > li.nav-item.nav_right {
      position: relative;
      z-index: 1;
      padding: 0; }
      .header_wrap_3 .header_bottom .navbar .navbar-nav > li.nav-item.nav_right:after {
        content: '';
        height: 12px;
        top: calc(50% - 6px);
        width: 100%;
        left: 20%;
        z-index: -1;
        position: absolute;
        background: #182dcc; }
      .header_wrap_3 .header_bottom .navbar .navbar-nav > li.nav-item.nav_right:last-child {
        margin-right: 0px; }
        .header_wrap_3 .header_bottom .navbar .navbar-nav > li.nav-item.nav_right:last-child:after {
          height: 0; }
      .header_wrap_3 .header_bottom .navbar .navbar-nav > li.nav-item.nav_right a {
        padding: 0px;
        margin-right: 5px;
        background: #1b38ff;
        line-height: 0;
        color: #fff;
        -webkit-transition: all 0.3s ease-in-out;
        -moz-transition: all 0.3s ease-in-out;
        -ms-transition: all 0.3s ease-in-out;
        -o-transition: all 0.3s ease-in-out;
        transition: all 0.3s ease-in-out; }
        .header_wrap_3 .header_bottom .navbar .navbar-nav > li.nav-item.nav_right a i {
          padding: 10px;
          display: inline-block;
          font-size: 16px; }
        .header_wrap_3 .header_bottom .navbar .navbar-nav > li.nav-item.nav_right a:hover {
          background: #182dcc; }
      .header_wrap_3 .header_bottom .navbar .navbar-nav > li.nav-item.nav_right span {
        right: 5px;
        top: 5px; }

.header_wrap_4 {
  margin: 0;
  position: absolute;
  width: 100%;
  z-index: 99; }
  .header_wrap_4 > .container {
    -webkit-box-shadow: 0px 12px 51px 0px rgba(0, 0, 0, 0.3);
    -moz-box-shadow: 0px 12px 51px 0px rgba(0, 0, 0, 0.3);
    box-shadow: 0px 12px 51px 0px rgba(0, 0, 0, 0.3);
    background: -webkit-linear-gradient(left, #6a11cb 0%, #2575fc 100%);
    background: -o-linear-gradient(right, #6a11cb 0%, #2575fc 100%);
    background: -moz-linear-gradient(to right, #6a11cb 0%, #2575fc 100%);
    background: linear-gradient(to right, #6a11cb 0%, #2575fc 100%);
    border-radius: 0 0 10px 10px; }
  .header_wrap_4 .blog_drop #mega_blog {
    left: auto;
    right: 0; }

.header_wrap_5 {
  position: absolute;
  width: 100%;
  z-index: 99; }
  .header_wrap_5 .nav_right a {
    padding: 30px 5px; }

.header_wrap_dark_in {
  position: absolute;
  margin: 0;
  width: 100%;
  z-index: 99; }
  .header_wrap_dark_in > .container {
    -webkit-box-shadow: 0px 12px 51px 0px rgba(0, 0, 0, 0.3);
    -moz-box-shadow: 0px 12px 51px 0px rgba(0, 0, 0, 0.3);
    box-shadow: 0px 12px 51px 0px rgba(0, 0, 0, 0.3);
    background: -webkit-linear-gradient(left, #6a11cb 0%, #2575fc 100%);
    background: -o-linear-gradient(right, #6a11cb 0%, #2575fc 100%);
    background: -moz-linear-gradient(to right, #6a11cb 0%, #2575fc 100%);
    background: linear-gradient(to right, #6a11cb 0%, #2575fc 100%);
    border-radius: 0 0 10px 10px;
    -webkit-transition: all 0.6s ease-in-out;
    -moz-transition: all 0.6s ease-in-out;
    -ms-transition: all 0.6s ease-in-out;
    -o-transition: all 0.6s ease-in-out;
    transition: all 0.6s ease-in-out; }
  .header_wrap_dark_in .blog_drop #mega_blog {
    left: auto;
    right: 0; }

@media screen and (min-width: 991px) {
  .hid {
    opacity: 0;
    -webkit-transition: all 0.2s ease-in-out;
    -moz-transition: all 0.2s ease-in-out;
    -ms-transition: all 0.2s ease-in-out;
    -o-transition: all 0.2s ease-in-out;
    transition: all 0.2s ease-in-out;
    z-index: -1;
    visibility: hidden; }

  .home_drop:hover > .hid, .drop_notf_btn:hover > .hid, .drop_cart_btn:hover > .hid, .blog_drop:hover > .hid, .page_drop:hover > .hid, .hosting_drop:hover > .hid {
    display: block !important;
    visibility: visible !important;
    opacity: 1 !important;
    z-index: 9 !important; } }
@media only screen and (min-width: 992px) and (max-width: 1200px) {
  .mega_nav.navbar .navbar-nav > li.nav-item {
    padding: 0px 10px; }

  li.nav-item.nav_right span {
    right: 5px; } }
@media only screen and (min-width: 320px) and (max-width: 991px) {
  .hid {
    z-index: 9 !important; }

  .mega_nav.navbar .navbar-brand {
    margin-left: 30px;
    margin-top: 10px; }
    .mega_nav.navbar .navbar-brand img {
      width: 90%; }
  .mega_nav.navbar .nav_wrapper {
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out;
    left: -100%;
    left: 0px;
    top: 60px;
    padding: 0% 5%;
    background: rgba(0, 6, 8, 0.9);
    position: absolute;
    width: 100%; }
    .mega_nav.navbar .nav_wrapper ul.navbar-nav {
      align-items: flex-end; }
      .mega_nav.navbar .nav_wrapper ul.navbar-nav > li {
        text-align: right;
        padding: 0px; }
        .mega_nav.navbar .nav_wrapper ul.navbar-nav > li a {
          padding: 10px 0px;
          display: inline-block; }
          .mega_nav.navbar .nav_wrapper ul.navbar-nav > li a:after {
            height: 2px; }
        .mega_nav.navbar .nav_wrapper ul.navbar-nav > li.home_drop #mega_home {
          width: 260px;
          padding: 0px;
          right: auto;
          left: 0;
          top: 100%;
          background: transparent;
          position: relative;
          box-shadow: none; }
          .mega_nav.navbar .nav_wrapper ul.navbar-nav > li.home_drop #mega_home .single_element {
            display: flex;
            padding: 5px 0px;
            margin-bottom: 5px;
            width: 100%;
            justify-content: flex-end;
            float: none;
            box-shadow: transparent; }
            .mega_nav.navbar .nav_wrapper ul.navbar-nav > li.home_drop #mega_home .single_element:hover {
              background: transparent; }
            .mega_nav.navbar .nav_wrapper ul.navbar-nav > li.home_drop #mega_home .single_element .numbering p {
              margin-right: 5px;
              font-size: 30px; }
            .mega_nav.navbar .nav_wrapper ul.navbar-nav > li.home_drop #mega_home .single_element .discription {
              text-align: right; }
              .mega_nav.navbar .nav_wrapper ul.navbar-nav > li.home_drop #mega_home .single_element .discription .title {
                font-size: 14px;
                padding: 0px;
                display: block;
                font-weight: 400;
                color: #15efa4; }
                .mega_nav.navbar .nav_wrapper ul.navbar-nav > li.home_drop #mega_home .single_element .discription .title:hover {
                  color: #fff; }
              .mega_nav.navbar .nav_wrapper ul.navbar-nav > li.home_drop #mega_home .single_element .discription p {
                font-size: 12px; }
        .mega_nav.navbar .nav_wrapper ul.navbar-nav > li.hosting_drop #mega_hosting {
          position: relative;
          top: 100%;
          width: 250px;
          padding: 0px;
          background: transparent;
          right: 0;
          left: auto;
          box-shadow: none; }
          .mega_nav.navbar .nav_wrapper ul.navbar-nav > li.hosting_drop #mega_hosting li a {
            padding: 5px 0px !important;
            color: #15efa4;
            border-bottom: none; }
            .mega_nav.navbar .nav_wrapper ul.navbar-nav > li.hosting_drop #mega_hosting li a:hover {
              color: #fff; }
        .mega_nav.navbar .nav_wrapper ul.navbar-nav > li.page_drop #mega_page_details {
          position: relative;
          top: 100%;
          width: 250px;
          padding: 0px;
          background: transparent;
          right: 0;
          left: auto;
          box-shadow: none; }
          .mega_nav.navbar .nav_wrapper ul.navbar-nav > li.page_drop #mega_page_details li a {
            padding: 5px 0px !important;
            color: #15efa4;
            border-bottom: none; }
            .mega_nav.navbar .nav_wrapper ul.navbar-nav > li.page_drop #mega_page_details li a:hover {
              color: #fff; }
        .mega_nav.navbar .nav_wrapper ul.navbar-nav > li.blog_drop #mega_blog {
          position: relative;
          box-shadow: none;
          background: transparent;
          padding: 0px;
          width: 250px; }
          .mega_nav.navbar .nav_wrapper ul.navbar-nav > li.blog_drop #mega_blog .mega_blog_details li a {
            padding: 5px 0px !important;
            color: #15efa4;
            border-bottom: none; }
            .mega_nav.navbar .nav_wrapper ul.navbar-nav > li.blog_drop #mega_blog .mega_blog_details li a:hover {
              color: #fff; }
      .mega_nav.navbar .nav_wrapper ul.navbar-nav li.nav-item {
        order: 9; }
        .mega_nav.navbar .nav_wrapper ul.navbar-nav li.nav-item.nav_right {
          order: 1; }
          .mega_nav.navbar .nav_wrapper ul.navbar-nav li.nav-item.nav_right span {
            top: 7px;
            right: -5px; }

  .header_wrap {
    padding: 0;
    height: 70px;
    background: rgba(0, 6, 8, 0.9); }
    .header_wrap .container {
      padding: 0;
      max-width: 100vw; }
      .header_wrap .container .col-md-12 {
        padding: 0; }
    .header_wrap .mega_nav.navbar .nav_wrapper {
      top: 70px; }

  .header_wrap_2 {
    margin-top: 0;
    padding: 0;
    background: rgba(0, 6, 8, 0.9); }
    .header_wrap_2 > .container {
      height: 60px; }
    .header_wrap_2 .container {
      padding: 0;
      max-width: 100vw;
      border-radius: 0; }
      .header_wrap_2 .container .col-md-12 {
        padding: 0; }
    .header_wrap_2 .navbar .navbar-nav > li.nav-item > a {
      color: #fff; }
      .header_wrap_2 .navbar .navbar-nav > li.nav-item > a:hover {
        color: #fff; }

  .header_wrap_3 .header_top p {
    font-size: 14px; }
  .header_wrap_3 .header_bottom {
    padding: 10px 0;
    height: 60px; }
    .header_wrap_3 .header_bottom .container {
      max-width: 100vw;
      padding: 0; }
      .header_wrap_3 .header_bottom .container .col-md-12 {
        padding: 0; }
  .header_wrap_3 .header_bottom .navbar .navbar-nav > li.nav-item > a {
    color: #fff; }
  .header_wrap_3 .header_bottom .navbar .navbar-nav > li.nav-item.nav_right a {
    margin: 5px 0 5px; }
  .header_wrap_3 .header_bottom .navbar .navbar-nav > li.nav-item.nav_right:after {
    height: 0;
    display: none; }

  .header_wrap_4 {
    padding: 0;
    background: rgba(0, 6, 8, 0.9); }
    .header_wrap_4 > .container {
      height: 60px; }
    .header_wrap_4 .container {
      padding: 0;
      max-width: 100vw;
      border-radius: 0; }
      .header_wrap_4 .container .col-md-12 {
        padding: 0; }

  .header_wrap_5 {
    padding: 0;
    height: 60px;
    background: rgba(0, 6, 8, 0.9); }
    .header_wrap_5 .container {
      padding: 0;
      max-width: 100vw; }
      .header_wrap_5 .container .col-md-12 {
        padding: 0; }

  .header_wrap_dark_in {
    padding: 0;
    background: rgba(0, 6, 8, 0.9); }
    .header_wrap_dark_in > .container {
      height: 60px; }
    .header_wrap_dark_in .container {
      padding: 0;
      max-width: 100vw;
      border-radius: 0; }
      .header_wrap_dark_in .container .col-md-12 {
        padding: 0; } }
.preloader {
  position: fixed;
  top: 0;
  left: 0;
  width: 100%;
  height: 100%;
  z-index: 99900;
  transition: 1s; }
  .preloader:before, .preloader:after {
    position: absolute;
    top: 0;
    content: '';
    width: 50%;
    height: 100%;
    background: #000;
    transition: 1s; }
  .preloader:after {
    left: auto;
    right: 0; }
  .preloader:before {
    right: auto;
    left: 0; }

.preloader.complete {
  opacity: 0;
  visibility: hidden; }

.preloader.complete:after {
  right: -50%; }

.preloader.complete:before {
  left: -50%; }

.loader.completein {
  opacity: 0; }

.loader {
  width: 90px;
  height: 90px;
  top: 50vh;
  margin: 0 auto;
  transform-style: preserve-3d;
  transform: translate(0%, -50%) rotateX(45deg) rotate(45deg);
  position: relative;
  opacity: 1;
  z-index: 1; }

.loader .loader_inner {
  width: 30px;
  height: 30px;
  background: #ff6352;
  box-shadow: 112px 112px 20px #000;
  position: absolute;
  top: 0;
  left: 0;
  transform-style: preserve-3d;
  animation: loading-1 2s ease-in-out infinite both; }

.loader .loader_inner:nth-child(1) {
  animation-delay: -1s; }

.loader .loader_inner:nth-child(2) {
  animation-delay: -2s; }

.loader .loader_inner:before,
.loader .loader_inner:after {
  content: "";
  display: block;
  width: 30px;
  height: 30px;
  position: absolute;
  z-index: 2; }

.loader .loader_inner:before {
  background: #d74535;
  top: 100%;
  left: 0;
  transform-origin: center top;
  transform: rotateX(-90deg); }

.loader .loader_inner:after {
  background: #ae372a;
  top: 0;
  left: 100%;
  transform-origin: center left;
  transform: rotateY(90deg); }

@keyframes loading-1 {
  0%,100% {
    transform: none; }
  12.5% {
    transform: translate(30px, 0); }
  25% {
    transform: translate(60px, 0); }
  37.5% {
    transform: translate(60px, 30px); }
  50% {
    transform: translate(60px, 60px); }
  62.5% {
    transform: translate(30px, 60px); }
  75% {
    transform: translate(0, 60px); }
  87.5% {
    transform: translate(0, 30px); } }
.burger_icon {
  display: none;
  width: 30px;
  z-index: 999;
  height: 30px;
  position: absolute;
  display: flex;
  flex-direction: column;
  align-items: center;
  justify-content: center;
  top: 20px;
  bottom: auto;
  left: auto;
  right: 25px;
  cursor: pointer; }

.stick {
  width: 30px;
  height: 3px;
  border-radius: 4px;
  margin-bottom: 5px;
  background-color: #fff;
  display: inline-block; }

.stick:last-child {
  margin-bottom: 0px; }

.stick_1.open_menu {
  animation: stick-1-open .6s ease-out forwards; }

.stick_2.open_menu {
  animation: stick-2-open .6s linear forwards; }

.stick_3.open_menu {
  animation: stick-3-open .6s linear forwards; }

@keyframes stick-1-open {
  0% {
    width: 30px; }
  40% {
    background-color: #0cbafc;
    width: 3px;
    transform: translate(15px, 0px); }
  75%, 80% {
    width: 3px;
    transform: translate(15px, -40px);
    animation-timing-function: cubic-bezier(0, 1, 1, 1); }
  100% {
    background-color: #0cbafc;
    width: 2px;
    transform: translate(13px, 16px); } }
@keyframes stick-2-open {
  80% {
    background-color: #0cbafc;
    transform: translate(0px, 0px) rotate(0deg); }
  100% {
    background-color: #0cbafc;
    transform: translate(3px, 0px) rotate(40deg); } }
@keyframes stick-3-open {
  80% {
    background-color: #0cbafc;
    transform: translate(0px, 0px) rotate(0deg); }
  100% {
    background-color: #0cbafc;
    transform: translate(3px, -9px) rotate(-40deg); } }
.stick_1.close_menu {
  width: 3px;
  transform: translate(27px, 26px);
  animation: stick-1-close .6s ease-out forwards; }

.stick_2.close_menu {
  transform: translate(0px, 0px) rotate(40deg);
  animation: stick-2-close .6s ease-out forwards; }

.stick_3.close_menu {
  transform: translate(0px, -23px) rotate(-40deg);
  animation: stick-3-close .6s ease-out forwards; }

@keyframes stick-1-close {
  0%, 70% {
    width: 0px; }
  100% {
    width: 30px;
    transform: translate(0, 0); } }
@keyframes stick-2-close {
  0% {
    background-color: #363bff;
    width: 60px; }
  20% {
    background-color: #363bff;
    width: 6px;
    transform: translate(0, 0px) rotate(40deg); }
  40% {
    background-color: #363bff;
    width: 0px; }
  65% {
    transform: translate(0, -70px);
    animation-timing-function: cubic-bezier(0, 1, 1, 1); }
  80% {
    width: 0px; }
  100% {
    width: 30px;
    transform: translate(0, 0px); } }
@keyframes stick-3-close {
  0% {
    background-color: #363bff;
    width: 60px; }
  20% {
    background-color: #363bff;
    width: 6px;
    transform: translate(0, -23px) rotate(-40deg); }
  40% {
    background-color: #363bff; }
  65% {
    transform: translate(0, -53px);
    animation-timing-function: cubic-bezier(0, 1, 1, 1); }
  90% {
    width: 3px; }
  100% {
    width: 30px;
    transform: translate(0, 0px); } }
.burger_icon.navbar-toggler {
  z-index: 111; }

@media only screen and (min-width: 320px) and (max-width: 991px) {
  .burger_icon {
    display: flex;
    top: 15px; }

  a.burger_icon.burger_3 .stick {
    background: #363bff; }

  a.burger_icon.burger_4 {
    top: 68px; }
    a.burger_icon.burger_4 .stick {
      background: #1b38ff; } }
@media only screen and (min-width: 768px) and (max-width: 991px) {
  a.burger_icon.burger_2 {
    top: 20px; } }
@media (max-width: 767px) {
  .burger_icon {
    right: 15px;
    top: 15px; } }
.hero_area {
  position: relative;
  z-index: 1;
  background: -webkit-linear-gradient(right, #13128c 0%, #480884 100%);
  background: -o-linear-gradient(left, #13128c 0%, #480884 100%);
  background: -moz-linear-gradient(to left, #13128c 0%, #480884 100%);
  background: linear-gradient(to left, #13128c 0%, #480884 100%); }
  .hero_area .row {
    position: relative; }
  .hero_area .hero_content_wrapper {
    display: table;
    height: 100vh; }
    .hero_area .hero_content_wrapper .hero_content {
      padding: 270px 0 250px;
      display: table-cell;
      vertical-align: middle;
      color: #fff; }
      .hero_area .hero_content_wrapper .hero_content h2 {
        font-weight: 700;
        font-family: 'Rubik', sans-serif;
        font-size: 48px;
        line-height: 1.3;
        margin-bottom: 50px; }
      .hero_area .hero_content_wrapper .hero_content h3 {
        font-size: 24px;
        font-weight: 500;
        font-family: 'Fira Sans', sans-serif;
        margin-bottom: 45px; }
        .hero_area .hero_content_wrapper .hero_content h3 span.yellow_color {
          color: #ffcc02; }
        .hero_area .hero_content_wrapper .hero_content h3 span.green_color {
          color: #2cd63c; }
      .hero_area .hero_content_wrapper .hero_content .service_list ul {
        float: left; }
        .hero_area .hero_content_wrapper .hero_content .service_list ul li {
          font-weight: 400;
          font-family: 'Fira Sans', sans-serif;
          font-size: 18px;
          margin-bottom: 20px;
          line-height: 1; }
          .hero_area .hero_content_wrapper .hero_content .service_list ul li i {
            color: #2cd63c;
            margin-right: 12px;
            font-weight: 900; }
      .hero_area .hero_content_wrapper .hero_content .service_list .list_1 {
        margin-right: 50px; }
      .hero_area .hero_content_wrapper .hero_content .boxed_btn {
        margin-top: 25px;
        padding: 15px 30px;
        font-size: 20px;
        clear: both;
        float: left;
        display: inline-block; }
  .hero_area .right_content .hero_img {
    margin-right: -135px; }

.hero_area_2 {
  position: relative;
  background-image: url(../img/hero_area/home_2/hero_img_1.png), url(../img/hero_area/home_2/hero_img_2.png);
  background-size: 20%, 45%;
  background-repeat: no-repeat, no-repeat;
  background-position: 0% 0%, 100% 0%; }
  .hero_area_2:after {
    position: absolute;
    z-index: -5;
    content: '';
    bottom: 0;
    left: 0;
    width: 100%;
    height: 100%;
    background-size: cover;
    background-position: center;
    background-repeat: no-repeat;
    background-image: url(../img/hero_area/home_2/hero_bg.png); }
  .hero_area_2 .row {
    position: relative; }
  .hero_area_2 .hero_content_wrapper {
    display: table;
    height: 100vh; }
    .hero_area_2 .hero_content_wrapper .hero_content {
      padding: 280px 0 450px;
      display: table-cell;
      vertical-align: middle;
      color: #fff; }
      .hero_area_2 .hero_content_wrapper .hero_content h2 {
        font-weight: 700;
        font-family: 'Rubik', sans-serif;
        font-size: 60px;
        line-height: 1.3;
        margin-bottom: 30px; }
      .hero_area_2 .hero_content_wrapper .hero_content h3 {
        font-size: 18px;
        line-height: 2;
        font-weight: 400;
        font-family: 'Fira Sans', sans-serif;
        margin-bottom: 40px; }
      .hero_area_2 .hero_content_wrapper .hero_content .boxed_btn {
        margin: 0;
        padding: 18px 35px;
        font-size: 18px;
        color: #304e73;
        border-radius: 30px;
        display: inline-block;
        background: #fff;
        border: 2px solid #fff; }
        .hero_area_2 .hero_content_wrapper .hero_content .boxed_btn:after {
          border-radius: 30px;
          border: none;
          background: rgba(7, 8, 45, 0.5); }
        .hero_area_2 .hero_content_wrapper .hero_content .boxed_btn:hover {
          color: #fff;
          background: transparent; }
  .hero_area_2 .right_content {
    position: absolute;
    left: auto;
    width: 55%;
    margin-top: 160px;
    right: -225px; }
    .hero_area_2 .right_content .layers {
      position: relative;
      height: 700px; }
    .hero_area_2 .right_content .layer-one {
      position: absolute;
      top: 14%;
      z-index: 7;
      left: 29%; }
    .hero_area_2 .right_content .layer-two {
      animation: ha_move2 1.8s ease-in-out infinite alternate;
      position: absolute;
      top: 25%;
      z-index: 6;
      left: -7%; }
    .hero_area_2 .right_content .layer-three {
      position: absolute;
      top: 0;
      z-index: 5;
      left: 30%; }
    .hero_area_2 .right_content .layer-four {
      animation: ha_move4 1.8s ease-in-out infinite alternate;
      position: absolute;
      top: 21%;
      z-index: 4;
      left: 7%; }
    .hero_area_2 .right_content .layer-five {
      animation: ha_move5 1.5s ease-in-out infinite alternate;
      position: absolute;
      top: 61%;
      z-index: 3;
      right: -8%; }
    .hero_area_2 .right_content .layer-six {
      animation: ha_move6 1.8s ease-in-out infinite alternate;
      position: absolute;
      top: 17%;
      z-index: 2;
      right: 17%; }
    .hero_area_2 .right_content .layer-seven {
      position: absolute;
      top: 30%;
      z-index: 1;
      right: -8%; }
@-webkit-keyframes ha_move2 {
  0% {
    transform: translate(0, 0); }
  100% {
    transform: translate(0, 5%); } }
@-webkit-keyframes ha_move4 {
  0% {
    transform: translate(0, 10%); }
  100% {
    transform: translate(0, 0); } }
@-webkit-keyframes ha_move5 {
  0% {
    transform: translate(0, 10%); }
  100% {
    transform: translate(0, 0); } }
@-webkit-keyframes ha_move6 {
  0% {
    transform: translate(0, 10%); }
  100% {
    transform: translate(0, 0); } }
.hero_dark_in {
  position: relative;
  z-index: 1;
  height: 500px;
  background: transparent; }
  .hero_dark_in .particle_wrapper {
    position: absolute;
    width: 100%; }
  .hero_dark_in canvas.particles-js-canvas-el {
    padding-bottom: 80px; }
  .hero_dark_in:after {
    position: absolute;
    z-index: -5;
    content: '';
    top: 0;
    left: 0;
    width: 100%;
    height: 100%;
    background-size: cover;
    background-repeat: no-repeat;
    background-image: url("../img/hero_area/heading_in.png"); }

@media only screen and (min-width: 992px) and (max-width: 1200px) {
  .hero_area .hero_content_wrapper .hero_content {
    padding: 200px 0;
    padding-left: 10px; }
    .hero_area .hero_content_wrapper .hero_content h2 {
      font-size: 36px;
      margin-bottom: 30px; }
    .hero_area .hero_content_wrapper .hero_content h3 {
      margin-bottom: 35px; }
    .hero_area .hero_content_wrapper .hero_content .service_list ul li {
      font-size: 16px;
      margin-bottom: 15px; }
    .hero_area .hero_content_wrapper .hero_content .service_list .list_1 {
      margin-right: 30px; }
  .hero_area .right_content .hero_img {
    margin-right: -90px; }

  .hero_area_2 .hero_content_wrapper .hero_content {
    padding: 250px 0 300px;
    padding-right: 100px; }

  .hero_area_2 .right_content .layers img {
    width: 80%; }
  .hero_area_2 .right_content .layers .layer-one {
    top: 9%;
    left: 22%; }
    .hero_area_2 .right_content .layers .layer-one img {
      width: 82%; }
  .hero_area_2 .right_content .layers .layer-two {
    top: 16%;
    left: -12%; }
  .hero_area_2 .right_content .layers .layer-three {
    top: 0;
    left: 25%; }
  .hero_area_2 .right_content .layers .layer-four {
    top: 16%;
    left: 3%; }
  .hero_area_2 .right_content .layers .layer-five {
    top: 45%;
    right: -4%; }
  .hero_area_2 .right_content .layers .layer-six {
    top: 11%;
    right: 21%; }
  .hero_area_2 .right_content .layers .layer-seven {
    top: 25%;
    right: -17%; } }
@media only screen and (min-width: 768px) and (max-width: 991px) {
  .hero_area .hero_content_wrapper .hero_content {
    padding: 160px 0;
    padding-left: 5px; }
    .hero_area .hero_content_wrapper .hero_content h2 {
      font-size: 30px;
      margin-bottom: 20px; }
    .hero_area .hero_content_wrapper .hero_content h3 {
      margin-bottom: 20px;
      font-size: 20px; }
    .hero_area .hero_content_wrapper .hero_content .service_list ul li {
      font-size: 14px;
      margin-bottom: 15px; }
      .hero_area .hero_content_wrapper .hero_content .service_list ul li i {
        margin-right: 5px; }
    .hero_area .hero_content_wrapper .hero_content .service_list .list_1 {
      margin-right: 20px; }
    .hero_area .hero_content_wrapper .hero_content .boxed_btn {
      margin-top: 20px; }
  .hero_area .right_content .hero_img {
    margin-right: -60px; }

  .hero_area_2 .hero_content_wrapper .hero_content {
    padding: 220px 0 240px;
    padding-right: 50px; }
    .hero_area_2 .hero_content_wrapper .hero_content h3 {
      font-size: 16px;
      margin-bottom: 0; }
    .hero_area_2 .hero_content_wrapper .hero_content h2 {
      font-size: 48px;
      margin-bottom: 30px; }
    .hero_area_2 .hero_content_wrapper .hero_content .boxed_btn {
      padding: 14px 22px;
      font-size: 16px;
      margin-top: 25px; }

  .hero_area_2 .right_content .layers img {
    width: 50%; }
  .hero_area_2 .right_content .layers .layer-one {
    top: 6%;
    left: -20%; }
  .hero_area_2 .right_content .layers .layer-two {
    top: 11%;
    left: -49%; }
  .hero_area_2 .right_content .layers .layer-three {
    top: 0;
    left: -18%; }
  .hero_area_2 .right_content .layers .layer-four {
    top: 12%;
    left: -36%; }
  .hero_area_2 .right_content .layers .layer-five {
    top: 29%;
    right: 33%; }
  .hero_area_2 .right_content .layers .layer-six {
    top: 8%;
    right: 59%; }
  .hero_area_2 .right_content .layers .layer-seven {
    top: 17%;
    left: -30%; }

  .hero_dark_in {
    height: 400px; }
    .hero_dark_in canvas.particles-js-canvas-el {
      padding-bottom: 70px; } }
@media (max-width: 767px) {
  .hero_area:after {
    bottom: -5px; }
  .hero_area .hero_content_wrapper .hero_content {
    padding: 100px 0; }
    .hero_area .hero_content_wrapper .hero_content h2 {
      font-size: 24px;
      margin-bottom: 20px; }
    .hero_area .hero_content_wrapper .hero_content h3 {
      margin-bottom: 25px;
      font-size: 18px; }
    .hero_area .hero_content_wrapper .hero_content .service_list ul li {
      font-size: 12px;
      margin-bottom: 15px; }
      .hero_area .hero_content_wrapper .hero_content .service_list ul li i {
        margin-right: 5px; }
    .hero_area .hero_content_wrapper .hero_content .service_list .list_1 {
      margin-right: 20px; }
    .hero_area .hero_content_wrapper .hero_content .boxed_btn {
      margin-top: 20px;
      font-size: 14px;
      padding: 10px 20px; }

  .hero_area_2 .hero_content_wrapper .hero_content {
    padding: 120px 0 180px; }
    .hero_area_2 .hero_content_wrapper .hero_content h3 {
      font-size: 16px;
      margin-bottom: 0; }
    .hero_area_2 .hero_content_wrapper .hero_content h2 {
      font-size: 48px;
      margin-bottom: 30px; }
    .hero_area_2 .hero_content_wrapper .hero_content .boxed_btn {
      padding: 14px 22px;
      font-size: 16px;
      margin-top: 25px; }

  .hero_dark_in {
    height: 340px; }
    .hero_dark_in canvas.particles-js-canvas-el {
      padding-bottom: 50px; } }
@media only screen and (min-width: 480px) and (max-width: 767px) {
  .hero_area .hero_content_wrapper .hero_content .service_list p {
    font-size: 16px; } }
.offcanvas_overlay, .offcanvas_overlay_2 {
  width: 100%;
  height: 100vh;
  top: 0;
  left: 0;
  position: fixed;
  z-index: 2000;
  opacity: 0;
  -webkit-transition: all 0.3s ease-in-out;
  -moz-transition: all 0.3s ease-in-out;
  -ms-transition: all 0.3s ease-in-out;
  -o-transition: all 0.3s ease-in-out;
  transition: all 0.3s ease-in-out;
  display: none;
  background: rgba(0, 0, 0, 0.9); }
  .offcanvas_overlay .cross_btn, .offcanvas_overlay_2 .cross_btn {
    position: absolute;
    right: 30px;
    top: 30px;
    z-index: 2001;
    color: #fff;
    font-weight: 700;
    font-family: 'Rubik', sans-serif;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out;
    font-size: 24px; }
    .offcanvas_overlay .cross_btn:hover, .offcanvas_overlay_2 .cross_btn:hover {
      cursor: pointer;
      opacity: .7; }

.offcanvas_overlay_2 {
  position: absolute; }

.search_bar, .search_bar_2 {
  position: absolute;
  z-index: 2002;
  left: 50%;
  top: 50vh;
  transform: translate(-50%, -50%);
  display: none;
  opacity: 0;
  -webkit-transition: all 0.3s ease-in-out;
  -moz-transition: all 0.3s ease-in-out;
  -ms-transition: all 0.3s ease-in-out;
  -o-transition: all 0.3s ease-in-out;
  transition: all 0.3s ease-in-out; }
  .search_bar .search_body, .search_bar_2 .search_body {
    height: 40px;
    overflow: hidden;
    border-radius: 5px;
    position: relative;
    width: 480px;
    background: #fff; }
    .search_bar .search_body input, .search_bar_2 .search_body input {
      border-radius: 25px;
      display: inline-block;
      position: absolute;
      left: 0;
      border: none;
      width: 88%;
      height: 100%;
      padding-left: 25px; }
    .search_bar .search_body button, .search_bar_2 .search_body button {
      background: #363bff;
      -webkit-transition: all 0.3s ease-in-out;
      -moz-transition: all 0.3s ease-in-out;
      -ms-transition: all 0.3s ease-in-out;
      -o-transition: all 0.3s ease-in-out;
      transition: all 0.3s ease-in-out;
      border: none;
      cursor: pointer;
      color: #fff;
      padding: 11px 20px 11px 15px;
      display: inline-block;
      position: absolute;
      width: 12%;
      height: 100%;
      right: 0; }
      .search_bar .search_body button:hover, .search_bar_2 .search_body button:hover {
        background: #0005cf; }

.search_bar_2 .search_body {
  border-radius: 25px; }
  .search_bar_2 .search_body button {
    background: #1b38ff; }
    .search_bar_2 .search_body button:hover {
      background: #0017b4; }

.sign_in_up_body {
  background: -webkit-linear-gradient(bottom, #1317d1 0%, #07164e 100%);
  background: -o-linear-gradient(top, #1317d1 0%, #07164e 100%);
  background: -moz-linear-gradient(to top, #1317d1 0%, #07164e 100%);
  background: linear-gradient(to top, #1317d1 0%, #07164e 100%); }

.sign_in_area {
  text-align: center; }
  .sign_in_area h1 {
    font-size: 70px;
    color: #fff;
    margin-bottom: 55px;
    font-weight: 800;
    font-family: 'Fira Sans', sans-serif; }
  .sign_in_area .sign_form {
    background: #fff;
    border-radius: 10px;
    padding: 80px 100px 120px;
    margin: 0 40px;
    z-index: 0;
    position: relative;
    -webkit-box-shadow: 0 8px 10px -5px #1c1c24;
    -moz-box-shadow: 0 8px 10px -5px #1c1c24;
    box-shadow: 0 8px 10px -5px #1c1c24; }
    .sign_in_area .sign_form:after, .sign_in_area .sign_form:before {
      position: absolute;
      content: '';
      background: #ffffff;
      border-radius: 10px;
      -webkit-box-shadow: 0 8px 10px -5px #1c1c24;
      -moz-box-shadow: 0 8px 10px -5px #1c1c24;
      box-shadow: 0 8px 10px -5px #1c1c24; }
    .sign_in_area .sign_form:after {
      left: -40px;
      bottom: 40px;
      height: calc(100% - 40px);
      z-index: -1;
      width: calc(100% + 80px); }
    .sign_in_area .sign_form:before {
      left: -20px;
      bottom: 20px;
      height: calc(100% - 20px);
      z-index: -3;
      width: calc(100% + 40px); }
    .sign_in_area .sign_form h2 {
      font-size: 30px;
      color: #304e73;
      margin-bottom: 40px; }
    .sign_in_area .sign_form label {
      color: #838bab;
      font-size: 18px;
      margin: 15px 0;
      text-transform: uppercase; }
    .sign_in_area .sign_form input[type="email"], .sign_in_area .sign_form input[type="password"] {
      height: 55px;
      margin-bottom: 15px;
      font-size: 18px;
      border-radius: 3px;
      background: #f6faff;
      border: 1px solid #c7e1fb;
      transition: border-color 0s; }
      .sign_in_area .sign_form input[type="email"]:focus, .sign_in_area .sign_form input[type="password"]:focus {
        outline: none;
        border: none;
        -webkit-box-shadow: 0px 0px 25px 0px rgba(30, 36, 107, 0.15);
        -moz-box-shadow: 0px 0px 25px 0px rgba(30, 36, 107, 0.15);
        box-shadow: 0px 0px 25px 0px rgba(30, 36, 107, 0.15); }
    .sign_in_area .sign_form a {
      display: inline-block;
      font-size: 18px; }
    .sign_in_area .sign_form .boxed_btn {
      width: 100%;
      border-radius: 3px;
      padding: 16px;
      background: #363bff;
      display: block;
      margin-top: 40px;
      color: #fff;
      font-size: 18px;
      text-transform: uppercase;
      outline: none;
      border: none;
      cursor: pointer;
      -webkit-transition: all 0.3s ease-in-out;
      -moz-transition: all 0.3s ease-in-out;
      -ms-transition: all 0.3s ease-in-out;
      -o-transition: all 0.3s ease-in-out;
      transition: all 0.3s ease-in-out; }
      .sign_in_area .sign_form .boxed_btn:hover {
        -webkit-box-shadow: 0 10px 25px 1px #2588f273;
        -moz-box-shadow: 0 10px 25px 1px #2588f273;
        box-shadow: 0 10px 25px 1px #2588f273; }
  .sign_in_area .sign_up p {
    font-size: 18px;
    color: #fff;
    background: rgba(0, 0, 0, 0.3);
    padding: 18px;
    width: 75%;
    border-radius: 3px;
    margin: 0 auto;
    margin-top: 110px; }

@media only screen and (min-width: 992px) and (max-width: 1200px) {
  .sign_in_area h1 {
    font-size: 80px;
    color: #fff;
    margin-bottom: 45px;
    font-weight: 300;
    font-family: 'Fira Sans', sans-serif; }
  .sign_in_area .sign_form {
    padding: 40px 50px 100px;
    margin: 0 50px; }
    .sign_in_area .sign_form:after {
      left: -30px;
      bottom: 35px;
      height: calc(100% - 35px);
      z-index: -1;
      width: calc(100% + 60px); }
    .sign_in_area .sign_form:before {
      left: -15px;
      bottom: 15px;
      height: calc(100% - 15px);
      z-index: -3;
      width: calc(100% + 30px); }
    .sign_in_area .sign_form h2 {
      font-size: 24px;
      margin-bottom: 30px; }
    .sign_in_area .sign_form label {
      font-size: 16px;
      margin: 12px 0; }
    .sign_in_area .sign_form input[type="email"], .sign_in_area .sign_form input[type="password"] {
      height: 45px;
      margin-bottom: 12px;
      font-size: 16px; }
    .sign_in_area .sign_form a {
      display: inline-block;
      font-size: 16px;
      margin-top: 5px; }
    .sign_in_area .sign_form .boxed_btn {
      margin-top: 30px;
      font-size: 16px; }
  .sign_in_area .sign_up p {
    font-size: 16px;
    padding: 16px;
    margin-top: 70px; } }
@media only screen and (min-width: 320px) and (max-width: 991px) {
  .sign_in_area h1 {
    font-size: 60px;
    margin-bottom: 35px; }
  .sign_in_area .sign_form {
    padding: 30px 10px 90px;
    margin: 0 50px; }
    .sign_in_area .sign_form:after {
      left: -30px;
      bottom: 35px;
      height: calc(100% - 35px);
      z-index: -1;
      width: calc(100% + 60px); }
    .sign_in_area .sign_form:before {
      left: -15px;
      bottom: 15px;
      height: calc(100% - 15px);
      z-index: -3;
      width: calc(100% + 30px); }
    .sign_in_area .sign_form h2 {
      font-size: 20px;
      margin-bottom: 20px; }
    .sign_in_area .sign_form label {
      font-size: 14px;
      margin: 12px 0; }
    .sign_in_area .sign_form input[type="email"], .sign_in_area .sign_form input[type="password"] {
      height: 40px;
      margin-bottom: 12px;
      font-size: 14px; }
    .sign_in_area .sign_form a {
      display: inline-block;
      font-size: 14px;
      margin-top: 5px; }
    .sign_in_area .sign_form .boxed_btn {
      margin-top: 30px;
      font-size: 14px;
      padding: 14px; }
  .sign_in_area .sign_up p {
    font-size: 14px;
    padding: 14px;
    margin-top: 50px;
    width: 70%; } }
.sign_up_area {
  text-align: center; }
  .sign_up_area h1 {
    font-size: 70px;
    color: #fff;
    margin-bottom: 56px;
    font-weight: 800;
    font-family: 'Fira Sans', sans-serif; }
  .sign_up_area .sign_form {
    background: #fff;
    border-radius: 10px;
    padding: 80px 80px 120px;
    margin: 0 40px;
    z-index: 0;
    position: relative;
    -webkit-box-shadow: 0 8px 10px -5px #1c1c24;
    -moz-box-shadow: 0 8px 10px -5px #1c1c24;
    box-shadow: 0 8px 10px -5px #1c1c24; }
    .sign_up_area .sign_form:after, .sign_up_area .sign_form:before {
      position: absolute;
      content: '';
      background: #ffffff;
      border-radius: 10px;
      -webkit-box-shadow: 0 8px 10px -5px #1c1c24;
      -moz-box-shadow: 0 8px 10px -5px #1c1c24;
      box-shadow: 0 8px 10px -5px #1c1c24; }
    .sign_up_area .sign_form:after {
      left: -40px;
      bottom: 40px;
      height: calc(100% - 40px);
      z-index: -1;
      width: calc(100% + 80px); }
    .sign_up_area .sign_form:before {
      left: -20px;
      bottom: 20px;
      height: calc(100% - 20px);
      z-index: -3;
      width: calc(100% + 40px); }
    .sign_up_area .sign_form h2 {
      font-size: 30px;
      color: #304e73;
      margin-bottom: 40px; }
    .sign_up_area .sign_form label {
      color: #838bab;
      font-size: 18px;
      margin: 15px 0;
      text-transform: uppercase; }
    .sign_up_area .sign_form input[type="text"], .sign_up_area .sign_form input[type="email"], .sign_up_area .sign_form input[type="password"] {
      height: 55px;
      margin-bottom: 15px;
      background: #f6faff;
      font-size: 18px;
      border: 1px solid #c7e1fb;
      transition: border-color 0s;
      border-radius: 3px; }
      .sign_up_area .sign_form input[type="text"]:focus, .sign_up_area .sign_form input[type="email"]:focus, .sign_up_area .sign_form input[type="password"]:focus {
        outline: none;
        border: none;
        -webkit-box-shadow: 0px 0px 25px 0px rgba(30, 36, 107, 0.15);
        -moz-box-shadow: 0px 0px 25px 0px rgba(30, 36, 107, 0.15);
        box-shadow: 0px 0px 25px 0px rgba(30, 36, 107, 0.15); }
    .sign_up_area .sign_form .pas_show {
      position: relative; }
      .sign_up_area .sign_form .pas_show .ptxt {
        position: absolute;
        top: 50%;
        right: 10px;
        z-index: 1;
        color: #0cbafc;
        margin-top: -10px;
        cursor: pointer;
        transition: .3s ease all; }
        .sign_up_area .sign_form .pas_show .ptxt:hover {
          color: #333333; }
    .sign_up_area .sign_form a {
      display: inline-block;
      font-size: 18px; }
    .sign_up_area .sign_form .boxed_btn {
      width: 100%;
      border-radius: 3px;
      padding: 16px;
      background: #363bff;
      display: block;
      margin-top: 40px;
      color: #fff;
      font-size: 18px;
      text-transform: uppercase;
      outline: none;
      border: none;
      cursor: pointer;
      -webkit-transition: all 0.3s ease-in-out;
      -moz-transition: all 0.3s ease-in-out;
      -ms-transition: all 0.3s ease-in-out;
      -o-transition: all 0.3s ease-in-out;
      transition: all 0.3s ease-in-out; }
      .sign_up_area .sign_form .boxed_btn:hover {
        -webkit-box-shadow: 0 10px 25px 1px #2588f273;
        -moz-box-shadow: 0 10px 25px 1px #2588f273;
        box-shadow: 0 10px 25px 1px #2588f273; }
    .sign_up_area .sign_form p {
      font-size: 18px;
      margin-top: 45px;
      line-height: 1.5; }
  .sign_up_area .sign_up p {
    font-size: 18px;
    color: #fff;
    background: rgba(0, 0, 0, 0.3);
    padding: 18px;
    width: 75%;
    border-radius: 3px;
    margin: 0 auto;
    margin-top: 110px; }

@media only screen and (min-width: 992px) and (max-width: 1200px) {
  .sign_up_area h1 {
    font-size: 80px;
    color: #fff;
    margin-bottom: 45px;
    font-weight: 300;
    font-family: 'Fira Sans', sans-serif; }
  .sign_up_area .sign_form {
    padding: 40px 50px 90px;
    margin: 0 50px; }
    .sign_up_area .sign_form:after {
      left: -30px;
      bottom: 35px;
      height: calc(100% - 35px);
      z-index: -1;
      width: calc(100% + 60px); }
    .sign_up_area .sign_form:before {
      left: -15px;
      bottom: 15px;
      height: calc(100% - 15px);
      z-index: -3;
      width: calc(100% + 30px); }
    .sign_up_area .sign_form h2 {
      font-size: 24px;
      margin-bottom: 30px; }
    .sign_up_area .sign_form label {
      font-size: 16px;
      margin: 12px 0; }
    .sign_up_area .sign_form input[type="text"], .sign_up_area .sign_form input[type="email"], .sign_up_area .sign_form input[type="password"] {
      height: 45px;
      margin-bottom: 12px;
      font-size: 16px; }
    .sign_up_area .sign_form .pas_show .ptxt {
      top: 50%;
      right: 10px;
      margin-top: -10px; }
    .sign_up_area .sign_form a {
      display: inline-block;
      font-size: 16px;
      margin-top: 5px; }
    .sign_up_area .sign_form .boxed_btn {
      margin-top: 30px;
      font-size: 16px; }
    .sign_up_area .sign_form p {
      font-size: 16px;
      margin-top: 30px; }
  .sign_up_area .sign_up p {
    font-size: 16px;
    padding: 16px;
    margin-top: 70px; } }
@media only screen and (min-width: 320px) and (max-width: 991px) {
  .sign_up_area h1 {
    font-size: 60px;
    margin-bottom: 35px; }
  .sign_up_area .sign_form {
    padding: 30px 10px 70px;
    margin: 0 50px; }
    .sign_up_area .sign_form:after {
      left: -30px;
      bottom: 35px;
      height: calc(100% - 35px);
      z-index: -1;
      width: calc(100% + 60px); }
    .sign_up_area .sign_form:before {
      left: -15px;
      bottom: 15px;
      height: calc(100% - 15px);
      z-index: -3;
      width: calc(100% + 30px); }
    .sign_up_area .sign_form h2 {
      font-size: 20px;
      margin-bottom: 20px; }
    .sign_up_area .sign_form label {
      font-size: 14px;
      margin: 12px 0; }
    .sign_up_area .sign_form input[type="text"], .sign_up_area .sign_form input[type="email"], .sign_up_area .sign_form input[type="password"] {
      height: 40px;
      margin-bottom: 12px;
      font-size: 14px; }
    .sign_up_area .sign_form a {
      display: inline-block;
      font-size: 14px;
      margin-top: 5px; }
    .sign_up_area .sign_form .boxed_btn {
      margin-top: 30px;
      font-size: 14px;
      padding: 14px; }
    .sign_up_area .sign_form p {
      font-size: 14px;
      margin-top: 20px; }
  .sign_up_area .sign_up p {
    font-size: 14px;
    padding: 14px;
    margin-top: 50px;
    width: 70%; } }
.sign_in_up_body {
  background: -webkit-linear-gradient(bottom, #1317d1 0%, #07164e 100%);
  background: -o-linear-gradient(top, #1317d1 0%, #07164e 100%);
  background: -moz-linear-gradient(to top, #1317d1 0%, #07164e 100%);
  background: linear-gradient(to top, #1317d1 0%, #07164e 100%); }

.reset_pass {
  text-align: center; }
  .reset_pass h1 {
    font-size: 48px;
    color: #fff;
    margin-bottom: 55px;
    font-weight: 800;
    font-family: 'Fira Sans', sans-serif; }
  .reset_pass .sign_form {
    background: #fff;
    border-radius: 10px;
    padding: 80px 100px 120px;
    margin: 0 40px;
    z-index: 0;
    position: relative;
    -webkit-box-shadow: 0 8px 10px -5px #1c1c24;
    -moz-box-shadow: 0 8px 10px -5px #1c1c24;
    box-shadow: 0 8px 10px -5px #1c1c24; }
    .reset_pass .sign_form:after, .reset_pass .sign_form:before {
      position: absolute;
      content: '';
      background: #ffffff;
      border-radius: 10px;
      -webkit-box-shadow: 0 8px 10px -5px #1c1c24;
      -moz-box-shadow: 0 8px 10px -5px #1c1c24;
      box-shadow: 0 8px 10px -5px #1c1c24; }
    .reset_pass .sign_form:after {
      left: -40px;
      bottom: 40px;
      height: calc(100% - 40px);
      z-index: -1;
      width: calc(100% + 80px); }
    .reset_pass .sign_form:before {
      left: -20px;
      bottom: 20px;
      height: calc(100% - 20px);
      z-index: -3;
      width: calc(100% + 40px); }
    .reset_pass .sign_form h2 {
      font-size: 30px;
      color: #304e73;
      margin-bottom: 40px; }
    .reset_pass .sign_form label {
      color: #838bab;
      font-size: 18px;
      margin: 15px 0;
      text-transform: uppercase; }
    .reset_pass .sign_form input[type="email"], .reset_pass .sign_form input[type="password"] {
      height: 55px;
      margin-bottom: 15px;
      font-size: 18px;
      border-radius: 3px;
      background: #f6faff;
      border: 1px solid #c7e1fb;
      transition: border-color 0s; }
      .reset_pass .sign_form input[type="email"]:focus, .reset_pass .sign_form input[type="password"]:focus {
        outline: none;
        border: none;
        -webkit-box-shadow: 0px 0px 25px 0px rgba(30, 36, 107, 0.15);
        -moz-box-shadow: 0px 0px 25px 0px rgba(30, 36, 107, 0.15);
        box-shadow: 0px 0px 25px 0px rgba(30, 36, 107, 0.15); }
    .reset_pass .sign_form a {
      display: inline-block;
      font-size: 18px; }
    .reset_pass .sign_form .boxed_btn {
      width: 100%;
      border-radius: 3px;
      padding: 16px;
      background: #363bff;
      display: block;
      margin-top: 40px;
      color: #fff;
      font-size: 18px;
      text-transform: uppercase;
      outline: none;
      border: none;
      cursor: pointer;
      -webkit-transition: all 0.3s ease-in-out;
      -moz-transition: all 0.3s ease-in-out;
      -ms-transition: all 0.3s ease-in-out;
      -o-transition: all 0.3s ease-in-out;
      transition: all 0.3s ease-in-out; }
      .reset_pass .sign_form .boxed_btn:hover {
        -webkit-box-shadow: 0 10px 25px 1px #2588f273;
        -moz-box-shadow: 0 10px 25px 1px #2588f273;
        box-shadow: 0 10px 25px 1px #2588f273; }
  .reset_pass .sign_up p {
    font-size: 18px;
    color: #fff;
    background: rgba(0, 0, 0, 0.3);
    padding: 18px;
    width: 75%;
    border-radius: 3px;
    margin: 0 auto;
    margin-top: 110px; }

@media only screen and (min-width: 992px) and (max-width: 1200px) {
  .reset_pass h1 {
    font-size: 80px;
    color: #fff;
    margin-bottom: 45px;
    font-weight: 300;
    font-family: 'Fira Sans', sans-serif; }
  .reset_pass .sign_form {
    padding: 40px 50px 100px;
    margin: 0 50px; }
    .reset_pass .sign_form:after {
      left: -30px;
      bottom: 35px;
      height: calc(100% - 35px);
      z-index: -1;
      width: calc(100% + 60px); }
    .reset_pass .sign_form:before {
      left: -15px;
      bottom: 15px;
      height: calc(100% - 15px);
      z-index: -3;
      width: calc(100% + 30px); }
    .reset_pass .sign_form h2 {
      font-size: 24px;
      margin-bottom: 30px; }
    .reset_pass .sign_form label {
      font-size: 16px;
      margin: 12px 0; }
    .reset_pass .sign_form input[type="email"], .reset_pass .sign_form input[type="password"] {
      height: 45px;
      margin-bottom: 12px;
      font-size: 16px; }
    .reset_pass .sign_form a {
      display: inline-block;
      font-size: 16px;
      margin-top: 5px; }
    .reset_pass .sign_form .boxed_btn {
      margin-top: 30px;
      font-size: 16px; }
  .reset_pass .sign_up p {
    font-size: 16px;
    padding: 16px;
    margin-top: 70px; } }
@media only screen and (min-width: 320px) and (max-width: 991px) {
  .reset_pass h1 {
    font-size: 60px;
    margin-bottom: 35px; }
  .reset_pass .sign_form {
    padding: 30px 10px 90px;
    margin: 0 50px; }
    .reset_pass .sign_form:after {
      left: -30px;
      bottom: 35px;
      height: calc(100% - 35px);
      z-index: -1;
      width: calc(100% + 60px); }
    .reset_pass .sign_form:before {
      left: -15px;
      bottom: 15px;
      height: calc(100% - 15px);
      z-index: -3;
      width: calc(100% + 30px); }
    .reset_pass .sign_form h2 {
      font-size: 20px;
      margin-bottom: 20px; }
    .reset_pass .sign_form label {
      font-size: 14px;
      margin: 12px 0; }
    .reset_pass .sign_form input[type="email"], .reset_pass .sign_form input[type="password"] {
      height: 40px;
      margin-bottom: 12px;
      font-size: 14px; }
    .reset_pass .sign_form a {
      display: inline-block;
      font-size: 14px;
      margin-top: 5px; }
    .reset_pass .sign_form .boxed_btn {
      margin-top: 30px;
      font-size: 14px;
      padding: 14px; }
  .reset_pass .sign_up p {
    font-size: 14px;
    padding: 14px;
    margin-top: 50px;
    width: 70%; } }
.body404 {
  position: relative;
  z-index: 1;
  background-size: cover;
  background-position: center;
  background-repeat: no-repeat;
  background-image: url("../img/404-bg.png"); }

.content404 {
  padding: 700px 0 100px;
  color: #fff; }
  .content404 h1 {
    font-size: 36px;
    margin-bottom: 65px;
    font-weight: 400;
    font-family: 'Fira Sans', sans-serif; }
  .content404 a {
    color: #fff;
    display: inline-flex;
    width: 186px;
    height: 70px;
    justify-content: center;
    align-items: center;
    border-radius: 10px;
    margin: 0 10px 90px;
    flex-direction: column;
    font-size: 24px;
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
    .content404 a.boxed_btn {
      background: #f22525; }
      .content404 a.boxed_btn:hover {
        background: #d70d0d; }
    .content404 a.boxed_btn_alt {
      background: #03b8dd; }
      .content404 a.boxed_btn_alt:hover {
        background: #028eab; }
  .content404 .search_box {
    height: 70px;
    border-radius: 15px;
    position: relative;
    width: 530px;
    background: #fff;
    margin: 0 auto; }
    .content404 .search_box input {
      border-radius: 10px 0 0 10px;
      position: absolute;
      left: 0;
      border: none;
      width: 65%;
      height: 100%;
      padding-left: 25px;
      font-weight: 400;
      font-family: 'Fira Sans', sans-serif;
      font-size: 24px; }
    .content404 .search_box button {
      background: #363bff;
      -webkit-transition: all 0.3s ease-in-out;
      -moz-transition: all 0.3s ease-in-out;
      -ms-transition: all 0.3s ease-in-out;
      -o-transition: all 0.3s ease-in-out;
      transition: all 0.3s ease-in-out;
      border-radius: 10px;
      cursor: pointer;
      color: #fff;
      position: absolute;
      width: 35%;
      height: 100%;
      right: 0;
      border: none;
      font-weight: 700;
      font-family: 'Fira Sans', sans-serif;
      font-size: 24px; }
      .content404 .search_box button:hover {
        background: #0309ff; }

.content404_2 {
  padding: 700px 0 100px;
  color: #191b41; }
  .content404_2 h1 {
    font-size: 36px;
    margin-bottom: 65px;
    font-weight: 400;
    font-family: 'Fira Sans', sans-serif; }
  .content404_2 a {
    color: #fff;
    display: inline-flex;
    width: 186px;
    height: 70px;
    justify-content: center;
    align-items: center;
    border-radius: 10px;
    margin: 0 10px 90px;
    flex-direction: column;
    font-size: 24px;
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif;
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
    .content404_2 a.boxed_btn {
      background: #f22525; }
      .content404_2 a.boxed_btn:hover {
        background: #d70d0d; }
    .content404_2 a.boxed_btn_alt {
      background: #03b8dd; }
      .content404_2 a.boxed_btn_alt:hover {
        background: #028eab; }
  .content404_2 .search_box {
    height: 70px;
    border-radius: 10px;
    position: relative;
    width: 530px;
    background: #fff;
    margin: 0 auto; }
    .content404_2 .search_box input {
      border-radius: 10px 0 0 10px;
      position: absolute;
      left: 0;
      border: none;
      border: 1px solid #a3d2e4;
      width: 80%;
      height: 100%;
      padding-right: 15%;
      padding-left: 25px;
      font-weight: 400;
      font-family: 'Fira Sans', sans-serif;
      font-size: 24px; }
    .content404_2 .search_box button {
      background: #363bff;
      -webkit-transition: all 0.3s ease-in-out;
      -moz-transition: all 0.3s ease-in-out;
      -ms-transition: all 0.3s ease-in-out;
      -o-transition: all 0.3s ease-in-out;
      transition: all 0.3s ease-in-out;
      border-radius: 10px;
      cursor: pointer;
      color: #fff;
      position: absolute;
      width: 35%;
      height: 100%;
      right: 0;
      border: none;
      font-weight: 700;
      font-family: 'Fira Sans', sans-serif;
      font-size: 24px; }
      .content404_2 .search_box button:hover {
        background: #0309ff; }

@media only screen and (min-width: 768px) and (max-width: 991px) {
  .content404 {
    padding: 350px 0 70px; }
    .content404 h1 {
      font-size: 28px;
      margin-bottom: 45px; }
    .content404 a {
      width: 150px;
      height: 50px;
      margin: 0 10px 60px;
      font-size: 18px; }
    .content404 .search_box {
      height: 50px;
      width: 400px; }
      .content404 .search_box input {
        padding-left: 15px;
        font-size: 18px; }
      .content404 .search_box button {
        font-size: 18px; }

  .content404_2 {
    padding: 350px 0 70px; }
    .content404_2 h1 {
      font-size: 28px;
      margin-bottom: 45px; }
    .content404_2 a {
      width: 150px;
      height: 50px;
      margin: 0 10px 60px;
      font-size: 18px; }
    .content404_2 .search_box {
      height: 50px;
      width: 400px; }
      .content404_2 .search_box input {
        padding-left: 15px;
        font-size: 18px; }
      .content404_2 .search_box button {
        font-size: 18px; } }
@media (max-width: 767px) {
  .content404 {
    padding: 300px 0 50px; }
    .content404 h1 {
      font-size: 24px;
      margin-bottom: 35px; }
    .content404 a {
      width: 130px;
      height: 40px;
      margin: 0 5px 40px;
      font-size: 16px; }
    .content404 .search_box {
      height: 40px;
      width: 80%; }
      .content404 .search_box input {
        padding-left: 10px;
        font-size: 16px; }
      .content404 .search_box button {
        font-size: 16px; }

  .content404_2 {
    padding: 300px 0 50px; }
    .content404_2 h1 {
      font-size: 24px;
      margin-bottom: 35px; }
    .content404_2 a {
      width: 130px;
      height: 40px;
      margin: 0 5px 40px;
      font-size: 16px; }
    .content404_2 .search_box {
      height: 40px;
      width: 80%; }
      .content404_2 .search_box input {
        padding-left: 10px;
        font-size: 16px; }
      .content404_2 .search_box button {
        font-size: 16px; } }
@media only screen and (min-width: 480px) and (max-width: 767px) {
  .content404 .search_box {
    width: 360px; }

  .content404_2 .search_box {
    width: 360px; } }
.coming_soon_area {
  background: -webkit-linear-gradient(top, #12092b 0%, #0b1230 100%);
  background: -o-linear-gradient(bottom, #12092b 0%, #0b1230 100%);
  background: -moz-linear-gradient(to bottom, #12092b 0%, #0b1230 100%);
  background: linear-gradient(to bottom, #12092b 0%, #0b1230 100%);
  color: #fff;
  position: relative;
  z-index: 1; }
  .coming_soon_area:after {
    position: absolute;
    z-index: -1;
    left: 0;
    top: 0;
    height: 100%;
    width: 100%;
    content: '';
    background-image: url("../img/coming_soon_bg.png");
    background-size: cover;
    background-position: center;
    background-repeat: no-repeat; }
  .coming_soon_area h1.heading {
    font-size: 120px;
    font-weight: 100;
    font-family: 'Fira Sans', sans-serif;
    line-height: 1;
    margin: 80px 0 100px;
    color: #fff; }
  .coming_soon_area h3.sub_heading {
    font-size: 24px;
    font-weight: 500;
    font-family: 'Fira Sans', sans-serif;
    line-height: 1;
    margin-bottom: 55px; }
  .coming_soon_area .subscribe_wrapper .form-group {
    margin: 0; }
  .coming_soon_area .subscribe_wrapper input {
    border: none;
    background: #fff;
    color: #000;
    border: none;
    border-radius: 10px;
    margin: 0;
    height: 72px;
    padding: 8px;
    padding-left: 25px;
    width: 370px; }
    .coming_soon_area .subscribe_wrapper input::placeholder {
      opacity: 1;
      color: #000; }
    .coming_soon_area .subscribe_wrapper input:-ms-input-placeholder {
      opacity: 1;
      color: #000; }
    .coming_soon_area .subscribe_wrapper input::-ms-input-placeholder {
      opacity: 1;
      color: #000; }
    .coming_soon_area .subscribe_wrapper input:-moz-placeholder {
      opacity: 1;
      color: #000; }
    .coming_soon_area .subscribe_wrapper input::-moz-placeholder {
      opacity: 1;
      color: #000; }
  .coming_soon_area .subscribe_wrapper .boxed_btn {
    margin-left: 20px;
    padding: 25px 30px;
    height: 72px;
    color: #fff;
    border: 0;
    font-weight: 500;
    font-family: 'Fira Sans', sans-serif;
    background: -webkit-linear-gradient(bottom, #6a11cb 0%, #2575fc 100%);
    background: -o-linear-gradient(top, #6a11cb 0%, #2575fc 100%);
    background: -moz-linear-gradient(to top, #6a11cb 0%, #2575fc 100%);
    background: linear-gradient(to top, #6a11cb 0%, #2575fc 100%);
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out;
    border-radius: 10px; }
    .coming_soon_area .subscribe_wrapper .boxed_btn:hover {
      border: 0;
      color: #304e73; }
    .coming_soon_area .subscribe_wrapper .boxed_btn:after {
      background: #fff;
      border-radius: 10px; }
  .coming_soon_area .social_link {
    margin: 35px 0 50px; }
    .coming_soon_area .social_link li {
      margin-right: 15px;
      display: inline-block; }
      .coming_soon_area .social_link li a {
        font-size: 0; }
      .coming_soon_area .social_link li i {
        font-size: 20px;
        display: inline-block;
        padding: 15px;
        border-radius: 50%;
        background: #fff;
        -webkit-transition: all 0.3s ease-in-out;
        -moz-transition: all 0.3s ease-in-out;
        -ms-transition: all 0.3s ease-in-out;
        -o-transition: all 0.3s ease-in-out;
        transition: all 0.3s ease-in-out;
        color: #3a2085; }
      .coming_soon_area .social_link li i.ti-facebook:hover {
        color: #fff;
        background: #3b5998; }
      .coming_soon_area .social_link li i.ti-vimeo-alt:hover {
        color: #fff;
        background: #1ab7ea; }
      .coming_soon_area .social_link li i.ti-twitter-alt:hover {
        color: #fff;
        background: #1da1f2; }
      .coming_soon_area .social_link li i.ti-pinterest:hover {
        color: #fff;
        background: #bd081c; }
  .coming_soon_area .single_counter {
    -webkit-box-shadow: 0px 0px 47.5px 2.5px rgba(0, 0, 0, 0.2);
    -moz-box-shadow: 0px 0px 47.5px 2.5px rgba(0, 0, 0, 0.2);
    box-shadow: 0px 0px 47.5px 2.5px rgba(0, 0, 0, 0.2);
    background: rgba(255, 255, 255, 0.05);
    padding: 60px 0;
    border-radius: 20px;
    margin-bottom: 60px; }
    .coming_soon_area .single_counter span {
      font-size: 100px;
      line-height: 1;
      font-weight: 100;
      font-family: 'Fira Sans', sans-serif; }
    .coming_soon_area .single_counter h3 {
      font-size: 30px;
      margin-top: 15px;
      line-height: 1;
      font-weight: 500;
      font-family: 'Fira Sans', sans-serif; }
  .coming_soon_area .footer_in {
    padding: 70px 0 100px; }
    .coming_soon_area .footer_in .footer_logo {
      text-align: left; }
    .coming_soon_area .footer_in .copy_right_text {
      font-size: 18px;
      text-align: right;
      font-weight: 400;
      font-family: 'Fira Sans', sans-serif; }

@media only screen and (min-width: 992px) and (max-width: 1200px) {
  .coming_soon_area h1.heading {
    font-size: 100px;
    margin: 60px 0 80px; }
  .coming_soon_area h3.sub_heading {
    margin-bottom: 35px; }
  .coming_soon_area .single_counter span {
    font-size: 80px; }
  .coming_soon_area .single_counter h3 {
    font-size: 28px; }
  .coming_soon_area .footer_in {
    padding: 50px 0 80px; } }
@media only screen and (min-width: 768px) and (max-width: 991px) {
  .coming_soon_area h1.heading {
    font-size: 75px;
    margin: 50px 0 70px; }
  .coming_soon_area h3.sub_heading {
    font-size: 22px;
    margin-bottom: 30px; }
  .coming_soon_area .subscribe_wrapper input {
    height: 60px;
    padding-left: 15px;
    width: 340px; }
  .coming_soon_area .subscribe_wrapper .boxed_btn {
    height: 60px;
    padding: 25px; }
  .coming_soon_area .social_link {
    margin: 25px 0 40px; }
    .coming_soon_area .social_link li i {
      font-size: 18px;
      padding: 12px; }
  .coming_soon_area .single_counter {
    padding: 40px 0; }
    .coming_soon_area .single_counter span {
      font-size: 60px; }
    .coming_soon_area .single_counter h3 {
      font-size: 24px;
      margin-top: 10px; }
  .coming_soon_area .footer_in {
    padding: 40px 0 70px; }
    .coming_soon_area .footer_in .footer_logo img {
      width: 60%; }
    .coming_soon_area .footer_in .copy_right_text {
      font-size: 14px; } }
@media (max-width: 767px) {
  .coming_soon_area h1.heading {
    font-size: 50px;
    margin: 30px 0 45px; }
  .coming_soon_area h3.sub_heading {
    font-size: 16px;
    margin-bottom: 20px; }
  .coming_soon_area .subscribe_wrapper input {
    height: 40px;
    padding-left: 18px;
    width: 240px; }
  .coming_soon_area .subscribe_wrapper .boxed_btn {
    height: 40px;
    padding: 10px 20px;
    margin-left: 10px; }
  .coming_soon_area .social_link {
    margin: 20px 0 30px; }
    .coming_soon_area .social_link li i {
      font-size: 16px;
      padding: 8px; }
  .coming_soon_area .counter_section .col-3 {
    padding: 2px; }
  .coming_soon_area .single_counter {
    padding: 30px 0;
    margin-bottom: 40px; }
    .coming_soon_area .single_counter span {
      font-size: 36px; }
    .coming_soon_area .single_counter h3 {
      font-size: 18px;
      margin-top: 5px; }
  .coming_soon_area .footer_in {
    padding: 10px 0 20px; }
    .coming_soon_area .footer_in .footer_logo {
      text-align: center; }
      .coming_soon_area .footer_in .footer_logo img {
        width: 30%;
        margin-bottom: 25px; }
    .coming_soon_area .footer_in .copy_right_text {
      font-size: 14px;
      text-align: center; } }
.counter_section_3 {
  background: -webkit-linear-gradient(bottom, #6a11cb 0%, #2575fc 100%);
  background: -o-linear-gradient(top, #6a11cb 0%, #2575fc 100%);
  background: -moz-linear-gradient(to top, #6a11cb 0%, #2575fc 100%);
  background: linear-gradient(to top, #6a11cb 0%, #2575fc 100%); }
  .counter_section_3 .single_counter_3 {
    color: #fff; }
    .counter_section_3 .single_counter_3 i {
      font-size: 45px;
      margin-bottom: 20px; }
    .counter_section_3 .single_counter_3 span {
      font-size: 48px;
      font-weight: 700;
      font-family: 'Fira Sans', sans-serif;
      margin-bottom: 20px; }
    .counter_section_3 .single_counter_3 h4 {
      font-size: 24px;
      font-weight: 600;
      font-family: 'Fira Sans', sans-serif;
      text-transform: uppercase; }

.about_work_area .about_work h2 {
  color: #363bff;
  font-size: 36px;
  font-weight: 600;
  font-family: 'Fira Sans', sans-serif;
  margin-bottom: 35px;
  position: relative; }
  .about_work_area .about_work h2:after {
    position: absolute;
    z-index: -1;
    left: 0;
    bottom: -15px;
    width: 100px;
    height: 2px;
    background: #2cd63c;
    content: ''; }
.about_work_area .about_work p {
  font-size: 16px;
  font-weight: 400;
  font-family: 'Fira Sans', sans-serif;
  margin-bottom: 45px;
  line-height: 1.5;
  text-align: justify;
  color: #fff; }
.about_work_area .about_work h3 {
  color: #363bff;
  font-size: 24px;
  font-weight: 400;
  font-family: 'Fira Sans', sans-serif;
  margin-bottom: 25px; }
.about_work_area .about_work .boxed_btn {
  font-size: 16px;
  font-weight: 400;
  font-family: 'Fira Sans', sans-serif;
  padding: 16px 35px;
  display: inline-block;
  color: #fff;
  background: #2cd63c;
  -webkit-transition: all 0.3s ease-in-out;
  -moz-transition: all 0.3s ease-in-out;
  -ms-transition: all 0.3s ease-in-out;
  -o-transition: all 0.3s ease-in-out;
  transition: all 0.3s ease-in-out;
  border-radius: 5px; }
  .about_work_area .about_work .boxed_btn:hover {
    background: #3a2085;
    color: #fff; }

.client_and_testimonial_3 {
  position: relative;
  z-index: 1; }
  .client_and_testimonial_3:after {
    position: absolute;
    z-index: -1;
    background-repeat: no-repeat;
    background-size: cover;
    background-image: url("../img/testimonial_and_client_bg_3.png");
    content: '';
    left: 0;
    width: 100%;
    height: 100%;
    top: 0px; }

.promo_content_area_6 {
  background: transparent;
  position: relative;
  z-index: 3; }
  .promo_content_area_6:after {
    position: absolute;
    z-index: -2;
    left: auto;
    top: 0px;
    right: -155px;
    width: 34%;
    height: 100%;
    opacity: .2;
    background-size: cover;
    background-position: center;
    background-repeat: no-repeat;
    content: '';
    background-image: url("../img/paint_draw.png"); }
  .promo_content_area_6 .left_side .box_wrapper {
    width: 400px;
    height: 300px;
    margin: auto;
    position: relative; }
    .promo_content_area_6 .left_side .box_wrapper .button-container {
      width: 100%;
      height: 100%;
      background-color: transparent; }
    .promo_content_area_6 .left_side .box_wrapper .box {
      width: 85%;
      height: 65%;
      overflow: hidden;
      background-size: cover;
      background-position: center;
      background-repeat: no-repeat;
      border-radius: 20px;
      position: absolute;
      transition: all 0.5s cubic-bezier(0.68, -0.55, 0.265, 1.55); }
      .promo_content_area_6 .left_side .box_wrapper .box:first-of-type {
        background-image: url("../img/promo/video_2.png");
        top: 35%;
        left: -5%;
        z-index: 2; }
        .promo_content_area_6 .left_side .box_wrapper .box:first-of-type.scale {
          background: -webkit-linear-gradient(top, #6a11cb 0%, #2575fc 100%);
          background: -o-linear-gradient(bottom, #6a11cb 0%, #2575fc 100%);
          background: -moz-linear-gradient(to bottom, #6a11cb 0%, #2575fc 100%);
          background: linear-gradient(to bottom, #6a11cb 0%, #2575fc 100%);
          transform: scale(10);
          z-index: 8; }
      .promo_content_area_6 .left_side .box_wrapper .box:nth-of-type(2) {
        background-image: url("../img/promo/video.png");
        top: 0%;
        left: 15%;
        z-index: 1; }
      .promo_content_area_6 .left_side .box_wrapper .box:nth-of-type(3) {
        background-image: url("../img/promo/video_3.png");
        top: 15%;
        left: 35%;
        z-index: 3; }
  .promo_content_area_6 .left_side .centered {
    top: 60px !important;
    left: 15px !important; }
  .promo_content_area_6 .left_side .video_button.hide {
    opacity: 0;
    visibility: hidden; }
  .promo_content_area_6 .right_side h2 {
    font-size: 36px;
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif;
    margin-bottom: 25px;
    background: -webkit-linear-gradient(right, #6a11cb 0%, #2575fc 100%);
    background: -o-linear-gradient(left, #6a11cb 0%, #2575fc 100%);
    background: -moz-linear-gradient(to left, #6a11cb 0%, #2575fc 100%);
    background: linear-gradient(to left, #6a11cb 0%, #2575fc 100%);
    -webkit-background-clip: text;
    -webkit-text-fill-color: transparent; }
  .promo_content_area_6 .right_side p {
    font-size: 16px;
    color: #fff;
    line-height: 1.5;
    margin-bottom: 20px; }
  .promo_content_area_6 .right_side .boxed_btn {
    font-size: 16px;
    padding: 15px 20px;
    border-radius: 5px;
    display: inline-block;
    color: #fff;
    font-weight: 500;
    font-family: 'Fira Sans', sans-serif;
    background: -webkit-linear-gradient(left, #6a11cb 0%, #2575fc 100%);
    background: -o-linear-gradient(right, #6a11cb 0%, #2575fc 100%);
    background: -moz-linear-gradient(to right, #6a11cb 0%, #2575fc 100%);
    background: linear-gradient(to right, #6a11cb 0%, #2575fc 100%);
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
    .promo_content_area_6 .right_side .boxed_btn:hover {
      color: #fff; }
    .promo_content_area_6 .right_side .boxed_btn:after {
      background: #3a2085;
      border-radius: 5px; }

@media only screen and (min-width: 992px) and (max-width: 1200px) {
  .promo_content_area_6:after {
    top: 70px;
    right: -100px; }
  .promo_content_area_6 .left_side .box_wrapper {
    width: 340px;
    height: 265px; }
  .promo_content_area_6 .right_side h2 {
    font-size: 36px;
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif;
    margin-bottom: 25px;
    background: -webkit-linear-gradient(right, #6a11cb 0%, #2575fc 100%);
    background: -o-linear-gradient(left, #6a11cb 0%, #2575fc 100%);
    background: -moz-linear-gradient(to left, #6a11cb 0%, #2575fc 100%);
    background: linear-gradient(to left, #6a11cb 0%, #2575fc 100%);
    -webkit-background-clip: text;
    -webkit-text-fill-color: transparent; }
  .promo_content_area_6 .right_side p {
    font-size: 16px;
    color: #838bab;
    line-height: 1.5;
    margin-bottom: 20px; }
  .promo_content_area_6 .right_side .boxed_btn {
    font-size: 16px;
    padding: 15px 20px;
    border-radius: 5px;
    display: inline-block;
    color: #fff;
    font-weight: 500;
    font-family: 'Fira Sans', sans-serif;
    background: -webkit-linear-gradient(left, #6a11cb 0%, #2575fc 100%);
    background: -o-linear-gradient(right, #6a11cb 0%, #2575fc 100%);
    background: -moz-linear-gradient(to right, #6a11cb 0%, #2575fc 100%);
    background: linear-gradient(to right, #6a11cb 0%, #2575fc 100%);
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
    .promo_content_area_6 .right_side .boxed_btn:hover {
      background: -webkit-linear-gradient(right, #6a11cb 0%, #2575fc 100%);
      background: -o-linear-gradient(left, #6a11cb 0%, #2575fc 100%);
      background: -moz-linear-gradient(to left, #6a11cb 0%, #2575fc 100%);
      background: linear-gradient(to left, #6a11cb 0%, #2575fc 100%); } }
@media only screen and (min-width: 768px) and (max-width: 991px) {
  .promo_content_area_5:after {
    top: 0px;
    right: -100px;
    width: 45%;
    height: 75%; }
  .promo_content_area_5 .left_side .box_wrapper {
    width: 340px;
    height: 265px;
    margin-bottom: 35px; }
  .promo_content_area_5 .right_side {
    text-align: center; }
    .promo_content_area_5 .right_side h2 {
      font-size: 28px;
      margin-bottom: 15px; }
    .promo_content_area_5 .right_side p {
      font-size: 14px;
      margin-bottom: 20px; }
    .promo_content_area_5 .right_side .boxed_btn {
      font-size: 14px;
      padding: 10px 15px; }

  .counter_section_3 .single_counter_3 i {
    font-size: 36px; }
  .counter_section_3 .single_counter_3 span {
    font-size: 36px; }
  .counter_section_3 .single_counter_3 h4 {
    font-size: 18px; }

  .about_work_area .about_work {
    margin-bottom: 50px; } }
@media (max-width: 767px) {
  .promo_content_area_5:after {
    height: 0; }
  .promo_content_area_5 .left_side .box_wrapper {
    width: 55%;
    height: 205px;
    margin-bottom: 35px; }
    .promo_content_area_5 .left_side .box_wrapper .box:first-of-type {
      left: -15%; }
    .promo_content_area_5 .left_side .box_wrapper .box:nth-of-type(2) {
      left: 10%; }
    .promo_content_area_5 .left_side .box_wrapper .box:nth-of-type(3) {
      left: 30%; }
  .promo_content_area_5 .right_side {
    text-align: center; }
    .promo_content_area_5 .right_side h2 {
      font-size: 24px;
      margin-bottom: 10px; }
    .promo_content_area_5 .right_side p {
      font-size: 14px;
      margin-bottom: 15px; }
    .promo_content_area_5 .right_side .boxed_btn {
      font-size: 14px;
      padding: 10px 15px; }

  .counter_section_3 .single_counter_3 {
    margin-bottom: 50px; }
    .counter_section_3 .single_counter_3 i {
      font-size: 28px;
      margin-bottom: 10px; }
    .counter_section_3 .single_counter_3 span {
      font-size: 28px;
      margin-bottom: 10px; }
    .counter_section_3 .single_counter_3 h4 {
      font-size: 18px; }

  .about_work_area .about_work {
    margin-bottom: 35px; }
    .about_work_area .about_work h2 {
      margin-bottom: 25px; }
      .about_work_area .about_work h2:after {
        bottom: -10px; }
    .about_work_area .about_work p {
      font-size: 14px;
      margin-bottom: 35px; }
    .about_work_area .about_work h3 {
      font-size: 18px; }
    .about_work_area .about_work .boxed_btn {
      font-size: 14px;
      padding: 10px 25px; } }
.hero_area_3 {
  padding-top: 150px; }
  .hero_area_3 .slide_1 {
    background-image: url(../img/hero_area/home_3/hero_bg_1.jpg); }
  .hero_area_3 .slide_2 {
    background-image: url(../img/hero_area/home_3/hero_bg_2.jpg); }
  .hero_area_3 .slide_3 {
    background-image: url(../img/hero_area/home_3/hero_bg_3.jpg); }
  .hero_area_3 .slide_1, .hero_area_3 .slide_2, .hero_area_3 .slide_3 {
    position: relative;
    z-index: 1;
    background-size: cover;
    background-position: center;
    background-repeat: no-repeat;
    height: 700px; }
    .hero_area_3 .slide_1:after, .hero_area_3 .slide_2:after, .hero_area_3 .slide_3:after {
      position: absolute;
      z-index: -1;
      content: '';
      bottom: 0;
      left: 0;
      width: 100%;
      height: 100%;
      background: rgba(0, 0, 0, 0.8); }
  .hero_area_3 .hero_content_wrapper .hero_content {
    padding: 150px 0;
    color: #fff; }
    .hero_area_3 .hero_content_wrapper .hero_content h2 {
      font-weight: 700;
      font-family: 'Rubik', sans-serif;
      font-size: 48px;
      line-height: 1.3;
      margin-bottom: 35px; }
    .hero_area_3 .hero_content_wrapper .hero_content h3 {
      font-size: 24px;
      font-weight: 500;
      font-family: 'Fira Sans', sans-serif;
      margin-bottom: 25px; }
      .hero_area_3 .hero_content_wrapper .hero_content h3 span.yellow_color {
        color: #ffcc02; }
      .hero_area_3 .hero_content_wrapper .hero_content h3 span.green_color {
        color: #2cd63c; }
    .hero_area_3 .hero_content_wrapper .hero_content p {
      line-height: 1.5; }
    .hero_area_3 .hero_content_wrapper .hero_content .service_list ul {
      float: left; }
      .hero_area_3 .hero_content_wrapper .hero_content .service_list ul li {
        font-weight: 400;
        font-family: 'Fira Sans', sans-serif;
        font-size: 18px;
        margin-bottom: 20px;
        line-height: 1; }
        .hero_area_3 .hero_content_wrapper .hero_content .service_list ul li i {
          color: #2cd63c;
          margin-right: 12px;
          font-weight: 900; }
    .hero_area_3 .hero_content_wrapper .hero_content .service_list .list_1 {
      margin-right: 50px; }
    .hero_area_3 .hero_content_wrapper .hero_content .boxed_btn_3 {
      margin-top: 45px;
      padding: 15px 30px;
      font-size: 20px;
      border-radius: 0;
      border: 0;
      float: left;
      clear: both;
      display: inline-block;
      background: #1b38ff;
      -webkit-transition: all 0.3s ease-in-out;
      -moz-transition: all 0.3s ease-in-out;
      -ms-transition: all 0.3s ease-in-out;
      -o-transition: all 0.3s ease-in-out;
      transition: all 0.3s ease-in-out;
      color: #fff; }
      .hero_area_3 .hero_content_wrapper .hero_content .boxed_btn_3:hover {
        border-radius: 0;
        background: #182dcc; }
  .hero_area_3 .slide_1 .right_content .layers {
    width: 100%; }
  .hero_area_3 .slide_1 .right_content .layer-one {
    position: absolute;
    top: 30%;
    z-index: 2;
    left: 10%;
    width: 85%;
    animation-delay: 2s; }
    .hero_area_3 .slide_1 .right_content .layer-one.animatedaa {
      animation: h3slider11 1s ease-in-out;
      animation-delay: 1.3s; }
  .hero_area_3 .slide_1 .right_content .layer-two {
    position: absolute;
    top: 15%;
    z-index: 1;
    left: 0%; }
    .hero_area_3 .slide_1 .right_content .layer-two.animatedaa {
      animation: h3slider12 .7s ease-in-out;
      animation-delay: .3s; }
@-webkit-keyframes h3slider12 {
  0% {
    transform: scale(1); }
  50% {
    transform: scale(1.1); }
  100% {
    transform: scale(1); } }
@-webkit-keyframes h3slider11 {
  0% {
    transform: translate(0, 0); }
  20% {
    transform: translate(20px, 0); }
  40% {
    transform: translate(-20px, 0); }
  60% {
    transform: translate(20px, 0); }
  80% {
    transform: translate(-20px, 0); }
  100% {
    transform: translate(0, 0); } }
  .hero_area_3 .slide_2 .right_content .layers {
    width: 100%;
    text-align: center; }
  .hero_area_3 .slide_2 .right_content .layer-one {
    position: absolute;
    top: 43%;
    z-index: 2;
    left: 0%;
    opacity: 0; }
    .hero_area_3 .slide_2 .right_content .layer-one.animatedaa {
      transform: translateY(75%);
      opacity: 1;
      -webkit-transition: all 1s ease-in-out;
      -moz-transition: all 1s ease-in-out;
      -ms-transition: all 1s ease-in-out;
      -o-transition: all 1s ease-in-out;
      transition: all 1s ease-in-out;
      transition-delay: 1.1s; }
  .hero_area_3 .slide_2 .right_content .layer-two {
    position: absolute;
    top: 38%;
    z-index: 3;
    left: 25%;
    opacity: 0; }
    .hero_area_3 .slide_2 .right_content .layer-two.animatedaa {
      transform: translateY(90%);
      opacity: 1;
      -webkit-transition: all 1s ease-in-out;
      -moz-transition: all 1s ease-in-out;
      -ms-transition: all 1s ease-in-out;
      -o-transition: all 1s ease-in-out;
      transition: all 1s ease-in-out;
      transition-delay: 1.2s; }
  .hero_area_3 .slide_2 .right_content .layer-three {
    position: absolute;
    top: 34%;
    z-index: 4;
    left: 52%;
    opacity: 0; }
    .hero_area_3 .slide_2 .right_content .layer-three.animatedaa {
      transform: translateY(90%);
      opacity: 1;
      -webkit-transition: all 1s ease-in-out;
      -moz-transition: all 1s ease-in-out;
      -ms-transition: all 1s ease-in-out;
      -o-transition: all 1s ease-in-out;
      transition: all 1s ease-in-out;
      transition-delay: 1.3s; }
  .hero_area_3 .slide_2 .right_content .layer-four {
    position: absolute;
    top: 43%;
    z-index: 5;
    right: 0%;
    opacity: 0; }
    .hero_area_3 .slide_2 .right_content .layer-four.animatedaa {
      transform: translateY(75%);
      opacity: 1;
      -webkit-transition: all 1s ease-in-out;
      -moz-transition: all 1s ease-in-out;
      -ms-transition: all 1s ease-in-out;
      -o-transition: all 1s ease-in-out;
      transition: all 1s ease-in-out;
      transition-delay: 1.4s; }
  .hero_area_3 .slide_2 .right_content .layer-five {
    position: absolute;
    top: 25%;
    z-index: 5;
    left: 0%;
    opacity: 0;
    -webkit-transition: all 1s ease-in-out;
    -moz-transition: all 1s ease-in-out;
    -ms-transition: all 1s ease-in-out;
    -o-transition: all 1s ease-in-out;
    transition: all 1s ease-in-out; }
    .hero_area_3 .slide_2 .right_content .layer-five.animatedaa {
      opacity: 1; }
  .hero_area_3 .slide_2 .right_content .layer-six {
    position: absolute;
    top: 34%;
    z-index: 6;
    opacity: 0;
    left: 14%;
    -webkit-transition: all 1s ease-in-out;
    -moz-transition: all 1s ease-in-out;
    -ms-transition: all 1s ease-in-out;
    -o-transition: all 1s ease-in-out;
    transition: all 1s ease-in-out;
    transition-delay: 2.4s; }
    .hero_area_3 .slide_2 .right_content .layer-six.animatedaa {
      animation: h3slider21 .7s ease-in-out;
      animation-delay: 3.5s;
      opacity: 1; }
@-webkit-keyframes h3slider21 {
  0% {
    transform: translate(0, 0); }
  20% {
    transform: translate(20px, 0); }
  40% {
    transform: translate(-20px, 0); }
  60% {
    transform: translate(20px, 0); }
  80% {
    transform: translate(-20px, 0); }
  100% {
    transform: translate(0, 0); } }
.hosting_brand_3 {
  position: relative;
  background: -webkit-linear-gradient(left, #13128c 0%, #370863 100%);
  background: -o-linear-gradient(right, #13128c 0%, #370863 100%);
  background: -moz-linear-gradient(to right, #13128c 0%, #370863 100%);
  background: linear-gradient(to right, #13128c 0%, #370863 100%); }

.packege_pricing_area_3 .select_month_wrapper {
  margin: 0px auto;
  width: 75%;
  margin-bottom: 60px; }
  .packege_pricing_area_3 .select_month_wrapper #chose_plan {
    border-radius: 0px; }
  .packege_pricing_area_3 .select_month_wrapper .split {
    border-radius: 0; }
  .packege_pricing_area_3 .select_month_wrapper .option_list.dropon {
    border-radius: 0px;
    z-index: 9; }

.promo_content_area_2 {
  background-size: cover;
  background-position: center;
  background-repeat: no-repeat;
  position: relative;
  z-index: 1;
  background-image: url(../img/promo/video_3.png); }
  .promo_content_area_2:after {
    position: absolute;
    width: 100%;
    height: 100%;
    content: '';
    background: rgba(0, 0, 0, 0.8);
    left: 0;
    top: 0;
    z-index: -1; }
  .promo_content_area_2 .container .promo_item_2 {
    padding: 90px 45px;
    color: #fff;
    background: #1b38ff; }
    .promo_content_area_2 .container .promo_item_2 h2 {
      font-weight: 700;
      font-family: 'Rubik', sans-serif;
      font-size: 60px;
      margin-bottom: 30px; }
    .promo_content_area_2 .container .promo_item_2 h3 {
      font-size: 24px;
      font-weight: 700;
      font-family: 'Rubik', sans-serif; }
    .promo_content_area_2 .container .promo_item_2 p {
      font-weight: 400;
      font-family: 'Fira Sans', sans-serif;
      font-size: 18px;
      line-height: 1.5;
      margin-bottom: 90px; }
    .promo_content_area_2 .container .promo_item_2 .service_list h3 {
      font-size: 30px;
      font-weight: 500;
      font-family: 'Rubik', sans-serif;
      margin-bottom: 45px; }
    .promo_content_area_2 .container .promo_item_2 .service_list ul {
      float: left; }
      .promo_content_area_2 .container .promo_item_2 .service_list ul li {
        font-weight: 500;
        font-family: 'Fira Sans', sans-serif;
        font-size: 16px;
        margin-bottom: 20px;
        line-height: 1; }
        .promo_content_area_2 .container .promo_item_2 .service_list ul li i {
          color: #2cd63c;
          margin-right: 12px;
          font-weight: 900; }
    .promo_content_area_2 .container .promo_item_2 .service_list .list_1 {
      width: 50%; }
    .promo_content_area_2 .container .promo_item_2 .boxed_btn_3 {
      margin-top: 45px;
      padding: 15px 30px;
      font-size: 18px;
      -webkit-transition: all 0.3s ease-in-out;
      -moz-transition: all 0.3s ease-in-out;
      -ms-transition: all 0.3s ease-in-out;
      -o-transition: all 0.3s ease-in-out;
      transition: all 0.3s ease-in-out;
      font-weight: 500;
      font-family: 'Fira Sans', sans-serif;
      border-radius: 0;
      border: 0;
      display: inline-block;
      background: #fff;
      color: #1b38ff; }
      .promo_content_area_2 .container .promo_item_2 .boxed_btn_3:hover {
        border-radius: 0;
        color: #fff;
        background: #182dcc; }
  .promo_content_area_2 .container .pulse_btn_wrapper {
    position: absolute;
    left: auto;
    right: 0%;
    top: 85%;
    color: #fff;
    width: 290px; }
    .promo_content_area_2 .container .pulse_btn_wrapper .play_btn_pluse {
      position: absolute;
      top: 50%;
      left: -20%; }

@media only screen and (min-width: 992px) and (max-width: 1200px) {
  .hero_area_3 .slide_1 .right_content .layers {
    width: 100%; }
  .hero_area_3 .slide_1 .right_content .layer-one {
    top: 25%;
    left: 10%;
    width: 85%; }
  .hero_area_3 .slide_2 .right_content .layer-one img, .hero_area_3 .slide_2 .right_content .layer-two img, .hero_area_3 .slide_2 .right_content .layer-three img, .hero_area_3 .slide_2 .right_content .layer-four img {
    width: 75%; }
  .hero_area_3 .slide_2 .right_content .layer-six {
    top: 32%;
    left: 10%; }
    .hero_area_3 .slide_2 .right_content .layer-six img {
      width: 75%; }

  .promo_content_area_2 .container .promo_item_2 {
    padding: 70px 20px; }
    .promo_content_area_2 .container .promo_item_2 h3 {
      font-size: 18px; }
    .promo_content_area_2 .container .promo_item_2 h2 {
      font-size: 48px;
      margin-bottom: 20px; }
    .promo_content_area_2 .container .promo_item_2 p {
      margin-bottom: 50px;
      font-size: 16px; }
    .promo_content_area_2 .container .promo_item_2 .service_list h3 {
      font-size: 24px;
      margin-bottom: 20px; }
    .promo_content_area_2 .container .promo_item_2 .service_list ul li {
      font-size: 14px; }
    .promo_content_area_2 .container .promo_item_2 .boxed_btn_3 {
      margin-top: 25px; } }
@media only screen and (min-width: 768px) and (max-width: 991px) {
  .hero_area_3 {
    padding-top: 110px; }
    .hero_area_3 .hero_content_wrapper .hero_content {
      padding: 120px 0; }
      .hero_area_3 .hero_content_wrapper .hero_content h2 {
        font-size: 36px;
        margin-bottom: 25px; }
      .hero_area_3 .hero_content_wrapper .hero_content h3 {
        font-size: 22px;
        margin-bottom: 25px; }
      .hero_area_3 .hero_content_wrapper .hero_content .service_list ul li {
        font-size: 15px;
        margin-bottom: 15px; }
        .hero_area_3 .hero_content_wrapper .hero_content .service_list ul li i {
          margin-right: 5px; }
      .hero_area_3 .hero_content_wrapper .hero_content .service_list .list_1 {
        margin-right: 15px; }
      .hero_area_3 .hero_content_wrapper .hero_content .boxed_btn_3 {
        font-size: 16px;
        margin-top: 35px; }
    .hero_area_3 .slide_1, .hero_area_3 .slide_2, .hero_area_3 .slide_3 {
      height: 600px; }
    .hero_area_3 .slide_1 .right_content .layer-one {
      top: 22%;
      width: 85%; }
    .hero_area_3 .slide_2 .right_content .layer-one {
      top: 40%; }
      .hero_area_3 .slide_2 .right_content .layer-one img {
        width: 50%; }
    .hero_area_3 .slide_2 .right_content .layer-two img {
      width: 50%; }
    .hero_area_3 .slide_2 .right_content .layer-three {
      left: 49%;
      top: 34%; }
      .hero_area_3 .slide_2 .right_content .layer-three img {
        width: 50%; }
    .hero_area_3 .slide_2 .right_content .layer-four {
      top: 38%;
      right: -5%; }
      .hero_area_3 .slide_2 .right_content .layer-four img {
        width: 50%; }
    .hero_area_3 .slide_2 .right_content .layer-six {
      top: 30%;
      left: 4%; }
      .hero_area_3 .slide_2 .right_content .layer-six img {
        width: 70%; }

  .promo_content_area_2 .container .promo_item_2 {
    padding: 40px 20px; }
    .promo_content_area_2 .container .promo_item_2 h3 {
      font-size: 18px; }
    .promo_content_area_2 .container .promo_item_2 h2 {
      font-size: 48px;
      margin-bottom: 15px; }
    .promo_content_area_2 .container .promo_item_2 p {
      margin-bottom: 35px;
      font-size: 16px; }
    .promo_content_area_2 .container .promo_item_2 .service_list h3 {
      font-size: 24px;
      margin-bottom: 20px; }
    .promo_content_area_2 .container .promo_item_2 .service_list ul li {
      font-size: 14px;
      margin-bottom: 15px; }
    .promo_content_area_2 .container .promo_item_2 .boxed_btn_3 {
      margin-top: 25px;
      padding: 10px 20px;
      font-size: 16px; }
  .promo_content_area_2 .container .pulse_btn_wrapper {
    padding-left: 65px;
    right: 10%;
    width: 80px; }
    .promo_content_area_2 .container .pulse_btn_wrapper h3 {
      display: none; } }
@media (max-width: 767px) {
  .hero_area_3 {
    padding-top: 110px; }
    .hero_area_3 .slide_1, .hero_area_3 .slide_2, .hero_area_3 .slide_3 {
      height: 550px; }
    .hero_area_3 .hero_content_wrapper .hero_content {
      padding: 70px 0; }
      .hero_area_3 .hero_content_wrapper .hero_content h2 {
        font-size: 36px;
        margin-bottom: 25px; }
      .hero_area_3 .hero_content_wrapper .hero_content h3 {
        font-size: 22px;
        margin-bottom: 20px; }
      .hero_area_3 .hero_content_wrapper .hero_content .service_list ul li {
        font-size: 16px;
        margin-bottom: 10px; }
        .hero_area_3 .hero_content_wrapper .hero_content .service_list ul li i {
          margin-right: 8px; }
      .hero_area_3 .hero_content_wrapper .hero_content .service_list .list_1 {
        margin-right: 30px; }
      .hero_area_3 .hero_content_wrapper .hero_content .boxed_btn_3 {
        font-size: 16px; }

  .promo_content_area_2 .container .promo_item_2 {
    padding: 40px 20px;
    background: transparent; }
    .promo_content_area_2 .container .promo_item_2 h3 {
      font-size: 16px; }
    .promo_content_area_2 .container .promo_item_2 h2 {
      font-size: 36px;
      margin-bottom: 15px; }
    .promo_content_area_2 .container .promo_item_2 p {
      margin-bottom: 35px;
      font-size: 16px; }
    .promo_content_area_2 .container .promo_item_2 .service_list h3 {
      font-size: 16px;
      margin-bottom: 20px; }
    .promo_content_area_2 .container .promo_item_2 .service_list ul li {
      font-size: 12px;
      margin-bottom: 10px; }
    .promo_content_area_2 .container .promo_item_2 .boxed_btn_3 {
      margin-top: 20px;
      padding: 10px 15px;
      font-size: 14px; }
  .promo_content_area_2 .container .pulse_btn_wrapper {
    padding-left: 65px;
    right: 0%;
    bottom: calc(43% - 40px);
    width: 80px; }
    .promo_content_area_2 .container .pulse_btn_wrapper h3 {
      display: none; } }
.hero_area_4 {
  background-image: url("../img/hero_area/hero_bg_4.png");
  background-size: cover;
  background-position: center;
  background-repeat: no-repeat;
  height: 980px; }
  .hero_area_4 .particle_wrapper {
    padding: 220px 0 120px;
    position: absolute;
    width: 100%; }
  .hero_area_4 .hero_content_wrapper {
    height: auto; }
    .hero_area_4 .hero_content_wrapper .hero_content {
      color: #fff; }
      .hero_area_4 .hero_content_wrapper .hero_content h2 {
        font-weight: 700;
        font-family: 'Rubik', sans-serif;
        font-size: 60px;
        line-height: 1.3;
        margin-bottom: 30px; }
      .hero_area_4 .hero_content_wrapper .hero_content h3 {
        font-size: 18px;
        line-height: 2;
        font-weight: 400;
        font-family: 'Fira Sans', sans-serif;
        margin-bottom: 50px; }
      .hero_area_4 .hero_content_wrapper .hero_content .boxed_btn_4 {
        margin: 0 10px;
        padding: 18px 35px;
        font-size: 18px;
        color: #fff;
        border-radius: 30px;
        display: inline-block;
        background: -webkit-linear-gradient(bottom, #5317e6 0%, #07164e 100%);
        background: -o-linear-gradient(top, #5317e6 0%, #07164e 100%);
        background: -moz-linear-gradient(to top, #5317e6 0%, #07164e 100%);
        background: linear-gradient(to top, #5317e6 0%, #07164e 100%); }
        .hero_area_4 .hero_content_wrapper .hero_content .boxed_btn_4:after {
          border-radius: 30px;
          border: none;
          background: #fff; }
        .hero_area_4 .hero_content_wrapper .hero_content .boxed_btn_4:hover {
          color: #304e73; }

.offer_carousel {
  background-image: url("../img/offers/offers_1.png");
  background-size: cover;
  background-position: center;
  background-repeat: no-repeat;
  position: relative;
  z-index: 1; }
  .offer_carousel:after {
    position: absolute;
    content: '';
    left: 0;
    top: 0;
    width: 100%;
    height: 100%;
    background: rgba(0, 0, 0, 0.7);
    z-index: -1; }

.single_offer {
  float: left;
  position: relative;
  background: -webkit-linear-gradient(left, #5317e6 0%, #07164e 100%);
  background: -o-linear-gradient(right, #5317e6 0%, #07164e 100%);
  background: -moz-linear-gradient(to right, #5317e6 0%, #07164e 100%);
  background: linear-gradient(to right, #5317e6 0%, #07164e 100%);
  overflow: hidden;
  padding: 30px;
  margin: 0 15px;
  border-radius: 20px; }
  .single_offer .sticker {
    display: inline-block;
    position: absolute;
    color: #ff2e2e;
    background: #000;
    padding: 50px 60px 10px;
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif;
    text-transform: uppercase;
    font-size: 16px;
    right: -64px;
    transform: rotate(45deg);
    top: -27px; }
  .single_offer .sticker.special {
    background: blue;
    color: #2cd63c; }

.single_offer .left_side {
  float: left;
  width: 50%;
  color: #fff; }
  .single_offer .left_side h3 {
    font-size: 28px; }
  .single_offer .left_side h4 {
    margin-top: 15px;
    font-size: 18px; }
  .single_offer .left_side ul.offer_list {
    margin-top: 20px; }
    .single_offer .left_side ul.offer_list li {
      font-size: 16px;
      line-height: 1.9; }
      .single_offer .left_side ul.offer_list li i {
        color: #fff;
        font-weight: 900;
        margin-right: 5px; }

.single_offer .right_side {
  text-align: center;
  float: left;
  width: 50%;
  color: #fff;
  font-weight: 500;
  font-family: 'Fira Sans', sans-serif; }
  .single_offer .right_side .price {
    font-size: 18px;
    margin-top: 20px; }
    .single_offer .right_side .price span {
      display: block;
      font-size: 24px;
      font-weight: 700; }
  .single_offer .right_side .boxed_btn {
    margin-top: 20px;
    padding: 10px 20px;
    border-radius: 50px;
    border: 2px solid #fff;
    background: #fff;
    color: #304e73;
    font-size: 16px;
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif;
    cursor: pointer; }
    .single_offer .right_side .boxed_btn:after {
      background: -webkit-linear-gradient(bottom, #5317e6 0%, #07164e 100%);
      background: -o-linear-gradient(top, #5317e6 0%, #07164e 100%);
      background: -moz-linear-gradient(to top, #5317e6 0%, #07164e 100%);
      background: linear-gradient(to top, #5317e6 0%, #07164e 100%);
      border-radius: 50px; }

.counter_1 {
  padding-top: 100px; }

.counter_box {
  height: 100px; }
  .counter_box p {
    font-weight: 500;
    font-family: 'Rubik', sans-serif;
    position: absolute;
    font-size: 48px;
    text-align: center;
    color: #fff; }
    .counter_box p span {
      font-size: 48px; }
    .counter_box p .header {
      font-size: 20px;
      font-weight: 500;
      font-family: 'Rubik', sans-serif;
      color: #fff;
      display: block; }

@media only screen and (min-width: 768px) and (max-width: 991px) {
  .hero_area_4 {
    height: 690px; }
    .hero_area_4 .particle_wrapper {
      padding: 150px 0 0px; }
    .hero_area_4 .hero_content_wrapper .hero_content h2 {
      font-size: 48px;
      margin-bottom: 20px; }
    .hero_area_4 .hero_content_wrapper .hero_content h3 {
      font-size: 16px;
      margin-bottom: 25px; }
    .hero_area_4 .hero_content_wrapper .hero_content .boxed_btn_4 {
      padding: 12px 24px;
      font-size: 16px; }

  .counter_1 {
    padding-top: 70px; }

  .counter_box {
    height: 80px; }
    .counter_box p {
      font-size: 36px; }
      .counter_box p span {
        font-size: 36px; }
      .counter_box p .header {
        font-size: 18px; } }
@media (max-width: 767px) {
  .hero_area_4 {
    height: 650px; }
    .hero_area_4 .particle_wrapper {
      padding: 110px 0 0px; }
    .hero_area_4 .hero_content_wrapper .hero_content h2 {
      font-size: 36px;
      margin-bottom: 20px; }
    .hero_area_4 .hero_content_wrapper .hero_content h3 {
      font-size: 16px;
      margin-bottom: 25px;
      line-height: 1.7; }
    .hero_area_4 .hero_content_wrapper .hero_content .boxed_btn_4 {
      padding: 12px 24px;
      font-size: 16px; }

  .single_offer .left_side h3 {
    font-size: 24px; }
  .single_offer .left_side h4 {
    margin-top: 10px;
    font-size: 16px; }
  .single_offer .left_side ul.offer_list {
    margin-top: 15px; }
    .single_offer .left_side ul.offer_list li {
      font-size: 12px;
      line-height: 1.9; }

  .counter_1 {
    padding-top: 50px; }

  .counter_box {
    margin-top: 20px;
    height: 80px; }
    .counter_box p {
      font-size: 36px; }
      .counter_box p span {
        font-size: 36px; }
      .counter_box p .header {
        font-size: 18px; } }
@media only screen and (min-width: 480px) and (max-width: 767px) {
  .single_offer .left_side h3 {
    font-size: 28px; }
  .single_offer .left_side h4 {
    margin-top: 15px;
    font-size: 18px; }
  .single_offer .left_side ul.offer_list {
    margin-top: 20px; }
    .single_offer .left_side ul.offer_list li {
      font-size: 14px;
      line-height: 1.9; } }
.hero_area_5 {
  max-height: 920px;
  position: relative; }
  .hero_area_5:after {
    position: absolute;
    z-index: -5;
    content: '';
    bottom: 0;
    left: 0;
    width: 100%;
    height: 100%;
    background-size: cover;
    background-position: center;
    background-repeat: no-repeat;
    background-image: url("../img/hero_area/hero_area_5.png"); }
  .hero_area_5 .hero_content_wrapper .hero_content {
    padding: 200px 0 375px;
    color: #fff; }
    .hero_area_5 .hero_content_wrapper .hero_content h2 {
      font-weight: 500;
      font-family: 'Rubik', sans-serif;
      font-size: 48px;
      margin-bottom: 35px; }
    .hero_area_5 .hero_content_wrapper .hero_content h3 {
      font-size: 18px;
      line-height: 2;
      font-weight: 400;
      font-family: 'Fira Sans', sans-serif;
      margin-bottom: 120px; }

.single_counter_2 {
  text-align: center; }
  .single_counter_2 .counter_img {
    height: 105px; }
  .single_counter_2 p {
    font-size: 18px;
    margin-top: 10px;
    color: #fff;
    font-weight: 400;
    font-family: 'Fira Sans', sans-serif; }
  .single_counter_2 h4 {
    font-size: 30px;
    font-weight: 500;
    font-family: 'Fira Sans', sans-serif;
    margin-top: 15px;
    background: -webkit-linear-gradient(left, #6a11cb 0%, #2575fc 100%);
    background: -o-linear-gradient(right, #6a11cb 0%, #2575fc 100%);
    background: -moz-linear-gradient(to right, #6a11cb 0%, #2575fc 100%);
    background: linear-gradient(to right, #6a11cb 0%, #2575fc 100%);
    -webkit-background-clip: text;
    -webkit-text-fill-color: transparent; }

.promo_content_area_5 {
  position: relative;
  z-index: 3; }
  .promo_content_area_5:after {
    position: absolute;
    z-index: -2;
    left: auto;
    top: 0px;
    right: -155px;
    width: 34%;
    height: 100%;
    opacity: .2;
    background-size: cover;
    background-position: center;
    background-repeat: no-repeat;
    content: '';
    background-image: url("../img/paint_draw.png"); }
  .promo_content_area_5 .left_side .box_wrapper {
    width: 400px;
    height: 300px;
    margin: auto;
    position: relative; }
    .promo_content_area_5 .left_side .box_wrapper .button-container {
      width: 100%;
      height: 100%;
      background-color: transparent; }
    .promo_content_area_5 .left_side .box_wrapper .box {
      width: 85%;
      height: 65%;
      overflow: hidden;
      background-size: cover;
      background-position: center;
      background-repeat: no-repeat;
      border-radius: 20px;
      position: absolute;
      transition: all 0.5s cubic-bezier(0.68, -0.55, 0.265, 1.55); }
      .promo_content_area_5 .left_side .box_wrapper .box:first-of-type {
        background-image: url("../img/promo/video_2.png");
        top: 35%;
        left: -5%;
        z-index: 2; }
        .promo_content_area_5 .left_side .box_wrapper .box:first-of-type.scale {
          background: -webkit-linear-gradient(top, #6a11cb 0%, #2575fc 100%);
          background: -o-linear-gradient(bottom, #6a11cb 0%, #2575fc 100%);
          background: -moz-linear-gradient(to bottom, #6a11cb 0%, #2575fc 100%);
          background: linear-gradient(to bottom, #6a11cb 0%, #2575fc 100%);
          transform: scale(10);
          z-index: 8; }
      .promo_content_area_5 .left_side .box_wrapper .box:nth-of-type(2) {
        background-image: url("../img/promo/video.png");
        top: 0%;
        left: 15%;
        z-index: 1; }
      .promo_content_area_5 .left_side .box_wrapper .box:nth-of-type(3) {
        background-image: url("../img/promo/video_3.png");
        top: 15%;
        left: 35%;
        z-index: 3; }
  .promo_content_area_5 .left_side .centered {
    top: 60px !important;
    left: 15px !important; }
  .promo_content_area_5 .left_side .video_button.hide {
    opacity: 0;
    visibility: hidden; }
  .promo_content_area_5 .right_side h2 {
    font-size: 36px;
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif;
    margin-bottom: 25px;
    background: -webkit-linear-gradient(right, #6a11cb 0%, #2575fc 100%);
    background: -o-linear-gradient(left, #6a11cb 0%, #2575fc 100%);
    background: -moz-linear-gradient(to left, #6a11cb 0%, #2575fc 100%);
    background: linear-gradient(to left, #6a11cb 0%, #2575fc 100%);
    -webkit-background-clip: text;
    -webkit-text-fill-color: transparent; }
  .promo_content_area_5 .right_side p {
    font-size: 16px;
    color: #fff;
    line-height: 1.5;
    margin-bottom: 20px; }
  .promo_content_area_5 .right_side .boxed_btn {
    font-size: 16px;
    padding: 15px 20px;
    border-radius: 5px;
    display: inline-block;
    color: #fff;
    font-weight: 500;
    font-family: 'Fira Sans', sans-serif;
    background: -webkit-linear-gradient(left, #6a11cb 0%, #2575fc 100%);
    background: -o-linear-gradient(right, #6a11cb 0%, #2575fc 100%);
    background: -moz-linear-gradient(to right, #6a11cb 0%, #2575fc 100%);
    background: linear-gradient(to right, #6a11cb 0%, #2575fc 100%);
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
    .promo_content_area_5 .right_side .boxed_btn:hover {
      color: #fff; }
    .promo_content_area_5 .right_side .boxed_btn:after {
      background: #3a2085;
      border-radius: 5px; }

.overlay1 {
  position: fixed;
  z-index: 1;
  left: 50%;
  top: 50%;
  transform: translate(-50%, -50%);
  display: none;
  opacity: 0;
  transition: all 0.3s cubic-bezier(0.68, -0.55, 0.265, 1.55); }
  .overlay1.active {
    opacity: 1;
    pointer-events: auto;
    display: block;
    z-index: 99999; }

.no-scroll {
  overflow: hidden !important; }

.client_and_testimonial {
  position: relative;
  z-index: 1;
  background: -webkit-linear-gradient(left, #5317e6 0%, #07164e 100%);
  background: -o-linear-gradient(right, #5317e6 0%, #07164e 100%);
  background: -moz-linear-gradient(to right, #5317e6 0%, #07164e 100%);
  background: linear-gradient(to right, #5317e6 0%, #07164e 100%); }

.about_section {
  background: -webkit-linear-gradient(left, #5317e6 0%, #07164e 100%);
  background: -o-linear-gradient(right, #5317e6 0%, #07164e 100%);
  background: -moz-linear-gradient(to right, #5317e6 0%, #07164e 100%);
  background: linear-gradient(to right, #5317e6 0%, #07164e 100%); }
  .about_section .single_about {
    margin-top: 100px; }
    .about_section .single_about .about_info h3 {
      display: inline-block;
      font-size: 36px;
      margin-bottom: 25px;
      font-weight: 700;
      font-family: 'Fira Sans', sans-serif;
      background: -webkit-linear-gradient(right, #6a11cb 0%, #2575fc 100%);
      background: -o-linear-gradient(left, #6a11cb 0%, #2575fc 100%);
      background: -moz-linear-gradient(to left, #6a11cb 0%, #2575fc 100%);
      background: linear-gradient(to left, #6a11cb 0%, #2575fc 100%);
      -webkit-background-clip: text;
      -webkit-text-fill-color: transparent; }
    .about_section .single_about .about_info p {
      font-size: 16px;
      line-height: 1.5;
      color: #fff;
      margin-bottom: 25px; }
    .about_section .single_about .about_info li {
      color: #fff;
      font-size: 14px;
      margin-bottom: 15px; }
      .about_section .single_about .about_info li i {
        margin-right: 5px;
        color: #2cd63c;
        font-weight: 900; }
      .about_section .single_about .about_info li:last-child {
        margin: 0; }
    .about_section .single_about .about_info a.boxed_btn {
      color: #fff;
      padding: 15px 20px;
      margin-top: 30px;
      background: -webkit-linear-gradient(left, #6a11cb 0%, #2575fc 100%);
      background: -o-linear-gradient(right, #6a11cb 0%, #2575fc 100%);
      background: -moz-linear-gradient(to right, #6a11cb 0%, #2575fc 100%);
      background: linear-gradient(to right, #6a11cb 0%, #2575fc 100%);
      display: inline-block;
      border-radius: 5px;
      cursor: pointer;
      -webkit-transition: all 0.3s ease-in-out;
      -moz-transition: all 0.3s ease-in-out;
      -ms-transition: all 0.3s ease-in-out;
      -o-transition: all 0.3s ease-in-out;
      transition: all 0.3s ease-in-out; }
      .about_section .single_about .about_info a.boxed_btn:hover {
        color: #fff;
        background: #3a2085; }
    .about_section .single_about .about_img {
      position: relative;
      z-index: 1; }
      .about_section .single_about .about_img:after {
        position: absolute;
        z-index: -1;
        content: '';
        margin: 0 auto;
        bottom: -12%;
        width: 100%;
        height: 100%;
        background-position: center;
        background-size: contain;
        background-repeat: no-repeat;
        background-image: url("../img/about/about_bg_1.png"); }

@media only screen and (min-width: 992px) and (max-width: 1200px) {
  .promo_content_area_5:after {
    top: 70px;
    right: -100px; }
  .promo_content_area_5 .left_side .box_wrapper {
    width: 340px;
    height: 265px; }
  .promo_content_area_5 .right_side h2 {
    font-size: 36px;
    font-weight: 700;
    font-family: 'Fira Sans', sans-serif;
    margin-bottom: 25px;
    background: -webkit-linear-gradient(right, #6a11cb 0%, #2575fc 100%);
    background: -o-linear-gradient(left, #6a11cb 0%, #2575fc 100%);
    background: -moz-linear-gradient(to left, #6a11cb 0%, #2575fc 100%);
    background: linear-gradient(to left, #6a11cb 0%, #2575fc 100%);
    -webkit-background-clip: text;
    -webkit-text-fill-color: transparent; }
  .promo_content_area_5 .right_side p {
    font-size: 16px;
    color: #838bab;
    line-height: 1.5;
    margin-bottom: 20px; }
  .promo_content_area_5 .right_side .boxed_btn {
    font-size: 16px;
    padding: 15px 20px;
    border-radius: 5px;
    display: inline-block;
    color: #fff;
    font-weight: 500;
    font-family: 'Fira Sans', sans-serif;
    background: -webkit-linear-gradient(left, #6a11cb 0%, #2575fc 100%);
    background: -o-linear-gradient(right, #6a11cb 0%, #2575fc 100%);
    background: -moz-linear-gradient(to right, #6a11cb 0%, #2575fc 100%);
    background: linear-gradient(to right, #6a11cb 0%, #2575fc 100%);
    -webkit-transition: all 0.3s ease-in-out;
    -moz-transition: all 0.3s ease-in-out;
    -ms-transition: all 0.3s ease-in-out;
    -o-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out; }
    .promo_content_area_5 .right_side .boxed_btn:hover {
      background: -webkit-linear-gradient(right, #6a11cb 0%, #2575fc 100%);
      background: -o-linear-gradient(left, #6a11cb 0%, #2575fc 100%);
      background: -moz-linear-gradient(to left, #6a11cb 0%, #2575fc 100%);
      background: linear-gradient(to left, #6a11cb 0%, #2575fc 100%); }

  .about_section {
    margin-top: 50px; }
    .about_section .single_about {
      margin-top: 50px; }
      .about_section .single_about .about_img img {
        height: 430px; }
      .about_section .single_about .about_img:after {
        width: 85%; } }
@media only screen and (min-width: 768px) and (max-width: 991px) {
  .hero_area_5 .hero_content_wrapper .hero_content {
    padding: 170px 0 270px; }
    .hero_area_5 .hero_content_wrapper .hero_content h2 {
      font-size: 36px;
      margin-bottom: 15px; }
    .hero_area_5 .hero_content_wrapper .hero_content h3 {
      line-height: 1.5;
      margin-bottom: 80px; }

  .single_counter_2 .counter_img {
    height: 75px; }
    .single_counter_2 .counter_img img {
      width: 60px; }
  .single_counter_2 p {
    font-size: 16px;
    margin-top: 15px; }
  .single_counter_2 h4 {
    font-size: 22px;
    font-weight: 500;
    font-family: 'Fira Sans', sans-serif;
    margin-top: 5px; }

  .promo_content_area_5:after {
    top: 0px;
    right: -100px;
    width: 45%;
    height: 75%; }
  .promo_content_area_5 .left_side .box_wrapper {
    width: 340px;
    height: 265px;
    margin-bottom: 35px; }
  .promo_content_area_5 .right_side {
    text-align: center; }
    .promo_content_area_5 .right_side h2 {
      font-size: 28px;
      margin-bottom: 15px; }
    .promo_content_area_5 .right_side p {
      font-size: 14px;
      margin-bottom: 20px; }
    .promo_content_area_5 .right_side .boxed_btn {
      font-size: 14px;
      padding: 10px 15px; }

  .client_and_testimonial:after {
    top: -200px; }

  .about_section {
    margin-top: 50px; }
    .about_section .single_about {
      margin-top: 30px; }
      .about_section .single_about .about_info h3 {
        font-size: 28px;
        margin-bottom: 15px; }
      .about_section .single_about .about_info p {
        margin-bottom: 15px; }
      .about_section .single_about .about_info li {
        margin-bottom: 10px; }
      .about_section .single_about .about_info a.boxed_btn {
        margin-top: 20px;
        padding: 10px 15px;
        font-size: 14px; }
      .about_section .single_about .about_img img {
        height: 350px; }
      .about_section .single_about .about_img:after {
        width: 90%; } }
@media (max-width: 767px) {
  .hero_area_5 .hero_content_wrapper .hero_content {
    padding: 160px 0 210px; }
    .hero_area_5 .hero_content_wrapper .hero_content h2 {
      font-size: 28px;
      margin-bottom: 15px; }
    .hero_area_5 .hero_content_wrapper .hero_content h3 {
      line-height: 1.5;
      font-size: 16px;
      margin-bottom: 0px; }

  .single_counter_2 {
    margin-bottom: 40px; }
    .single_counter_2 .counter_img {
      height: 75px; }
      .single_counter_2 .counter_img img {
        width: 60px; }
    .single_counter_2 p {
      font-size: 16px;
      margin-top: 15px; }
    .single_counter_2 h4 {
      font-size: 22px;
      font-weight: 500;
      font-family: 'Fira Sans', sans-serif;
      margin-top: 5px; }

  .promo_content_area_5:after {
    height: 0; }
  .promo_content_area_5 .left_side .box_wrapper {
    width: 55%;
    height: 205px;
    margin-bottom: 35px; }
    .promo_content_area_5 .left_side .box_wrapper .box:first-of-type {
      left: -15%; }
    .promo_content_area_5 .left_side .box_wrapper .box:nth-of-type(2) {
      left: 10%; }
    .promo_content_area_5 .left_side .box_wrapper .box:nth-of-type(3) {
      left: 30%; }
  .promo_content_area_5 .right_side {
    text-align: center; }
    .promo_content_area_5 .right_side h2 {
      font-size: 24px;
      margin-bottom: 10px; }
    .promo_content_area_5 .right_side p {
      font-size: 14px;
      margin-bottom: 15px; }
    .promo_content_area_5 .right_side .boxed_btn {
      font-size: 14px;
      padding: 10px 15px; }

  .about_section {
    margin-top: 50px; }
    .about_section .single_about {
      margin-top: 30px; }
      .about_section .single_about .about_info {
        text-align: center;
        margin-top: 20px; }
        .about_section .single_about .about_info h3 {
          font-size: 24px;
          margin-bottom: 10px; }
        .about_section .single_about .about_info p {
          line-height: 1.2;
          margin-bottom: 10px; }
        .about_section .single_about .about_info li {
          margin-bottom: 5px; }
        .about_section .single_about .about_info a.boxed_btn {
          margin-top: 20px;
          padding: 10px 15px;
          font-size: 14px; }
      .about_section .single_about .about_img img {
        height: 300px; }
      .about_section .single_about .about_img:after {
        width: 60%; } }
.hero_area_6 {
  position: relative; }
  .hero_area_6:after {
    position: absolute;
    z-index: -5;
    content: '';
    top: -200px;
    transform: skewY(-3deg);
    left: 0;
    width: 100%;
    height: calc(100% + 200px);
    background: -webkit-linear-gradient(left, #000b42 0%, #004161 100%);
    background: -o-linear-gradient(right, #000b42 0%, #004161 100%);
    background: -moz-linear-gradient(to right, #000b42 0%, #004161 100%);
    background: linear-gradient(to right, #000b42 0%, #004161 100%); }
  .hero_area_6 .hero_content_wrapper .hero_content {
    padding: 200px 0;
    color: #fff; }
    .hero_area_6 .hero_content_wrapper .hero_content h2 {
      font-weight: 500;
      font-family: 'Rubik', sans-serif;
      font-size: 48px;
      margin-bottom: 35px; }
    .hero_area_6 .hero_content_wrapper .hero_content h3 {
      font-size: 18px;
      line-height: 2;
      font-weight: 400;
      font-family: 'Fira Sans', sans-serif;
      margin-bottom: 80px; }

.spacial_feature h2 {
  background: -webkit-linear-gradient(right, #6a11cb 0%, #2575fc 100%);
  background: -o-linear-gradient(left, #6a11cb 0%, #2575fc 100%);
  background: -moz-linear-gradient(to left, #6a11cb 0%, #2575fc 100%);
  background: linear-gradient(to left, #6a11cb 0%, #2575fc 100%);
  -webkit-background-clip: text;
  -webkit-text-fill-color: transparent;
  font-size: 36px;
  margin-bottom: 45px;
  font-weight: 700;
  font-family: 'Rubik', sans-serif;
  text-transform: uppercase;
  position: relative;
  z-index: 1; }
  .spacial_feature h2:after {
    position: absolute;
    z-index: -1;
    left: 0;
    width: 220px;
    height: 30px;
    top: 65%;
    content: '';
    background-size: cover;
    background-position: center;
    background-repeat: no-repeat;
    background-image: url("../img/heading_after.png");
    opacity: .3; }
.spacial_feature h3 {
  font-size: 16px;
  line-height: 1.5;
  color: #fff;
  margin-bottom: 25px; }
.spacial_feature li {
  color: #fff;
  font-size: 18px;
  font-weight: 500;
  font-family: 'Fira Sans', sans-serif;
  margin-bottom: 15px; }
  .spacial_feature li i {
    margin-right: 5px;
    color: #2cd63c;
    font-weight: 900; }
  .spacial_feature li:last-child {
    margin: 0; }
.spacial_feature a.boxed_btn {
  color: #fff;
  padding: 15px 20px;
  margin-top: 30px;
  background: -webkit-linear-gradient(right, #6a11cb 0%, #2575fc 100%);
  background: -o-linear-gradient(left, #6a11cb 0%, #2575fc 100%);
  background: -moz-linear-gradient(to left, #6a11cb 0%, #2575fc 100%);
  background: linear-gradient(to left, #6a11cb 0%, #2575fc 100%);
  border-radius: 5px; }
  .spacial_feature a.boxed_btn:hover {
    color: #fff; }
  .spacial_feature a.boxed_btn:after {
    border-radius: 5px;
    background: #3a2085; }

.client_and_testimonial_2 {
  padding: 100px 0 150px;
  position: relative;
  z-index: 1; }
  .client_and_testimonial_2:after {
    position: absolute;
    z-index: -1;
    background: -webkit-linear-gradient(left, #000b42 0%, #004161 100%);
    background: -o-linear-gradient(right, #000b42 0%, #004161 100%);
    background: -moz-linear-gradient(to right, #000b42 0%, #004161 100%);
    background: linear-gradient(to right, #000b42 0%, #004161 100%);
    content: '';
    left: 0;
    width: 100%;
    height: 100%;
    top: 0px; }

@media only screen and (min-width: 768px) and (max-width: 991px) {
  .hero_area_6 .hero_content_wrapper .hero_content {
    padding: 170px 0 150px; }
    .hero_area_6 .hero_content_wrapper .hero_content h2 {
      font-size: 36px;
      margin-bottom: 15px; }
    .hero_area_6 .hero_content_wrapper .hero_content h3 {
      line-height: 1.5;
      margin-bottom: 80px; }

  .spacial_feature {
    margin-bottom: 60px; }
    .spacial_feature h2 {
      margin-bottom: 30px; }
      .spacial_feature h2:after {
        left: calc(50% - 110px); }
    .spacial_feature h3 {
      margin-bottom: 20px; }
    .spacial_feature li {
      margin-bottom: 10px; }
    .spacial_feature a.boxed_btn {
      padding: 10px 15px;
      margin-top: 25px; } }
@media (max-width: 767px) {
  .hero_area_6 .hero_content_wrapper .hero_content {
    padding: 160px 0 70px; }
    .hero_area_6 .hero_content_wrapper .hero_content h2 {
      font-size: 28px;
      margin-bottom: 15px; }
    .hero_area_6 .hero_content_wrapper .hero_content h3 {
      line-height: 1.5;
      font-size: 16px;
      margin-bottom: 0px; }

  .spacial_feature {
    margin-bottom: 60px; }
    .spacial_feature h2 {
      font-size: 28px;
      margin-bottom: 20px; }
      .spacial_feature h2:after {
        left: calc(50% - 90px);
        width: 180px;
        height: 24px;
        top: 65%; }
    .spacial_feature h3 {
      font-size: 14px;
      margin-bottom: 15px; }
    .spacial_feature li {
      font-size: 16px;
      margin-bottom: 10px; }
    .spacial_feature a.boxed_btn {
      padding: 10px 15px;
      margin-top: 20px;
      font-size: 14px; } }
.hero_area_7 {
  position: relative;
  background-size: cover;
  background-position: center;
  background-repeat: no-repeat;
  min-height: 900px;
  background-image: url("../img/hero_area/hero_area_7.png");
  z-index: 1; }
  .hero_area_7:after {
    position: absolute;
    z-index: -5;
    content: '';
    top: 0px;
    left: 0;
    width: 100%;
    height: 100%;
    background: rgba(11, 26, 184, 0.85);
    opacity: 0.9; }
  .hero_area_7 .hero_content_wrapper .hero_content {
    padding: 200px 0;
    color: #fff; }
    .hero_area_7 .hero_content_wrapper .hero_content h2 {
      font-weight: 500;
      font-family: 'Rubik', sans-serif;
      font-size: 48px;
      margin-bottom: 35px; }
    .hero_area_7 .hero_content_wrapper .hero_content h3 {
      font-size: 18px;
      line-height: 2;
      font-weight: 400;
      font-family: 'Fira Sans', sans-serif;
      margin-bottom: 80px; }

@media only screen and (min-width: 768px) and (max-width: 991px) {
  .hero_area_7 {
    min-height: 770px; }
    .hero_area_7 .hero_content_wrapper .hero_content {
      padding: 170px 0 150px; }
      .hero_area_7 .hero_content_wrapper .hero_content h2 {
        font-size: 36px;
        margin-bottom: 15px; }
      .hero_area_7 .hero_content_wrapper .hero_content h3 {
        line-height: 1.5;
        margin-bottom: 80px; } }
@media (max-width: 767px) {
  .hero_area_7 {
    min-height: 770px; }
    .hero_area_7 .hero_content_wrapper .hero_content {
      padding: 160px 0 70px; }
      .hero_area_7 .hero_content_wrapper .hero_content h2 {
        font-size: 28px;
        margin-bottom: 15px; }
      .hero_area_7 .hero_content_wrapper .hero_content h3 {
        line-height: 1.5;
        font-size: 16px;
        margin-bottom: 0px; } }
.hero_area_8 {
  min-height: 900px;
  background: -webkit-linear-gradient(left, #13128c 0%, #370863 100%);
  background: -o-linear-gradient(right, #13128c 0%, #370863 100%);
  background: -moz-linear-gradient(to right, #13128c 0%, #370863 100%);
  background: linear-gradient(to right, #13128c 0%, #370863 100%); }
  .hero_area_8 .hero_content_wrapper .hero_content {
    padding: 200px 0;
    color: #fff; }
    .hero_area_8 .hero_content_wrapper .hero_content h2 {
      font-weight: 500;
      font-family: 'Rubik', sans-serif;
      font-size: 48px;
      margin-bottom: 35px; }
    .hero_area_8 .hero_content_wrapper .hero_content h3 {
      font-size: 18px;
      line-height: 2;
      font-weight: 400;
      font-family: 'Fira Sans', sans-serif;
      margin-bottom: 80px; }

.about_section_2 .single_about .about_info .service_list {
  margin-top: 45px; }
  .about_section_2 .single_about .about_info .service_list li {
    color: #fff;
    font-weight: 600;
    font-size: 14px;
    margin-bottom: 15px; }
    .about_section_2 .single_about .about_info .service_list li i {
      margin-right: 5px;
      color: #15efa4;
      font-weight: 900; }
    .about_section_2 .single_about .about_info .service_list li:last-child {
      margin: 0; }
.about_section_2 .single_about .about_info a.boxed_btn {
  color: #fff;
  padding: 15px 20px;
  margin-top: 30px;
  background: -webkit-linear-gradient(top, #15efa4 0%, #0bbdff 100%);
  background: -o-linear-gradient(bottom, #15efa4 0%, #0bbdff 100%);
  background: -moz-linear-gradient(to bottom, #15efa4 0%, #0bbdff 100%);
  background: linear-gradient(to bottom, #15efa4 0%, #0bbdff 100%);
  display: inline-table;
  border-radius: 5px;
  cursor: pointer;
  -webkit-transition: all 0.3s ease-in-out;
  -moz-transition: all 0.3s ease-in-out;
  -ms-transition: all 0.3s ease-in-out;
  -o-transition: all 0.3s ease-in-out;
  transition: all 0.3s ease-in-out; }
  .about_section_2 .single_about .about_info a.boxed_btn:hover {
    color: #fff; }
  .about_section_2 .single_about .about_info a.boxed_btn:after {
    background: #15efa4;
    border-radius: 5px; }
.about_section_2 .single_about .about_img {
  position: relative;
  z-index: 1;
  width: 100%; }

@media only screen and (min-width: 992px) and (max-width: 1200px) {
  .about_section_2 .about_img img {
    height: 430px; } }
@media only screen and (min-width: 768px) and (max-width: 991px) {
  .hero_area_8 {
    min-height: 770px; }
    .hero_area_8 .hero_content_wrapper .hero_content {
      padding: 170px 0 150px; }
      .hero_area_8 .hero_content_wrapper .hero_content h2 {
        font-size: 36px;
        margin-bottom: 15px; }
      .hero_area_8 .hero_content_wrapper .hero_content h3 {
        line-height: 1.5;
        margin-bottom: 80px; }

  .about_section_2 .single_about .about_info li {
    margin-bottom: 10px; }
  .about_section_2 .single_about .about_info a.boxed_btn {
    margin-top: 20px;
    padding: 10px 15px;
    font-size: 14px; }
  .about_section_2 .single_about .about_img img {
    height: 350px; } }
@media (max-width: 767px) {
  .hero_area_8 {
    min-height: 670px; }
    .hero_area_8 .hero_content_wrapper .hero_content {
      padding: 160px 0 70px; }
      .hero_area_8 .hero_content_wrapper .hero_content h2 {
        font-size: 28px;
        margin-bottom: 15px; }
      .hero_area_8 .hero_content_wrapper .hero_content h3 {
        line-height: 1.5;
        font-size: 16px;
        margin-bottom: 60px; }

  .about_section_2 .single_about .about_info {
    text-align: center;
    margin-top: 20px; }
    .about_section_2 .single_about .about_info li {
      margin-bottom: 5px; }
    .about_section_2 .single_about .about_info a.boxed_btn {
      margin-top: 20px;
      padding: 10px 15px;
      font-size: 14px; }
  .about_section_2 .single_about .about_img img {
    height: 300px; } }

/*# sourceMappingURL=style.cc.map */
