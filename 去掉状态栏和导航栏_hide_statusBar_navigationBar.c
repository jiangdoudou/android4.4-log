/*
* by jiangdou QQ:344283973
*
*
*
*/



systemUI  上面为Status Bar   下面为Navigation Bar


1. System Bar简介
    在Android4.0 (API Level 14)及更高版本中，System Bar由Status Bar<位于顶部>和Navigation Bar<位于底部>组成。

    在Android的官方网站已经详细讲解了如何Hdie Status Bar和Navigation Bar。

    本文化讲述如何在系统中Hide Status Bar和Navigation Bar，使之永远不会出现。本文以Android 4.4.2为例。



2. 系统Hide Status Bar
    frameworks/base/core/res/res/values/dimens.xml

   把  <dimen name="status_bar_height">25dip</dimen> 修改为<dimen name="status_bar_height">0dip</dimen>

3. 系统Hide Navigation Bar
       frameworks/base/packages/SystemUI/src/com/android/systemui/

         statusbar/phone/PhoneStatusBar.java

       在start函数中注释掉 "addNavigationBar();"
