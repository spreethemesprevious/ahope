(function ($) {
 "use strict";


  $(window).on('load', function(){

    /* \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
                  Pre loader
    \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ */

    $('.loader').addClass('completein', 700);
    setTimeout(function(){ 
      $('.preloader').addClass('complete');
    }, 10);

  });

  /* \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
                YT Player for hero area
  \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ */

  jQuery(function(){
      jQuery("#bgndVideo").YTPlayer({
        showControls: false,
        autoPlay: true,
        loop: true,
      });
  });



  jQuery(document).ready(function($){

      /* \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
                  hero area animation Light
      \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ */
      $('.demo_hero').mousemove(function(e){
        var moveX = (e.pageX * -1/15)
        var moveY = (e.pageY * -1/15)
        var move2X = (e.pageX * -1/45)
        var move2Y = (e.pageY * -1/45)
        $('.layer_two, .layer_five, .layer_seven, .layer_four').css({'transform': 'translate3d('+moveX+'px,' +moveY+'px,0) rotate(-20deg)'});
        $('.layer_three, .layer_one, .layer_eight, .layer_six').css({'transform': 'translate3d('+move2X+'px,' +move2Y+'px,0) rotate(-20deg)'});
      }) 

      /* \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
                  hero area animation Dark
      \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ */
      $('.demo_hero_2').mousemove(function(e){
        var moveX = (e.pageX * -1/15)
        var moveY = (e.pageY * -1/15)
        var move2X = (e.pageX * -1/45)
        var move2Y = (e.pageY * -1/45)
        $('.layer_two, .layer_five, .layer_seven, .layer_four').css({'transform': 'translate3d('+moveX+'px,' +moveY+'px,0) rotate(-20deg) skew(20deg, 0deg)'});
        $('.layer_three, .layer_one, .layer_eight, .layer_six').css({'transform': 'translate3d('+move2X+'px,' +move2Y+'px,0) rotate(-20deg) skew(20deg, 0deg)'});
      })

      /* \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
                video popup
      \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ */
     $(".youtube").colorbox({
          iframe:true,
          transition: "elastic",
          innerWidth:640,
          innerHeight:409,
          closeButton:false,
          maxWidth: '90%'
      });

      /* \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
                search_bar
      \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ */
      $('.search_icon').on('click', function(){
        $('.offcanvas_overlay, .search_bar, .search_bar_2').css({'opacity' : '1', 'display': 'inline-flex'});
      });
      $('.offcanvas_overlay').on('click', function(){
        $('.offcanvas_overlay, .search_bar, .search_bar_2').css({'opacity' : '0', 'display': 'none'});
      });

      /* \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
                offcanvas menu
      \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ */
      $('.offcanvas').on('click', function(){
        $('.offcanvas_overlay').css({'opacity' : '1', 'display': 'inline-flex'});
        $('.offcanvas_menu').css({'right' : '0'});
      });
      $('.offcanvas_overlay').on('click', function(){
        $('.offcanvas_menu').css({'right' : '-100%'});
      });

      /* \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
                Tooltip 
      \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ */
      $('[data-toggle="tooltip"]').tooltip();

      /* \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
            mega menu
      \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ */
      function checkWidth() {
        var windowsize = $(window).width();
          if( windowsize < 992){
        $(".hid").removeClass("collapse");
        $(".hid").addClass("collapse");
          }
          if(windowsize > 991){
            $(".hid").addClass("collapse");
            $(".hid").removeClass("collapse");
          } 
      }
      checkWidth();
      $(window).resize(checkWidth);

      /* \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
                burger icon
      \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ */
      $(".burger_icon").click(function() {
        $(".mobile_menu").toggleClass(function () {
          return $(".mobile_menu").is('.open_menu, .close_menu') ? 'open_menu close_menu' : 'open_menu';
        });

        $(".stick").toggleClass(function () {
          return $(this).is('.open_menu, .close_menu') ? 'open_menu close_menu' : 'open_menu';
        });
      });

     /* \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
              awesome_section Carousel
    \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ */
    var swiper = new Swiper('.awesome_section .swiper-container, .d_awesome_section .swiper-container', {
      effect: 'coverflow',
      grabCursor: true,
      centeredSlides: true,
      slidesPerView: 'auto',
      coverflowEffect: {
        rotate: 50,
        stretch: 0,
        depth: 100,
        modifier: 1,
        slideShadows : true,
      },
      autoplay: {
        delay: 1000,
        disableOnInteraction: false,
      },
      navigation: {
        nextEl: '.swiper-button-next',
        prevEl: '.swiper-button-prev',
      },
    });

    /* \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
              init Isotope
    \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ */   
    var $grid = $('.grid').isotope({});

    /* \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
            Scroll to top
    \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ */
    function topFunction(){
      $('.scrolltop').on('click', function() {
        $('html, body').animate({scrollTop: 0}, 800);
        return false;
      });
    }
    topFunction();

  });


  jQuery(window).on('load', function(){
    

  });


}(jQuery));	
 
