<?php include_once"header.php" ?>
<?php include"config.php" ?>

<body>

<div id="scroll-progress"><div class="scroll-progress"><span class="scroll-percent"></span></div></div>

<!-- Document Full Container
============================================= -->
<div id="full-container">

    <!-- Header
    ============================================= -->
    <header id="header">

        <div id="header-bar-1" class="header-bar">

            <div class="header-bar-wrap">

                <div class="container">
                    <div class="row">
                        <div class="col-md-12">

                            <div class="hb-content">
                                <a class="logo logo-header" href="#">
                                    <img src="images/files/logo-header-alt.png" alt="">
                                    <h3><span class="colored">Pixeliy</span></h3>
                                    <span>HTML Template</span>
                                </a><!-- .logo end -->
                                <div class="hb-meta">
                                </div><!-- .hb-meta end -->
                            </div><!-- .hb-content end -->

                        </div><!-- .col-md-12 end -->
                    </div><!-- .row end -->
                </div><!-- .container end -->

            </div><!-- .header-bar-wrap -->

        </div><!-- #header-bar-1 end -->

    </header><!-- #header end -->

    <!-- Banner
    ============================================= -->
    <section id="banner">

        <div class="banner-parallax" data-banner-height="800">
            <img src="http://via.placeholder.com/1920x1100?text=Image" alt="">
            <div class="overlay-colored color-bg-gradient opacity-90"></div><!-- .overlay-colored end -->
            <div class="slide-content">

                <div class="container">
                    <div class="row">
                        <div class="col-md-7">

                            <div class="banner-center-box text-white md-text-center">
                                <h1>
                                    <?php echo $firsth1 ?>
                                </h1>
                                <div class="description">
                                    <?php echo $des ?>
                                </div>
                                <a class="btn-video lightbox-iframe mt-40" href="https://vimeo.com/45830194">
                                    <i class="fa fa-play"></i>
                                    <span class="title"><?php echo $video ?></span>
                                </a><!-- .video-btn end -->
                            </div><!-- .banner-center-box end -->

                        </div><!-- .col-md-7 end -->
                        <div class="col-md-5">

                            <div class="banner-center-box text-center text-white">
                                <div class="cta-subscribe cta-subscribe-2 box-form">
                                    <div class="box-title text-white">
                                        <?php echo $free ?>
                                        <img class="svg" src="images/general-elements/section-separators/rounded.svg" alt="">
                                    </div><!-- .box-title end -->
                                    <div class="box-content">
                                        <form id="form-cta-subscribe-2" class="form-inline" method="POST" action="">
                                            <div class="cs-notifications">
                                                <div class="cs-notifications-content"></div>
                                            </div><!-- .cs-notifications end -->
                                            <div class="form-group">
                                                <?php echo $name ?>
                                                <input type="text" name="cs2Name" id="cs2Name" class="form-control" placeholder="">
                                            </div><!-- .form-group end -->
                                            <div class="form-group">
                                                <?php echo $email ?>
                                                <input type="text" name="cs2Email" id="cs2Email" class="form-control" placeholder="">
                                            </div><!-- .form-group end -->
                                            <div class="form-group">
                                            <?php echo $phone ?>                                                
                                                <input type="text" name="cs2PhoneNum" id="cs2PhoneNum" class="form-control">
                                            </div><!-- .form-group end -->
                                            <div class="form-group">
                                                <input type="submit" class="form-control" value="Call to Action">
                                                <img src="images/general-elements/cta-subscribe-arrow.png" alt="">
                                            </div><!-- .form-group end -->
                                        </form><!-- #form-cta-subscribe-2 end -->
                                    </div><!-- .box-content end -->
                                </div><!-- .box-form end -->
                            </div><!-- .banner-center-box end -->

                        </div><!-- .col-md-5 end -->
                    </div><!-- .row end -->
                </div><!-- .container end -->

            </div><!-- .slide-content end -->
            <div class="section-separator wave-1 bottom">
                <div class="ss-content">
                    <img class="svg" src="images/general-elements/section-separators/wave-1.svg" alt="">
                </div><!-- .ss-content -->
            </div><!-- .section-separator -->				
        </div><!-- .banner-parallax end -->

    </section><!-- #banner end -->

    <!-- Content
    ============================================= -->
    <section id="content">

        <div id="content-wrap">

            <!-- === Intro Features =========== -->
            <div id="intro-features" class="flat-section">

                <div class="section-content">

                    <div class="container">
                        <div class="row">
                            <div class="col-md-12">
                            
                                <p class="font-size-18px mb-30 text-center">
                                    <?php echo $trust ?>
                                </p>
                                <div class="slider-clients">
                                    <ul class="owl-carousel">
                                        <li>
                                            <div class="slide">
                                                <div class="client-single"><a href="#"><img src="http://via.placeholder.com/120x40?text=Image" alt=""></a></div>
                                            </div><!-- .slide end -->
                                        </li>
                                        <li>
                                            <div class="slide">
                                                <div class="client-single"><a href="#"><img src="http://via.placeholder.com/120x40?text=Image" alt=""></a></div>
                                            </div><!-- .slide end -->
                                        </li>
                                        <li>
                                            <div class="slide">
                                                <div class="client-single"><a href="#"><img src="http://via.placeholder.com/120x40?text=Image" alt=""></a></div>
                                            </div><!-- .slide end -->
                                        </li>
                                        <li>
                                            <div class="slide">
                                                <div class="client-single"><a href="#"><img src="http://via.placeholder.com/120x40?text=Image" alt=""></a></div>
                                            </div><!-- .slide end -->
                                        </li>
                                        <li>
                                            <div class="slide">
                                                <div class="client-single"><a href="#"><img src="http://via.placeholder.com/120x40?text=Image" alt=""></a></div>
                                            </div><!-- .slide end -->
                                        </li>
                                        <li>
                                            <div class="slide">
                                                <div class="client-single"><a href="#"><img src="http://via.placeholder.com/120x40?text=Image" alt=""></a></div>
                                            </div><!-- .slide end -->
                                        </li>
                                    </ul>
                                </div><!-- .slider-clients end -->
                            
                            </div><!-- .col-md-12 end -->

                            <div class="divider-140 divider-md-100"></div>
                                
                            <div class="col-md-8 col-md-offset-2">
                                <div class="section-title text-center">
                                    <span><?php echo $some ?></span>
                                    <h2><?php echo $create ?></h2>
                                </div><!-- .section-title end -->
                            
                            </div><!-- .col-md-8 end -->
                            <div class="col-sm-12">

                                <div class="slider-boxes-features-1">
                                    <ul class="owl-carousel">
                                        <li>
                                            <div class="slide">
                                                <div class="box-info box-info-2 text-center">
                                                    <div class="box-icon icon"><i class="flaticon-fingerprint"></i></div>
                                                    <div class="box-content">
                                                        <h4><?php echo $new ?></h4>
                                                        <p><?php echo $news ?> </p>
                                                    </div><!-- .box-content end -->
                                                </div><!-- .box-info end -->
                                            </div><!-- .slide end -->
                                        </li>
                                        <li>
                                            <div class="slide">
                                                <div class="box-info box-info-2 text-center">
                                                    <div class="box-icon icon"><i class="flaticon-layers-1"></i></div>
                                                    <div class="box-content">
                                                        <h4>Best Analytics</h4>
                                                        <p>This should be used to tell a story and let your users know a little more about your product and service.</p>
                                                    </div><!-- .box-content end -->
                                                </div><!-- .box-info end -->
                                            </div><!-- .slide end -->
                                        </li>
                                        <li>
                                            <div class="slide">
                                                <div class="box-info box-info-2 text-center">
                                                    <div class="box-icon icon"><i class="flaticon-stopwatch-1"></i></div>
                                                    <div class="box-content">
                                                        <h4>Great Results</h4>
                                                        <p>This should be used to tell a story and let your users know a little more about your product and service.</p>
                                                    </div><!-- .box-content end -->
                                                </div><!-- .box-info end -->
                                            </div><!-- .slide end -->
                                        </li>
                                        <li>
                                            <div class="slide">
                                                <div class="box-info box-info-2 text-center">
                                                    <div class="box-icon icon"><i class="flaticon-fingerprint"></i></div>
                                                    <div class="box-content">
                                                        <h4>New Design</h4>
                                                        <p>This should be used to tell a story and let your users know a little more about your product and service.</p>
                                                    </div><!-- .box-content end -->
                                                </div><!-- .box-info end -->
                                            </div><!-- .slide end -->
                                        </li>
                                        <li>
                                            <div class="slide">
                                                <div class="box-info box-info-2 text-center">
                                                    <div class="box-icon icon"><i class="flaticon-layers-1"></i></div>
                                                    <div class="box-content">
                                                        <h4>Best Analytics</h4>
                                                        <p>This should be used to tell a story and let your users know a little more about your product and service.</p>
                                                    </div><!-- .box-content end -->
                                                </div><!-- .box-info end -->
                                            </div><!-- .slide end -->
                                        </li>
                                    </ul>
                                </div><!-- .slider-boxes-features-1 end -->

                            </div><!-- .col-sm-12 end -->

                        </div><!-- .row end -->
                    </div><!-- .container end -->

                </div><!-- .section-content end -->

            </div><!-- .flat-section end -->

            <!-- === Our Services =========== -->
            <div id="our-services" class="flat-section">
            
                <div class="section-content">
            
                    <div class="container">
                        <div class="row">
                            <div class="col-md-6 col-md-push-6">
                                
                                <div class="section-title">
                                    <span><?php echo $our ?></span>
                                    <h2><?php echo $ourh2 ?></h2>
                                    <p>
                                        <?php echo $outp ?>
                                    </p>
                                </div><!-- .section-title end -->
                                <div class="slider-boxes-features-2">
                                    <ul class="owl-carousel">
                                        <li class="active">
                                            <div class="slide">
                                                <div class="box-info box-info-1 text-center">
                                                    <div class="box-icon icon"><i class="flaticon-wireless-internet"></i></div>
                                                    <div class="box-content">
                                                        <h6><?php echo $brand ?></h6>
                                                    </div><!-- .box-content end -->
                                                </div><!-- .box-info end -->
                                            </div><!-- .slide end -->
                                        </li>
                                        <li>
                                            <div class="slide">
                                                <div class="box-info box-info-1 text-center">
                                                    <span class="label-state"><?php echo $hot ?></span>
                                                    <div class="box-icon icon"><i class="flaticon-smartphone-6"></i></div>
                                                    <div class="box-content">
                                                        <h6><?php echo $andro ?></h6>
                                                    </div><!-- .box-content end -->
                                                </div><!-- .box-info end -->
                                            </div><!-- .slide end -->
                                        </li>
                                        <li>
                                            <div class="slide">
                                                <div class="box-info box-info-1 text-center">
                                                    <div class="box-icon icon"><i class="flaticon-settings-4"></i></div>
                                                    <div class="box-content">
                                                        <h6><?php echo $dev ?></h6>
                                                    </div><!-- .box-content end -->
                                                </div><!-- .box-info end -->
                                            </div><!-- .slide end -->
                                        </li>
                                        <li>
                                            <div class="slide">
                                                <div class="box-info box-info-1 text-center">
                                                    <div class="box-icon icon"><i class="flaticon-controls-9"></i></div>
                                                    <div class="box-content">
                                                        <h6><?php echo $analytic ?></h6>
                                                    </div><!-- .box-content end -->
                                                </div><!-- .box-info end -->
                                            </div><!-- .slide end -->
                                        </li>
                                        <li>
                                            <div class="slide">
                                                <div class="box-info box-info-1 text-center">
                                                    <span class="label-state"><?php echo $hot ?></span>
                                                    <div class="box-icon icon"><i class="flaticon-like"></i></div>
                                                    <div class="box-content">
                                                        <h6>Designing</h6>
                                                    </div><!-- .box-content end -->
                                                </div><!-- .box-info end -->
                                            </div><!-- .slide end -->
                                        </li>
                                        <li>
                                            <div class="slide">
                                                <div class="box-info box-info-1 text-center">
                                                    <div class="box-icon icon"><i class="flaticon-magic-wand"></i></div>
                                                    <div class="box-content">
                                                        <h6>Marketing</h6>
                                                    </div><!-- .box-content end -->
                                                </div><!-- .box-info end -->
                                            </div><!-- .slide end -->
                                        </li>
                                    </ul>
                                </div><!-- .slider-boxes-features-2 end -->

                            </div><!-- .col-md-6 end -->
                            <div class="col-md-6 col-md-pull-6 mt-md-60 text-center md-text-left">
                            
                                <img src="http://via.placeholder.com/420x390?text=Image" alt="">
                            
                            </div><!-- .col-md-6 end -->
                        </div><!-- .row end -->
                    </div><!-- .container end -->

                </div><!-- .section-content end -->

            </div><!-- .flat-section end -->

            <!-- === Some Facts =========== -->
            <div id="some-facts" class="flat-section">
            
                <div class="section-content">
            
                    <div class="container">
                        <div class="row">
                            <div class="col-md-6">
                                
                                <div class="section-title">
                                    <span>Some Facts</span>
                                    <h2>Experience True Business Performance Increases</h2>
                                    <p>
                                       <?php echo $psome ?>
                                    </p>
                                </div><!-- .section-title end -->
                                <div class="slider-boxes-features-3">
                                    <ul class="owl-carousel">
                                        <li class="active">
                                            <div class="slide">
                                                <div class="box-info box-info-1 text-center">
                                                    <span class="label-state"><?php echo $hot ?></span>
                                                    <div class="box-content">
                                                        <h3><span class="counter-stats">937</span></h3>
                                                        <h6>Clients</h6>
                                                    </div><!-- .box-content end -->
                                                </div><!-- .box-info end -->
                                            </div><!-- .slide end -->
                                        </li>
                                        <li>
                                            <div class="slide">
                                                <div class="box-info box-info-1 text-center">
                                                    <div class="box-content">
                                                        <h3><span class="counter-stats">458</span></h3>
                                                        <h6>Projects</h6>
                                                    </div><!-- .box-content end -->
                                                </div><!-- .box-info end -->
                                            </div><!-- .slide end -->
                                        </li>
                                        <li>
                                            <div class="slide">
                                                <div class="box-info box-info-1 text-center">
                                                    <div class="box-content">
                                                        <h3><span class="counter-stats">682</span></h3>
                                                        <h6>Hours</h6>
                                                    </div><!-- .box-content end -->
                                                </div><!-- .box-info end -->
                                            </div><!-- .slide end -->
                                        </li>
                                        <li>
                                            <div class="slide">
                                                <div class="box-info box-info-1 text-center">
                                                    <div class="box-content">
                                                        <h3><span class="counter-stats">2570</span></h3>
                                                        <h6>Tickets</h6>
                                                    </div><!-- .box-content end -->
                                                </div><!-- .box-info end -->
                                            </div><!-- .slide end -->
                                        </li>
                                    </ul>
                                </div><!-- .slider-boxes-features-3 end -->

                            </div><!-- .col-md-6 end -->
                            <div class="col-md-6 text-right mt-md-60 md-text-left">
                            
                                <img src="http://via.placeholder.com/420x390?text=Image" alt="">
                            
                            </div><!-- .col-md-6 end -->
                        </div><!-- .row end -->
                    </div><!-- .container end -->

                </div><!-- .section-content end -->

            </div><!-- .flat-section end -->

            <!-- === Clients Testimonials =========== -->
            <div id="clients-testimonials" class="parallax-section">
            
                <img src="http://via.placeholder.com/1920x1100?text=Image" alt="">
                <div class="overlay-colored color-bg-gradient opacity-90"></div><!-- .overlay-colored end -->
                <div class="section-content">
            
                    <div class="container">
                        <div class="row">
                            <div class="col-md-8 col-md-offset-2">
                            
                                <div class="section-title text-white text-center">
                                    <span>Happy Clients</span>
                                    <h2>What People Will Talk About Us After Using Our Services</h2>
                                </div><!-- .section-title end -->
                            
                            </div><!-- .col-md-8 end -->
                            <div class="col-md-12">
                            
                                <div class="slider-testimonials">
                                    <ul class="owl-carousel">
                                        <li>
                                            <div class="slide">
                                                <div class="testimonial-single-1">
                                                    <div class="ts-person">
                                                        <div class="ts-img">
                                                            <img src="http://via.placeholder.com/80x80?text=Image" alt="">
                                                        </div><!-- .ts-img end -->
                                                        <h5>Mark Smith</h5>
                                                        <span>Envato Inc.</span>
                                                    </div><!-- .ts-person end -->
                                                    <div class="ts-content">
                                                        This should be used to tell a story and let your users know about your product or service.
                                                        <div class="rating">
                                                            <i class="fa fa-star"></i>
                                                            <i class="fa fa-star"></i>
                                                            <i class="fa fa-star"></i>
                                                            <i class="fa fa-star"></i>
                                                            <i class="fa fa-star"></i>
                                                        </div><!-- .rating end -->
                                                    </div><!-- .ts-content end -->
                                                </div><!-- .testimonial-single-1 -->
                                            </div><!-- .slide end -->
                                        </li>
                                        <li>
                                            <div class="slide">
                                                <div class="testimonial-single-1">
                                                    <div class="ts-person">
                                                        <div class="ts-img">
                                                            <img src="http://via.placeholder.com/80x80?text=Image" alt="">
                                                        </div><!-- .ts-img end -->
                                                        <h5>Vera Duncan</h5>
                                                        <span>PayPal Inc.</span>
                                                    </div><!-- .ts-person end -->
                                                    <div class="ts-content">
                                                        This should be used to tell a story and let your users know about your product or service.
                                                        <div class="rating">
                                                            <i class="fa fa-star"></i>
                                                            <i class="fa fa-star"></i>
                                                            <i class="fa fa-star"></i>
                                                            <i class="fa fa-star"></i>
                                                            <i class="fa fa-star"></i>
                                                        </div><!-- .rating end -->
                                                    </div><!-- .ts-content end -->
                                                </div><!-- .testimonial-single-1 -->
                                            </div><!-- .slide end -->
                                        </li>
                                        <li>
                                            <div class="slide">
                                                <div class="testimonial-single-1">
                                                    <div class="ts-person">
                                                        <div class="ts-img">
                                                            <img src="http://via.placeholder.com/80x80?text=Image" alt="">
                                                        </div><!-- .ts-img end -->
                                                        <h5>Bryce Vaughn</h5>
                                                        <span>Unbounce Inc.</span>
                                                    </div><!-- .ts-person end -->
                                                    <div class="ts-content">
                                                        This should be used to tell a story and let your users know about your product or service.
                                                        <div class="rating">
                                                            <i class="fa fa-star"></i>
                                                            <i class="fa fa-star"></i>
                                                            <i class="fa fa-star"></i>
                                                            <i class="fa fa-star"></i>
                                                            <i class="fa fa-star"></i>
                                                        </div><!-- .rating end -->
                                                    </div><!-- .ts-content end -->
                                                </div><!-- .testimonial-single-1 -->
                                            </div><!-- .slide end -->
                                        </li>
                                        <li>
                                            <div class="slide">
                                                <div class="testimonial-single-1">
                                                    <div class="ts-person">
                                                        <div class="ts-img">
                                                            <img src="http://via.placeholder.com/80x80?text=Image" alt="">
                                                        </div><!-- .ts-img end -->
                                                        <h5>Mark Smith</h5>
                                                        <span>Envato Inc.</span>
                                                    </div><!-- .ts-person end -->
                                                    <div class="ts-content">
                                                        This should be used to tell a story and let your users know about your product or service.
                                                        <div class="rating">
                                                            <i class="fa fa-star"></i>
                                                            <i class="fa fa-star"></i>
                                                            <i class="fa fa-star"></i>
                                                            <i class="fa fa-star"></i>
                                                            <i class="fa fa-star"></i>
                                                        </div><!-- .rating end -->
                                                    </div><!-- .ts-content end -->
                                                </div><!-- .testimonial-single-1 -->
                                            </div><!-- .slide end -->
                                        </li>
                                        <li>
                                            <div class="slide">
                                                <div class="testimonial-single-1">
                                                    <div class="ts-person">
                                                        <div class="ts-img">
                                                            <img src="http://via.placeholder.com/80x80?text=Image" alt="">
                                                        </div><!-- .ts-img end -->
                                                        <h5>Vera Duncan</h5>
                                                        <span>PayPal Inc.</span>
                                                    </div><!-- .ts-person end -->
                                                    <div class="ts-content">
                                                        This should be used to tell a story and let your users know about your product or service.
                                                        <div class="rating">
                                                            <i class="fa fa-star"></i>
                                                            <i class="fa fa-star"></i>
                                                            <i class="fa fa-star"></i>
                                                            <i class="fa fa-star"></i>
                                                            <i class="fa fa-star"></i>
                                                        </div><!-- .rating end -->
                                                    </div><!-- .ts-content end -->
                                                </div><!-- .testimonial-single-1 -->
                                            </div><!-- .slide end -->
                                        </li>
                                    </ul>
                                </div><!-- .slider-testimonials end -->
                            
                            </div><!-- .col-md-12 end -->
                        </div><!-- .row end -->
                    </div><!-- .container end -->
            
                </div><!-- .section-content end -->
            
            </div><!-- .parallax-section end -->

            <!-- === CTA Title 1 =========== -->
            <div id="cta-title-1" class="flat-section">
            
                <div class="section-content">
            
                    <div class="container">
                        <div class="row">
                            <div class="col-md-12 text-center">
            
            
                                <h1><?php echo $joinnow1 ?><span class="colored"><?php echo $discount ?></span></h1>
                                <p>
                                    <?php echo $dispara ?>
                                </p>
                                <a class="btn scroll-to x-large colorful hover-colorful-darken mt-40" href="#banner">Call to Action</a>
            
                            </div><!-- .col-md-12 end -->
                        </div><!-- .row end -->
                    </div><!-- .container end -->
            
                </div><!-- .section-content end -->
            
            </div><!-- .flat-section end -->

        </div><!-- #content-wrap -->

    </section><!-- #content end -->

    <!-- Footer
    ============================================= -->
    <?php include_once"footer.php" ?>