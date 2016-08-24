* vim: syntax=form
*-----------------------------------------------------
*
* This file has been generated automatically
* by "qgraf-3.1.4" using the Feynman rules of the
* model "Standard Model".
* The file results from the following "qgraf.dat":
*
*---------- <qgraf.dat> ------------------------------
* output = 'diagrams-0.hh';
* style = 'form.sty';
* model = 'model';
* in = U[k1], Ubar[k2];
* out = ep[k3], ne[k4], mum[k5], nmubar[k6], B[k7], Bbar[k8];
* loops=0;
* loop_momentum=p;
* options=onshell, notadpole, nosnail;
* true=iprop[phim,phip,chi,H,ep,em,ne,nebar,mup,mum,nmu,nmubar,0,0];
* true=vsum[QCD,2,2];
* true=vsum[QED,4,4];
*
*---------- END OF <qgraf.dat> -----------------------
*--#[diagrams:

*--#[ diagram1:
*
Local diagram1 =
  QGRAFSIGN(-1) * PREFACTOR(1) *
   inp([field.U], k1) *
   inplorentz(+1, iv1r2L1, k1, mU) *
   inpcolor(1, iv1r2C3) *
   inp([field.Ubar], k2) *
   inplorentz(-1, iv1r1L1, k2, mU) *
   inpcolor(2, iv1r1C3) *
   out([field.ep], k3) *
   outlorentz(-1, iv2r2L1, k3, me) *
   outcolor(1, iv2r2C1) *
   out([field.ne], k4) *
   outlorentz(+1, iv2r1L1, k4, 0) *
   outcolor(2, iv2r1C1) *
   out([field.mum], k5) *
   outlorentz(+1, iv3r1L1, k5, mmu) *
   outcolor(3, iv3r1C1) *
   out([field.nmubar], k6) *
   outlorentz(-1, iv3r2L1, k6, 0) *
   outcolor(4, iv3r2C1) *
   out([field.B], k7) *
   outlorentz(+1, iv4r1L1, k7, mB) *
   outcolor(5, iv4r1C3) *
   out([field.Bbar], k8) *
   outlorentz(-1, iv5r2L1, k8, mB) *
   outcolor(6, iv5r2C3) *
   vertex(iv1,
      [field.Ubar], idx1r1, -1, k2+ZERO, iv1r1L1, -3, iv1r1C3,
      [field.U], idx1r2, +1, k1+ZERO, iv1r2L1, +3, iv1r2C3,
      [field.g], idx1r3, +2, -k1-k2+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.nebar], idx2r1, -1, -k4+ZERO, iv2r1L1, -1, iv2r1C1,
      [field.em], idx2r2, +1, -k3+ZERO, iv2r2L1, +1, iv2r2C1,
      [field.Wp], idx2r3, +2, k3+k4+ZERO, iv2r3L2, +1, iv2r3C1) *
   vertex(iv3,
      [field.mup], idx3r1, -1, -k5+ZERO, iv3r1L1, -1, iv3r1C1,
      [field.nmu], idx3r2, +1, -k6+ZERO, iv3r2L1, +1, iv3r2C1,
      [field.Wm], idx3r3, +2, k5+k6+ZERO, iv3r3L2, +1, iv3r3C1) *
   vertex(iv4,
      [field.Bbar], idx4r1, -1, -k7+ZERO, iv4r1L1, -3, iv4r1C3,
      [field.B], idx4r2, +1, -k1-k2+k7+ZERO, iv4r2L1, +3, iv4r2C3,
      [field.g], idx4r3, +2, k1+k2+ZERO, iv4r3L2, +8, iv4r3C8) *
   vertex(iv5,
      [field.Bbar], idx5r1, -1, k1+k2-k7+ZERO, iv5r1L1, -3, iv5r1C3,
      [field.B], idx5r2, +1, -k8+ZERO, iv5r2L1, +3, iv5r2C3,
      [field.A], idx5r3, +2, -k1-k2+k7+k8+ZERO, iv5r3L2, +1, iv5r3C1) *
   vertex(iv6,
      [field.Wp], idx6r1, +2, -k5-k6+ZERO, iv6r1L2, +1, iv6r1C1,
      [field.Wm], idx6r2, +2, -k3-k4+ZERO, iv6r2L2, +1, iv6r2C1,
      [field.A], idx6r3, +2, k1+k2-k7-k8+ZERO, iv6r3L2, +1, iv6r3C1) *
   propcolor(+8, iv4r3C8, iv1r3C8) *
   proplorentz(+2, -k1-k2+ZERO, 0, 0, 0, iv4r3L2, iv1r3L2) *
   propcolor(+1, iv2r3C1, iv6r2C1) *
   proplorentz(+2, -k3-k4+ZERO, mW, wW, 0, iv2r3L2, iv6r2L2) *
   propcolor(+1, iv6r1C1, iv3r3C1) *
   proplorentz(+2, k5+k6+ZERO, mW, wW, 0, iv6r1L2, iv3r3L2) *
   propcolor(+3, iv5r1C3, iv4r2C3) *
   proplorentz(+1, -k1-k2+k7+ZERO, mB, wB, 0, iv5r1L1, iv4r2L1) *
   propcolor(+1, iv6r3C1, iv5r3C1) *
   proplorentz(+2, -k1-k2+k7+k8+ZERO, 0, 0, 0, iv6r3L2, iv5r3L2)
;
*--#] diagram1:
*--#[ diagram2:
*
Local diagram2 =
  QGRAFSIGN(-1) * PREFACTOR(1) *
   inp([field.U], k1) *
   inplorentz(+1, iv1r2L1, k1, mU) *
   inpcolor(1, iv1r2C3) *
   inp([field.Ubar], k2) *
   inplorentz(-1, iv1r1L1, k2, mU) *
   inpcolor(2, iv1r1C3) *
   out([field.ep], k3) *
   outlorentz(-1, iv2r2L1, k3, me) *
   outcolor(1, iv2r2C1) *
   out([field.ne], k4) *
   outlorentz(+1, iv2r1L1, k4, 0) *
   outcolor(2, iv2r1C1) *
   out([field.mum], k5) *
   outlorentz(+1, iv3r1L1, k5, mmu) *
   outcolor(3, iv3r1C1) *
   out([field.nmubar], k6) *
   outlorentz(-1, iv3r2L1, k6, 0) *
   outcolor(4, iv3r2C1) *
   out([field.B], k7) *
   outlorentz(+1, iv4r1L1, k7, mB) *
   outcolor(5, iv4r1C3) *
   out([field.Bbar], k8) *
   outlorentz(-1, iv5r2L1, k8, mB) *
   outcolor(6, iv5r2C3) *
   vertex(iv1,
      [field.Ubar], idx1r1, -1, k2+ZERO, iv1r1L1, -3, iv1r1C3,
      [field.U], idx1r2, +1, k1+ZERO, iv1r2L1, +3, iv1r2C3,
      [field.g], idx1r3, +2, -k1-k2+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.nebar], idx2r1, -1, -k4+ZERO, iv2r1L1, -1, iv2r1C1,
      [field.em], idx2r2, +1, -k3+ZERO, iv2r2L1, +1, iv2r2C1,
      [field.Wp], idx2r3, +2, k3+k4+ZERO, iv2r3L2, +1, iv2r3C1) *
   vertex(iv3,
      [field.mup], idx3r1, -1, -k5+ZERO, iv3r1L1, -1, iv3r1C1,
      [field.nmu], idx3r2, +1, -k6+ZERO, iv3r2L1, +1, iv3r2C1,
      [field.Wm], idx3r3, +2, k5+k6+ZERO, iv3r3L2, +1, iv3r3C1) *
   vertex(iv4,
      [field.Bbar], idx4r1, -1, -k7+ZERO, iv4r1L1, -3, iv4r1C3,
      [field.B], idx4r2, +1, -k1-k2+k7+ZERO, iv4r2L1, +3, iv4r2C3,
      [field.g], idx4r3, +2, k1+k2+ZERO, iv4r3L2, +8, iv4r3C8) *
   vertex(iv5,
      [field.Bbar], idx5r1, -1, k1+k2-k7+ZERO, iv5r1L1, -3, iv5r1C3,
      [field.B], idx5r2, +1, -k8+ZERO, iv5r2L1, +3, iv5r2C3,
      [field.Z], idx5r3, +2, -k1-k2+k7+k8+ZERO, iv5r3L2, +1, iv5r3C1) *
   vertex(iv6,
      [field.Wp], idx6r1, +2, -k5-k6+ZERO, iv6r1L2, +1, iv6r1C1,
      [field.Wm], idx6r2, +2, -k3-k4+ZERO, iv6r2L2, +1, iv6r2C1,
      [field.Z], idx6r3, +2, k1+k2-k7-k8+ZERO, iv6r3L2, +1, iv6r3C1) *
   propcolor(+8, iv4r3C8, iv1r3C8) *
   proplorentz(+2, -k1-k2+ZERO, 0, 0, 0, iv4r3L2, iv1r3L2) *
   propcolor(+1, iv2r3C1, iv6r2C1) *
   proplorentz(+2, -k3-k4+ZERO, mW, wW, 0, iv2r3L2, iv6r2L2) *
   propcolor(+1, iv6r1C1, iv3r3C1) *
   proplorentz(+2, k5+k6+ZERO, mW, wW, 0, iv6r1L2, iv3r3L2) *
   propcolor(+3, iv5r1C3, iv4r2C3) *
   proplorentz(+1, -k1-k2+k7+ZERO, mB, wB, 0, iv5r1L1, iv4r2L1) *
   propcolor(+1, iv6r3C1, iv5r3C1) *
   proplorentz(+2, -k1-k2+k7+k8+ZERO, mZ, wZ, 0, iv6r3L2, iv5r3L2)
;
*--#] diagram2:
*--#[ diagram3:
*
Local diagram3 =
  QGRAFSIGN(-1) * PREFACTOR(1) *
   inp([field.U], k1) *
   inplorentz(+1, iv1r2L1, k1, mU) *
   inpcolor(1, iv1r2C3) *
   inp([field.Ubar], k2) *
   inplorentz(-1, iv1r1L1, k2, mU) *
   inpcolor(2, iv1r1C3) *
   out([field.ep], k3) *
   outlorentz(-1, iv2r2L1, k3, me) *
   outcolor(1, iv2r2C1) *
   out([field.ne], k4) *
   outlorentz(+1, iv2r1L1, k4, 0) *
   outcolor(2, iv2r1C1) *
   out([field.mum], k5) *
   outlorentz(+1, iv3r1L1, k5, mmu) *
   outcolor(3, iv3r1C1) *
   out([field.nmubar], k6) *
   outlorentz(-1, iv3r2L1, k6, 0) *
   outcolor(4, iv3r2C1) *
   out([field.B], k7) *
   outlorentz(+1, iv5r1L1, k7, mB) *
   outcolor(5, iv5r1C3) *
   out([field.Bbar], k8) *
   outlorentz(-1, iv4r2L1, k8, mB) *
   outcolor(6, iv4r2C3) *
   vertex(iv1,
      [field.Ubar], idx1r1, -1, k2+ZERO, iv1r1L1, -3, iv1r1C3,
      [field.U], idx1r2, +1, k1+ZERO, iv1r2L1, +3, iv1r2C3,
      [field.g], idx1r3, +2, -k1-k2+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.nebar], idx2r1, -1, -k4+ZERO, iv2r1L1, -1, iv2r1C1,
      [field.em], idx2r2, +1, -k3+ZERO, iv2r2L1, +1, iv2r2C1,
      [field.Wp], idx2r3, +2, k3+k4+ZERO, iv2r3L2, +1, iv2r3C1) *
   vertex(iv3,
      [field.mup], idx3r1, -1, -k5+ZERO, iv3r1L1, -1, iv3r1C1,
      [field.nmu], idx3r2, +1, -k6+ZERO, iv3r2L1, +1, iv3r2C1,
      [field.Wm], idx3r3, +2, k5+k6+ZERO, iv3r3L2, +1, iv3r3C1) *
   vertex(iv4,
      [field.Bbar], idx4r1, -1, -k1-k2+k8+ZERO, iv4r1L1, -3, iv4r1C3,
      [field.B], idx4r2, +1, -k8+ZERO, iv4r2L1, +3, iv4r2C3,
      [field.g], idx4r3, +2, k1+k2+ZERO, iv4r3L2, +8, iv4r3C8) *
   vertex(iv5,
      [field.Bbar], idx5r1, -1, -k7+ZERO, iv5r1L1, -3, iv5r1C3,
      [field.B], idx5r2, +1, k1+k2-k8+ZERO, iv5r2L1, +3, iv5r2C3,
      [field.A], idx5r3, +2, -k1-k2+k7+k8+ZERO, iv5r3L2, +1, iv5r3C1) *
   vertex(iv6,
      [field.Wp], idx6r1, +2, -k5-k6+ZERO, iv6r1L2, +1, iv6r1C1,
      [field.Wm], idx6r2, +2, -k3-k4+ZERO, iv6r2L2, +1, iv6r2C1,
      [field.A], idx6r3, +2, k1+k2-k7-k8+ZERO, iv6r3L2, +1, iv6r3C1) *
   propcolor(+8, iv4r3C8, iv1r3C8) *
   proplorentz(+2, -k1-k2+ZERO, 0, 0, 0, iv4r3L2, iv1r3L2) *
   propcolor(+1, iv2r3C1, iv6r2C1) *
   proplorentz(+2, -k3-k4+ZERO, mW, wW, 0, iv2r3L2, iv6r2L2) *
   propcolor(+1, iv6r1C1, iv3r3C1) *
   proplorentz(+2, k5+k6+ZERO, mW, wW, 0, iv6r1L2, iv3r3L2) *
   propcolor(+3, iv4r1C3, iv5r2C3) *
   proplorentz(+1, k1+k2-k8+ZERO, mB, wB, 0, iv4r1L1, iv5r2L1) *
   propcolor(+1, iv6r3C1, iv5r3C1) *
   proplorentz(+2, -k1-k2+k7+k8+ZERO, 0, 0, 0, iv6r3L2, iv5r3L2)
;
*--#] diagram3:
*--#[ diagram4:
*
Local diagram4 =
  QGRAFSIGN(-1) * PREFACTOR(1) *
   inp([field.U], k1) *
   inplorentz(+1, iv1r2L1, k1, mU) *
   inpcolor(1, iv1r2C3) *
   inp([field.Ubar], k2) *
   inplorentz(-1, iv1r1L1, k2, mU) *
   inpcolor(2, iv1r1C3) *
   out([field.ep], k3) *
   outlorentz(-1, iv2r2L1, k3, me) *
   outcolor(1, iv2r2C1) *
   out([field.ne], k4) *
   outlorentz(+1, iv2r1L1, k4, 0) *
   outcolor(2, iv2r1C1) *
   out([field.mum], k5) *
   outlorentz(+1, iv3r1L1, k5, mmu) *
   outcolor(3, iv3r1C1) *
   out([field.nmubar], k6) *
   outlorentz(-1, iv3r2L1, k6, 0) *
   outcolor(4, iv3r2C1) *
   out([field.B], k7) *
   outlorentz(+1, iv5r1L1, k7, mB) *
   outcolor(5, iv5r1C3) *
   out([field.Bbar], k8) *
   outlorentz(-1, iv4r2L1, k8, mB) *
   outcolor(6, iv4r2C3) *
   vertex(iv1,
      [field.Ubar], idx1r1, -1, k2+ZERO, iv1r1L1, -3, iv1r1C3,
      [field.U], idx1r2, +1, k1+ZERO, iv1r2L1, +3, iv1r2C3,
      [field.g], idx1r3, +2, -k1-k2+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.nebar], idx2r1, -1, -k4+ZERO, iv2r1L1, -1, iv2r1C1,
      [field.em], idx2r2, +1, -k3+ZERO, iv2r2L1, +1, iv2r2C1,
      [field.Wp], idx2r3, +2, k3+k4+ZERO, iv2r3L2, +1, iv2r3C1) *
   vertex(iv3,
      [field.mup], idx3r1, -1, -k5+ZERO, iv3r1L1, -1, iv3r1C1,
      [field.nmu], idx3r2, +1, -k6+ZERO, iv3r2L1, +1, iv3r2C1,
      [field.Wm], idx3r3, +2, k5+k6+ZERO, iv3r3L2, +1, iv3r3C1) *
   vertex(iv4,
      [field.Bbar], idx4r1, -1, -k1-k2+k8+ZERO, iv4r1L1, -3, iv4r1C3,
      [field.B], idx4r2, +1, -k8+ZERO, iv4r2L1, +3, iv4r2C3,
      [field.g], idx4r3, +2, k1+k2+ZERO, iv4r3L2, +8, iv4r3C8) *
   vertex(iv5,
      [field.Bbar], idx5r1, -1, -k7+ZERO, iv5r1L1, -3, iv5r1C3,
      [field.B], idx5r2, +1, k1+k2-k8+ZERO, iv5r2L1, +3, iv5r2C3,
      [field.Z], idx5r3, +2, -k1-k2+k7+k8+ZERO, iv5r3L2, +1, iv5r3C1) *
   vertex(iv6,
      [field.Wp], idx6r1, +2, -k5-k6+ZERO, iv6r1L2, +1, iv6r1C1,
      [field.Wm], idx6r2, +2, -k3-k4+ZERO, iv6r2L2, +1, iv6r2C1,
      [field.Z], idx6r3, +2, k1+k2-k7-k8+ZERO, iv6r3L2, +1, iv6r3C1) *
   propcolor(+8, iv4r3C8, iv1r3C8) *
   proplorentz(+2, -k1-k2+ZERO, 0, 0, 0, iv4r3L2, iv1r3L2) *
   propcolor(+1, iv2r3C1, iv6r2C1) *
   proplorentz(+2, -k3-k4+ZERO, mW, wW, 0, iv2r3L2, iv6r2L2) *
   propcolor(+1, iv6r1C1, iv3r3C1) *
   proplorentz(+2, k5+k6+ZERO, mW, wW, 0, iv6r1L2, iv3r3L2) *
   propcolor(+3, iv4r1C3, iv5r2C3) *
   proplorentz(+1, k1+k2-k8+ZERO, mB, wB, 0, iv4r1L1, iv5r2L1) *
   propcolor(+1, iv6r3C1, iv5r3C1) *
   proplorentz(+2, -k1-k2+k7+k8+ZERO, mZ, wZ, 0, iv6r3L2, iv5r3L2)
;
*--#] diagram4:
*--#[ diagram5:
*
Local diagram5 =
  QGRAFSIGN(-1) * PREFACTOR(1) *
   inp([field.U], k1) *
   inplorentz(+1, iv4r2L1, k1, mU) *
   inpcolor(1, iv4r2C3) *
   inp([field.Ubar], k2) *
   inplorentz(-1, iv5r1L1, k2, mU) *
   inpcolor(2, iv5r1C3) *
   out([field.ep], k3) *
   outlorentz(-1, iv2r2L1, k3, me) *
   outcolor(1, iv2r2C1) *
   out([field.ne], k4) *
   outlorentz(+1, iv2r1L1, k4, 0) *
   outcolor(2, iv2r1C1) *
   out([field.mum], k5) *
   outlorentz(+1, iv3r1L1, k5, mmu) *
   outcolor(3, iv3r1C1) *
   out([field.nmubar], k6) *
   outlorentz(-1, iv3r2L1, k6, 0) *
   outcolor(4, iv3r2C1) *
   out([field.B], k7) *
   outlorentz(+1, iv1r1L1, k7, mB) *
   outcolor(5, iv1r1C3) *
   out([field.Bbar], k8) *
   outlorentz(-1, iv1r2L1, k8, mB) *
   outcolor(6, iv1r2C3) *
   vertex(iv1,
      [field.Bbar], idx1r1, -1, -k7+ZERO, iv1r1L1, -3, iv1r1C3,
      [field.B], idx1r2, +1, -k8+ZERO, iv1r2L1, +3, iv1r2C3,
      [field.g], idx1r3, +2, k7+k8+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.nebar], idx2r1, -1, -k4+ZERO, iv2r1L1, -1, iv2r1C1,
      [field.em], idx2r2, +1, -k3+ZERO, iv2r2L1, +1, iv2r2C1,
      [field.Wp], idx2r3, +2, k3+k4+ZERO, iv2r3L2, +1, iv2r3C1) *
   vertex(iv3,
      [field.mup], idx3r1, -1, -k5+ZERO, iv3r1L1, -1, iv3r1C1,
      [field.nmu], idx3r2, +1, -k6+ZERO, iv3r2L1, +1, iv3r2C1,
      [field.Wm], idx3r3, +2, k5+k6+ZERO, iv3r3L2, +1, iv3r3C1) *
   vertex(iv4,
      [field.Ubar], idx4r1, -1, -k1+k7+k8+ZERO, iv4r1L1, -3, iv4r1C3,
      [field.U], idx4r2, +1, k1+ZERO, iv4r2L1, +3, iv4r2C3,
      [field.g], idx4r3, +2, -k7-k8+ZERO, iv4r3L2, +8, iv4r3C8) *
   vertex(iv5,
      [field.Ubar], idx5r1, -1, k2+ZERO, iv5r1L1, -3, iv5r1C3,
      [field.U], idx5r2, +1, k1-k7-k8+ZERO, iv5r2L1, +3, iv5r2C3,
      [field.A], idx5r3, +2, -k1-k2+k7+k8+ZERO, iv5r3L2, +1, iv5r3C1) *
   vertex(iv6,
      [field.Wp], idx6r1, +2, -k5-k6+ZERO, iv6r1L2, +1, iv6r1C1,
      [field.Wm], idx6r2, +2, -k3-k4+ZERO, iv6r2L2, +1, iv6r2C1,
      [field.A], idx6r3, +2, k1+k2-k7-k8+ZERO, iv6r3L2, +1, iv6r3C1) *
   propcolor(+8, iv4r3C8, iv1r3C8) *
   proplorentz(+2, k7+k8+ZERO, 0, 0, 0, iv4r3L2, iv1r3L2) *
   propcolor(+1, iv2r3C1, iv6r2C1) *
   proplorentz(+2, -k3-k4+ZERO, mW, wW, 0, iv2r3L2, iv6r2L2) *
   propcolor(+1, iv6r1C1, iv3r3C1) *
   proplorentz(+2, k5+k6+ZERO, mW, wW, 0, iv6r1L2, iv3r3L2) *
   propcolor(+3, iv4r1C3, iv5r2C3) *
   proplorentz(+1, k1-k7-k8+ZERO, mU, 0, 0, iv4r1L1, iv5r2L1) *
   propcolor(+1, iv6r3C1, iv5r3C1) *
   proplorentz(+2, -k1-k2+k7+k8+ZERO, 0, 0, 0, iv6r3L2, iv5r3L2)
;
*--#] diagram5:
*--#[ diagram6:
*
Local diagram6 =
  QGRAFSIGN(-1) * PREFACTOR(1) *
   inp([field.U], k1) *
   inplorentz(+1, iv4r2L1, k1, mU) *
   inpcolor(1, iv4r2C3) *
   inp([field.Ubar], k2) *
   inplorentz(-1, iv5r1L1, k2, mU) *
   inpcolor(2, iv5r1C3) *
   out([field.ep], k3) *
   outlorentz(-1, iv2r2L1, k3, me) *
   outcolor(1, iv2r2C1) *
   out([field.ne], k4) *
   outlorentz(+1, iv2r1L1, k4, 0) *
   outcolor(2, iv2r1C1) *
   out([field.mum], k5) *
   outlorentz(+1, iv3r1L1, k5, mmu) *
   outcolor(3, iv3r1C1) *
   out([field.nmubar], k6) *
   outlorentz(-1, iv3r2L1, k6, 0) *
   outcolor(4, iv3r2C1) *
   out([field.B], k7) *
   outlorentz(+1, iv1r1L1, k7, mB) *
   outcolor(5, iv1r1C3) *
   out([field.Bbar], k8) *
   outlorentz(-1, iv1r2L1, k8, mB) *
   outcolor(6, iv1r2C3) *
   vertex(iv1,
      [field.Bbar], idx1r1, -1, -k7+ZERO, iv1r1L1, -3, iv1r1C3,
      [field.B], idx1r2, +1, -k8+ZERO, iv1r2L1, +3, iv1r2C3,
      [field.g], idx1r3, +2, k7+k8+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.nebar], idx2r1, -1, -k4+ZERO, iv2r1L1, -1, iv2r1C1,
      [field.em], idx2r2, +1, -k3+ZERO, iv2r2L1, +1, iv2r2C1,
      [field.Wp], idx2r3, +2, k3+k4+ZERO, iv2r3L2, +1, iv2r3C1) *
   vertex(iv3,
      [field.mup], idx3r1, -1, -k5+ZERO, iv3r1L1, -1, iv3r1C1,
      [field.nmu], idx3r2, +1, -k6+ZERO, iv3r2L1, +1, iv3r2C1,
      [field.Wm], idx3r3, +2, k5+k6+ZERO, iv3r3L2, +1, iv3r3C1) *
   vertex(iv4,
      [field.Ubar], idx4r1, -1, -k1+k7+k8+ZERO, iv4r1L1, -3, iv4r1C3,
      [field.U], idx4r2, +1, k1+ZERO, iv4r2L1, +3, iv4r2C3,
      [field.g], idx4r3, +2, -k7-k8+ZERO, iv4r3L2, +8, iv4r3C8) *
   vertex(iv5,
      [field.Ubar], idx5r1, -1, k2+ZERO, iv5r1L1, -3, iv5r1C3,
      [field.U], idx5r2, +1, k1-k7-k8+ZERO, iv5r2L1, +3, iv5r2C3,
      [field.Z], idx5r3, +2, -k1-k2+k7+k8+ZERO, iv5r3L2, +1, iv5r3C1) *
   vertex(iv6,
      [field.Wp], idx6r1, +2, -k5-k6+ZERO, iv6r1L2, +1, iv6r1C1,
      [field.Wm], idx6r2, +2, -k3-k4+ZERO, iv6r2L2, +1, iv6r2C1,
      [field.Z], idx6r3, +2, k1+k2-k7-k8+ZERO, iv6r3L2, +1, iv6r3C1) *
   propcolor(+8, iv4r3C8, iv1r3C8) *
   proplorentz(+2, k7+k8+ZERO, 0, 0, 0, iv4r3L2, iv1r3L2) *
   propcolor(+1, iv2r3C1, iv6r2C1) *
   proplorentz(+2, -k3-k4+ZERO, mW, wW, 0, iv2r3L2, iv6r2L2) *
   propcolor(+1, iv6r1C1, iv3r3C1) *
   proplorentz(+2, k5+k6+ZERO, mW, wW, 0, iv6r1L2, iv3r3L2) *
   propcolor(+3, iv4r1C3, iv5r2C3) *
   proplorentz(+1, k1-k7-k8+ZERO, mU, 0, 0, iv4r1L1, iv5r2L1) *
   propcolor(+1, iv6r3C1, iv5r3C1) *
   proplorentz(+2, -k1-k2+k7+k8+ZERO, mZ, wZ, 0, iv6r3L2, iv5r3L2)
;
*--#] diagram6:
*--#[ diagram7:
*
Local diagram7 =
  QGRAFSIGN(-1) * PREFACTOR(1) *
   inp([field.U], k1) *
   inplorentz(+1, iv5r2L1, k1, mU) *
   inpcolor(1, iv5r2C3) *
   inp([field.Ubar], k2) *
   inplorentz(-1, iv4r1L1, k2, mU) *
   inpcolor(2, iv4r1C3) *
   out([field.ep], k3) *
   outlorentz(-1, iv2r2L1, k3, me) *
   outcolor(1, iv2r2C1) *
   out([field.ne], k4) *
   outlorentz(+1, iv2r1L1, k4, 0) *
   outcolor(2, iv2r1C1) *
   out([field.mum], k5) *
   outlorentz(+1, iv3r1L1, k5, mmu) *
   outcolor(3, iv3r1C1) *
   out([field.nmubar], k6) *
   outlorentz(-1, iv3r2L1, k6, 0) *
   outcolor(4, iv3r2C1) *
   out([field.B], k7) *
   outlorentz(+1, iv1r1L1, k7, mB) *
   outcolor(5, iv1r1C3) *
   out([field.Bbar], k8) *
   outlorentz(-1, iv1r2L1, k8, mB) *
   outcolor(6, iv1r2C3) *
   vertex(iv1,
      [field.Bbar], idx1r1, -1, -k7+ZERO, iv1r1L1, -3, iv1r1C3,
      [field.B], idx1r2, +1, -k8+ZERO, iv1r2L1, +3, iv1r2C3,
      [field.g], idx1r3, +2, k7+k8+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.nebar], idx2r1, -1, -k4+ZERO, iv2r1L1, -1, iv2r1C1,
      [field.em], idx2r2, +1, -k3+ZERO, iv2r2L1, +1, iv2r2C1,
      [field.Wp], idx2r3, +2, k3+k4+ZERO, iv2r3L2, +1, iv2r3C1) *
   vertex(iv3,
      [field.mup], idx3r1, -1, -k5+ZERO, iv3r1L1, -1, iv3r1C1,
      [field.nmu], idx3r2, +1, -k6+ZERO, iv3r2L1, +1, iv3r2C1,
      [field.Wm], idx3r3, +2, k5+k6+ZERO, iv3r3L2, +1, iv3r3C1) *
   vertex(iv4,
      [field.Ubar], idx4r1, -1, k2+ZERO, iv4r1L1, -3, iv4r1C3,
      [field.U], idx4r2, +1, -k2+k7+k8+ZERO, iv4r2L1, +3, iv4r2C3,
      [field.g], idx4r3, +2, -k7-k8+ZERO, iv4r3L2, +8, iv4r3C8) *
   vertex(iv5,
      [field.Ubar], idx5r1, -1, k2-k7-k8+ZERO, iv5r1L1, -3, iv5r1C3,
      [field.U], idx5r2, +1, k1+ZERO, iv5r2L1, +3, iv5r2C3,
      [field.A], idx5r3, +2, -k1-k2+k7+k8+ZERO, iv5r3L2, +1, iv5r3C1) *
   vertex(iv6,
      [field.Wp], idx6r1, +2, -k5-k6+ZERO, iv6r1L2, +1, iv6r1C1,
      [field.Wm], idx6r2, +2, -k3-k4+ZERO, iv6r2L2, +1, iv6r2C1,
      [field.A], idx6r3, +2, k1+k2-k7-k8+ZERO, iv6r3L2, +1, iv6r3C1) *
   propcolor(+8, iv4r3C8, iv1r3C8) *
   proplorentz(+2, k7+k8+ZERO, 0, 0, 0, iv4r3L2, iv1r3L2) *
   propcolor(+1, iv2r3C1, iv6r2C1) *
   proplorentz(+2, -k3-k4+ZERO, mW, wW, 0, iv2r3L2, iv6r2L2) *
   propcolor(+1, iv6r1C1, iv3r3C1) *
   proplorentz(+2, k5+k6+ZERO, mW, wW, 0, iv6r1L2, iv3r3L2) *
   propcolor(+3, iv5r1C3, iv4r2C3) *
   proplorentz(+1, -k2+k7+k8+ZERO, mU, 0, 0, iv5r1L1, iv4r2L1) *
   propcolor(+1, iv6r3C1, iv5r3C1) *
   proplorentz(+2, -k1-k2+k7+k8+ZERO, 0, 0, 0, iv6r3L2, iv5r3L2)
;
*--#] diagram7:
*--#[ diagram8:
*
Local diagram8 =
  QGRAFSIGN(-1) * PREFACTOR(1) *
   inp([field.U], k1) *
   inplorentz(+1, iv5r2L1, k1, mU) *
   inpcolor(1, iv5r2C3) *
   inp([field.Ubar], k2) *
   inplorentz(-1, iv4r1L1, k2, mU) *
   inpcolor(2, iv4r1C3) *
   out([field.ep], k3) *
   outlorentz(-1, iv2r2L1, k3, me) *
   outcolor(1, iv2r2C1) *
   out([field.ne], k4) *
   outlorentz(+1, iv2r1L1, k4, 0) *
   outcolor(2, iv2r1C1) *
   out([field.mum], k5) *
   outlorentz(+1, iv3r1L1, k5, mmu) *
   outcolor(3, iv3r1C1) *
   out([field.nmubar], k6) *
   outlorentz(-1, iv3r2L1, k6, 0) *
   outcolor(4, iv3r2C1) *
   out([field.B], k7) *
   outlorentz(+1, iv1r1L1, k7, mB) *
   outcolor(5, iv1r1C3) *
   out([field.Bbar], k8) *
   outlorentz(-1, iv1r2L1, k8, mB) *
   outcolor(6, iv1r2C3) *
   vertex(iv1,
      [field.Bbar], idx1r1, -1, -k7+ZERO, iv1r1L1, -3, iv1r1C3,
      [field.B], idx1r2, +1, -k8+ZERO, iv1r2L1, +3, iv1r2C3,
      [field.g], idx1r3, +2, k7+k8+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.nebar], idx2r1, -1, -k4+ZERO, iv2r1L1, -1, iv2r1C1,
      [field.em], idx2r2, +1, -k3+ZERO, iv2r2L1, +1, iv2r2C1,
      [field.Wp], idx2r3, +2, k3+k4+ZERO, iv2r3L2, +1, iv2r3C1) *
   vertex(iv3,
      [field.mup], idx3r1, -1, -k5+ZERO, iv3r1L1, -1, iv3r1C1,
      [field.nmu], idx3r2, +1, -k6+ZERO, iv3r2L1, +1, iv3r2C1,
      [field.Wm], idx3r3, +2, k5+k6+ZERO, iv3r3L2, +1, iv3r3C1) *
   vertex(iv4,
      [field.Ubar], idx4r1, -1, k2+ZERO, iv4r1L1, -3, iv4r1C3,
      [field.U], idx4r2, +1, -k2+k7+k8+ZERO, iv4r2L1, +3, iv4r2C3,
      [field.g], idx4r3, +2, -k7-k8+ZERO, iv4r3L2, +8, iv4r3C8) *
   vertex(iv5,
      [field.Ubar], idx5r1, -1, k2-k7-k8+ZERO, iv5r1L1, -3, iv5r1C3,
      [field.U], idx5r2, +1, k1+ZERO, iv5r2L1, +3, iv5r2C3,
      [field.Z], idx5r3, +2, -k1-k2+k7+k8+ZERO, iv5r3L2, +1, iv5r3C1) *
   vertex(iv6,
      [field.Wp], idx6r1, +2, -k5-k6+ZERO, iv6r1L2, +1, iv6r1C1,
      [field.Wm], idx6r2, +2, -k3-k4+ZERO, iv6r2L2, +1, iv6r2C1,
      [field.Z], idx6r3, +2, k1+k2-k7-k8+ZERO, iv6r3L2, +1, iv6r3C1) *
   propcolor(+8, iv4r3C8, iv1r3C8) *
   proplorentz(+2, k7+k8+ZERO, 0, 0, 0, iv4r3L2, iv1r3L2) *
   propcolor(+1, iv2r3C1, iv6r2C1) *
   proplorentz(+2, -k3-k4+ZERO, mW, wW, 0, iv2r3L2, iv6r2L2) *
   propcolor(+1, iv6r1C1, iv3r3C1) *
   proplorentz(+2, k5+k6+ZERO, mW, wW, 0, iv6r1L2, iv3r3L2) *
   propcolor(+3, iv5r1C3, iv4r2C3) *
   proplorentz(+1, -k2+k7+k8+ZERO, mU, 0, 0, iv5r1L1, iv4r2L1) *
   propcolor(+1, iv6r3C1, iv5r3C1) *
   proplorentz(+2, -k1-k2+k7+k8+ZERO, mZ, wZ, 0, iv6r3L2, iv5r3L2)
;
*--#] diagram8:
*--#[ diagram9:
*
Local diagram9 =
  QGRAFSIGN(-1) * PREFACTOR(1) *
   inp([field.U], k1) *
   inplorentz(+1, iv1r2L1, k1, mU) *
   inpcolor(1, iv1r2C3) *
   inp([field.Ubar], k2) *
   inplorentz(-1, iv1r1L1, k2, mU) *
   inpcolor(2, iv1r1C3) *
   out([field.ep], k3) *
   outlorentz(-1, iv2r2L1, k3, me) *
   outcolor(1, iv2r2C1) *
   out([field.ne], k4) *
   outlorentz(+1, iv2r1L1, k4, 0) *
   outcolor(2, iv2r1C1) *
   out([field.mum], k5) *
   outlorentz(+1, iv3r1L1, k5, mmu) *
   outcolor(3, iv3r1C1) *
   out([field.nmubar], k6) *
   outlorentz(-1, iv3r2L1, k6, 0) *
   outcolor(4, iv3r2C1) *
   out([field.B], k7) *
   outlorentz(+1, iv5r1L1, k7, mB) *
   outcolor(5, iv5r1C3) *
   out([field.Bbar], k8) *
   outlorentz(-1, iv4r2L1, k8, mB) *
   outcolor(6, iv4r2C3) *
   vertex(iv1,
      [field.Ubar], idx1r1, -1, k2+ZERO, iv1r1L1, -3, iv1r1C3,
      [field.U], idx1r2, +1, k1+ZERO, iv1r2L1, +3, iv1r2C3,
      [field.g], idx1r3, +2, -k1-k2+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.nebar], idx2r1, -1, -k4+ZERO, iv2r1L1, -1, iv2r1C1,
      [field.em], idx2r2, +1, -k3+ZERO, iv2r2L1, +1, iv2r2C1,
      [field.Wp], idx2r3, +2, k3+k4+ZERO, iv2r3L2, +1, iv2r3C1) *
   vertex(iv3,
      [field.mup], idx3r1, -1, -k5+ZERO, iv3r1L1, -1, iv3r1C1,
      [field.nmu], idx3r2, +1, -k6+ZERO, iv3r2L1, +1, iv3r2C1,
      [field.Wm], idx3r3, +2, k5+k6+ZERO, iv3r3L2, +1, iv3r3C1) *
   vertex(iv4,
      [field.Bbar], idx4r1, -1, -k1-k2+k8+ZERO, iv4r1L1, -3, iv4r1C3,
      [field.B], idx4r2, +1, -k8+ZERO, iv4r2L1, +3, iv4r2C3,
      [field.g], idx4r3, +2, k1+k2+ZERO, iv4r3L2, +8, iv4r3C8) *
   vertex(iv5,
      [field.Bbar], idx5r1, -1, -k7+ZERO, iv5r1L1, -3, iv5r1C3,
      [field.T], idx5r2, +1, k3+k4+k7+ZERO, iv5r2L1, +3, iv5r2C3,
      [field.Wm], idx5r3, +2, -k3-k4+ZERO, iv5r3L2, +1, iv5r3C1) *
   vertex(iv6,
      [field.Tbar], idx6r1, -1, -k3-k4-k7+ZERO, iv6r1L1, -3, iv6r1C3,
      [field.B], idx6r2, +1, k1+k2-k8+ZERO, iv6r2L1, +3, iv6r2C3,
      [field.Wp], idx6r3, +2, -k5-k6+ZERO, iv6r3L2, +1, iv6r3C1) *
   propcolor(+8, iv4r3C8, iv1r3C8) *
   proplorentz(+2, -k1-k2+ZERO, 0, 0, 0, iv4r3L2, iv1r3L2) *
   propcolor(+1, iv2r3C1, iv5r3C1) *
   proplorentz(+2, -k3-k4+ZERO, mW, wW, 0, iv2r3L2, iv5r3L2) *
   propcolor(+1, iv6r3C1, iv3r3C1) *
   proplorentz(+2, k5+k6+ZERO, mW, wW, 0, iv6r3L2, iv3r3L2) *
   propcolor(+3, iv4r1C3, iv6r2C3) *
   proplorentz(+1, k1+k2-k8+ZERO, mB, wB, 0, iv4r1L1, iv6r2L1) *
   propcolor(+3, iv6r1C3, iv5r2C3) *
   proplorentz(+1, k3+k4+k7+ZERO, mT, wT, 0, iv6r1L1, iv5r2L1)
;
*--#] diagram9:
*--#[ diagram10:
*
Local diagram10 =
  QGRAFSIGN(-1) * PREFACTOR(1) *
   inp([field.U], k1) *
   inplorentz(+1, iv1r2L1, k1, mU) *
   inpcolor(1, iv1r2C3) *
   inp([field.Ubar], k2) *
   inplorentz(-1, iv1r1L1, k2, mU) *
   inpcolor(2, iv1r1C3) *
   out([field.ep], k3) *
   outlorentz(-1, iv3r2L1, k3, me) *
   outcolor(1, iv3r2C1) *
   out([field.ne], k4) *
   outlorentz(+1, iv3r1L1, k4, 0) *
   outcolor(2, iv3r1C1) *
   out([field.mum], k5) *
   outlorentz(+1, iv2r1L1, k5, mmu) *
   outcolor(3, iv2r1C1) *
   out([field.nmubar], k6) *
   outlorentz(-1, iv2r2L1, k6, 0) *
   outcolor(4, iv2r2C1) *
   out([field.B], k7) *
   outlorentz(+1, iv4r1L1, k7, mB) *
   outcolor(5, iv4r1C3) *
   out([field.Bbar], k8) *
   outlorentz(-1, iv5r2L1, k8, mB) *
   outcolor(6, iv5r2C3) *
   vertex(iv1,
      [field.Ubar], idx1r1, -1, k2+ZERO, iv1r1L1, -3, iv1r1C3,
      [field.U], idx1r2, +1, k1+ZERO, iv1r2L1, +3, iv1r2C3,
      [field.g], idx1r3, +2, -k1-k2+ZERO, iv1r3L2, +8, iv1r3C8) *
   vertex(iv2,
      [field.mup], idx2r1, -1, -k5+ZERO, iv2r1L1, -1, iv2r1C1,
      [field.nmu], idx2r2, +1, -k6+ZERO, iv2r2L1, +1, iv2r2C1,
      [field.Wm], idx2r3, +2, k5+k6+ZERO, iv2r3L2, +1, iv2r3C1) *
   vertex(iv3,
      [field.nebar], idx3r1, -1, -k4+ZERO, iv3r1L1, -1, iv3r1C1,
      [field.em], idx3r2, +1, -k3+ZERO, iv3r2L1, +1, iv3r2C1,
      [field.Wp], idx3r3, +2, k3+k4+ZERO, iv3r3L2, +1, iv3r3C1) *
   vertex(iv4,
      [field.Bbar], idx4r1, -1, -k7+ZERO, iv4r1L1, -3, iv4r1C3,
      [field.B], idx4r2, +1, -k1-k2+k7+ZERO, iv4r2L1, +3, iv4r2C3,
      [field.g], idx4r3, +2, k1+k2+ZERO, iv4r3L2, +8, iv4r3C8) *
   vertex(iv5,
      [field.Tbar], idx5r1, -1, k5+k6+k8+ZERO, iv5r1L1, -3, iv5r1C3,
      [field.B], idx5r2, +1, -k8+ZERO, iv5r2L1, +3, iv5r2C3,
      [field.Wp], idx5r3, +2, -k5-k6+ZERO, iv5r3L2, +1, iv5r3C1) *
   vertex(iv6,
      [field.Bbar], idx6r1, -1, k1+k2-k7+ZERO, iv6r1L1, -3, iv6r1C3,
      [field.T], idx6r2, +1, -k5-k6-k8+ZERO, iv6r2L1, +3, iv6r2C3,
      [field.Wm], idx6r3, +2, -k3-k4+ZERO, iv6r3L2, +1, iv6r3C1) *
   propcolor(+8, iv4r3C8, iv1r3C8) *
   proplorentz(+2, -k1-k2+ZERO, 0, 0, 0, iv4r3L2, iv1r3L2) *
   propcolor(+1, iv5r3C1, iv2r3C1) *
   proplorentz(+2, k5+k6+ZERO, mW, wW, 0, iv5r3L2, iv2r3L2) *
   propcolor(+1, iv3r3C1, iv6r3C1) *
   proplorentz(+2, -k3-k4+ZERO, mW, wW, 0, iv3r3L2, iv6r3L2) *
   propcolor(+3, iv6r1C3, iv4r2C3) *
   proplorentz(+1, -k1-k2+k7+ZERO, mB, wB, 0, iv6r1L1, iv4r2L1) *
   propcolor(+3, iv5r1C3, iv6r2C3) *
   proplorentz(+1, -k5-k6-k8+ZERO, mT, wT, 0, iv5r1L1, iv6r2L1)
;
*--#] diagram10:
*--#[ diagram11:
*
Local diagram11 =
  QGRAFSIGN(-1) * PREFACTOR(1) *
   inp([field.U], k1) *
   inplorentz(+1, iv3r2L1, k1, mU) *
   inpcolor(1, iv3r2C3) *
   inp([field.Ubar], k2) *
   inplorentz(-1, iv3r1L1, k2, mU) *
   inpcolor(2, iv3r1C3) *
   out([field.ep], k3) *
   outlorentz(-1, iv1r2L1, k3, me) *
   outcolor(1, iv1r2C1) *
   out([field.ne], k4) *
   outlorentz(+1, iv1r1L1, k4, 0) *
   outcolor(2, iv1r1C1) *
   out([field.mum], k5) *
   outlorentz(+1, iv2r1L1, k5, mmu) *
   outcolor(3, iv2r1C1) *
   out([field.nmubar], k6) *
   outlorentz(-1, iv2r2L1, k6, 0) *
   outcolor(4, iv2r2C1) *
   out([field.B], k7) *
   outlorentz(+1, iv4r1L1, k7, mB) *
   outcolor(5, iv4r1C3) *
   out([field.Bbar], k8) *
   outlorentz(-1, iv5r2L1, k8, mB) *
   outcolor(6, iv5r2C3) *
   vertex(iv1,
      [field.nebar], idx1r1, -1, -k4+ZERO, iv1r1L1, -1, iv1r1C1,
      [field.em], idx1r2, +1, -k3+ZERO, iv1r2L1, +1, iv1r2C1,
      [field.Wp], idx1r3, +2, k3+k4+ZERO, iv1r3L2, +1, iv1r3C1) *
   vertex(iv2,
      [field.mup], idx2r1, -1, -k5+ZERO, iv2r1L1, -1, iv2r1C1,
      [field.nmu], idx2r2, +1, -k6+ZERO, iv2r2L1, +1, iv2r2C1,
      [field.Wm], idx2r3, +2, k5+k6+ZERO, iv2r3L2, +1, iv2r3C1) *
   vertex(iv3,
      [field.Ubar], idx3r1, -1, k2+ZERO, iv3r1L1, -3, iv3r1C3,
      [field.U], idx3r2, +1, k1+ZERO, iv3r2L1, +3, iv3r2C3,
      [field.g], idx3r3, +2, -k1-k2+ZERO, iv3r3L2, +8, iv3r3C8) *
   vertex(iv4,
      [field.Bbar], idx4r1, -1, -k7+ZERO, iv4r1L1, -3, iv4r1C3,
      [field.T], idx4r2, +1, k3+k4+k7+ZERO, iv4r2L1, +3, iv4r2C3,
      [field.Wm], idx4r3, +2, -k3-k4+ZERO, iv4r3L2, +1, iv4r3C1) *
   vertex(iv5,
      [field.Tbar], idx5r1, -1, k5+k6+k8+ZERO, iv5r1L1, -3, iv5r1C3,
      [field.B], idx5r2, +1, -k8+ZERO, iv5r2L1, +3, iv5r2C3,
      [field.Wp], idx5r3, +2, -k5-k6+ZERO, iv5r3L2, +1, iv5r3C1) *
   vertex(iv6,
      [field.Tbar], idx6r1, -1, -k3-k4-k7+ZERO, iv6r1L1, -3, iv6r1C3,
      [field.T], idx6r2, +1, -k5-k6-k8+ZERO, iv6r2L1, +3, iv6r2C3,
      [field.g], idx6r3, +2, k1+k2+ZERO, iv6r3L2, +8, iv6r3C8) *
   propcolor(+1, iv1r3C1, iv4r3C1) *
   proplorentz(+2, -k3-k4+ZERO, mW, wW, 0, iv1r3L2, iv4r3L2) *
   propcolor(+1, iv5r3C1, iv2r3C1) *
   proplorentz(+2, k5+k6+ZERO, mW, wW, 0, iv5r3L2, iv2r3L2) *
   propcolor(+8, iv6r3C8, iv3r3C8) *
   proplorentz(+2, -k1-k2+ZERO, 0, 0, 0, iv6r3L2, iv3r3L2) *
   propcolor(+3, iv6r1C3, iv4r2C3) *
   proplorentz(+1, k3+k4+k7+ZERO, mT, wT, 0, iv6r1L1, iv4r2L1) *
   propcolor(+3, iv5r1C3, iv6r2C3) *
   proplorentz(+1, -k5-k6-k8+ZERO, mT, wT, 0, iv5r1L1, iv6r2L1)
;
*--#] diagram11:
*--#[ diagram12:
*
Local diagram12 =
  QGRAFSIGN(-1) * PREFACTOR(1) *
   inp([field.U], k1) *
   inplorentz(+1, iv4r2L1, k1, mU) *
   inpcolor(1, iv4r2C3) *
   inp([field.Ubar], k2) *
   inplorentz(-1, iv5r1L1, k2, mU) *
   inpcolor(2, iv5r1C3) *
   out([field.ep], k3) *
   outlorentz(-1, iv1r2L1, k3, me) *
   outcolor(1, iv1r2C1) *
   out([field.ne], k4) *
   outlorentz(+1, iv1r1L1, k4, 0) *
   outcolor(2, iv1r1C1) *
   out([field.mum], k5) *
   outlorentz(+1, iv2r1L1, k5, mmu) *
   outcolor(3, iv2r1C1) *
   out([field.nmubar], k6) *
   outlorentz(-1, iv2r2L1, k6, 0) *
   outcolor(4, iv2r2C1) *
   out([field.B], k7) *
   outlorentz(+1, iv3r1L1, k7, mB) *
   outcolor(5, iv3r1C3) *
   out([field.Bbar], k8) *
   outlorentz(-1, iv3r2L1, k8, mB) *
   outcolor(6, iv3r2C3) *
   vertex(iv1,
      [field.nebar], idx1r1, -1, -k4+ZERO, iv1r1L1, -1, iv1r1C1,
      [field.em], idx1r2, +1, -k3+ZERO, iv1r2L1, +1, iv1r2C1,
      [field.Wp], idx1r3, +2, k3+k4+ZERO, iv1r3L2, +1, iv1r3C1) *
   vertex(iv2,
      [field.mup], idx2r1, -1, -k5+ZERO, iv2r1L1, -1, iv2r1C1,
      [field.nmu], idx2r2, +1, -k6+ZERO, iv2r2L1, +1, iv2r2C1,
      [field.Wm], idx2r3, +2, k5+k6+ZERO, iv2r3L2, +1, iv2r3C1) *
   vertex(iv3,
      [field.Bbar], idx3r1, -1, -k7+ZERO, iv3r1L1, -3, iv3r1C3,
      [field.B], idx3r2, +1, -k8+ZERO, iv3r2L1, +3, iv3r2C3,
      [field.g], idx3r3, +2, k7+k8+ZERO, iv3r3L2, +8, iv3r3C8) *
   vertex(iv4,
      [field.Dbar], idx4r1, -1, -k1+k3+k4+ZERO, iv4r1L1, -3, iv4r1C3,
      [field.U], idx4r2, +1, k1+ZERO, iv4r2L1, +3, iv4r2C3,
      [field.Wm], idx4r3, +2, -k3-k4+ZERO, iv4r3L2, +1, iv4r3C1) *
   vertex(iv5,
      [field.Ubar], idx5r1, -1, k2+ZERO, iv5r1L1, -3, iv5r1C3,
      [field.D], idx5r2, +1, -k2+k5+k6+ZERO, iv5r2L1, +3, iv5r2C3,
      [field.Wp], idx5r3, +2, -k5-k6+ZERO, iv5r3L2, +1, iv5r3C1) *
   vertex(iv6,
      [field.Dbar], idx6r1, -1, k2-k5-k6+ZERO, iv6r1L1, -3, iv6r1C3,
      [field.D], idx6r2, +1, k1-k3-k4+ZERO, iv6r2L1, +3, iv6r2C3,
      [field.g], idx6r3, +2, -k7-k8+ZERO, iv6r3L2, +8, iv6r3C8) *
   propcolor(+1, iv1r3C1, iv4r3C1) *
   proplorentz(+2, -k3-k4+ZERO, mW, wW, 0, iv1r3L2, iv4r3L2) *
   propcolor(+1, iv5r3C1, iv2r3C1) *
   proplorentz(+2, k5+k6+ZERO, mW, wW, 0, iv5r3L2, iv2r3L2) *
   propcolor(+8, iv6r3C8, iv3r3C8) *
   proplorentz(+2, k7+k8+ZERO, 0, 0, 0, iv6r3L2, iv3r3L2) *
   propcolor(+3, iv4r1C3, iv6r2C3) *
   proplorentz(+1, k1-k3-k4+ZERO, mD, 0, 0, iv4r1L1, iv6r2L1) *
   propcolor(+3, iv6r1C3, iv5r2C3) *
   proplorentz(+1, -k2+k5+k6+ZERO, mD, 0, 0, iv6r1L1, iv5r2L1)
;
*--#] diagram12:
*--#[ diagram13:
*
Local diagram13 =
  QGRAFSIGN(-1) * PREFACTOR(1) *
   inp([field.U], k1) *
   inplorentz(+1, iv4r2L1, k1, mU) *
   inpcolor(1, iv4r2C3) *
   inp([field.Ubar], k2) *
   inplorentz(-1, iv5r1L1, k2, mU) *
   inpcolor(2, iv5r1C3) *
   out([field.ep], k3) *
   outlorentz(-1, iv1r2L1, k3, me) *
   outcolor(1, iv1r2C1) *
   out([field.ne], k4) *
   outlorentz(+1, iv1r1L1, k4, 0) *
   outcolor(2, iv1r1C1) *
   out([field.mum], k5) *
   outlorentz(+1, iv3r1L1, k5, mmu) *
   outcolor(3, iv3r1C1) *
   out([field.nmubar], k6) *
   outlorentz(-1, iv3r2L1, k6, 0) *
   outcolor(4, iv3r2C1) *
   out([field.B], k7) *
   outlorentz(+1, iv2r1L1, k7, mB) *
   outcolor(5, iv2r1C3) *
   out([field.Bbar], k8) *
   outlorentz(-1, iv2r2L1, k8, mB) *
   outcolor(6, iv2r2C3) *
   vertex(iv1,
      [field.nebar], idx1r1, -1, -k4+ZERO, iv1r1L1, -1, iv1r1C1,
      [field.em], idx1r2, +1, -k3+ZERO, iv1r2L1, +1, iv1r2C1,
      [field.Wp], idx1r3, +2, k3+k4+ZERO, iv1r3L2, +1, iv1r3C1) *
   vertex(iv2,
      [field.Bbar], idx2r1, -1, -k7+ZERO, iv2r1L1, -3, iv2r1C3,
      [field.B], idx2r2, +1, -k8+ZERO, iv2r2L1, +3, iv2r2C3,
      [field.g], idx2r3, +2, k7+k8+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.mup], idx3r1, -1, -k5+ZERO, iv3r1L1, -1, iv3r1C1,
      [field.nmu], idx3r2, +1, -k6+ZERO, iv3r2L1, +1, iv3r2C1,
      [field.Wm], idx3r3, +2, k5+k6+ZERO, iv3r3L2, +1, iv3r3C1) *
   vertex(iv4,
      [field.Dbar], idx4r1, -1, -k1+k3+k4+ZERO, iv4r1L1, -3, iv4r1C3,
      [field.U], idx4r2, +1, k1+ZERO, iv4r2L1, +3, iv4r2C3,
      [field.Wm], idx4r3, +2, -k3-k4+ZERO, iv4r3L2, +1, iv4r3C1) *
   vertex(iv5,
      [field.Ubar], idx5r1, -1, k2+ZERO, iv5r1L1, -3, iv5r1C3,
      [field.U], idx5r2, +1, -k2+k7+k8+ZERO, iv5r2L1, +3, iv5r2C3,
      [field.g], idx5r3, +2, -k7-k8+ZERO, iv5r3L2, +8, iv5r3C8) *
   vertex(iv6,
      [field.Ubar], idx6r1, -1, k2-k7-k8+ZERO, iv6r1L1, -3, iv6r1C3,
      [field.D], idx6r2, +1, k1-k3-k4+ZERO, iv6r2L1, +3, iv6r2C3,
      [field.Wp], idx6r3, +2, -k5-k6+ZERO, iv6r3L2, +1, iv6r3C1) *
   propcolor(+1, iv1r3C1, iv4r3C1) *
   proplorentz(+2, -k3-k4+ZERO, mW, wW, 0, iv1r3L2, iv4r3L2) *
   propcolor(+8, iv5r3C8, iv2r3C8) *
   proplorentz(+2, k7+k8+ZERO, 0, 0, 0, iv5r3L2, iv2r3L2) *
   propcolor(+1, iv6r3C1, iv3r3C1) *
   proplorentz(+2, k5+k6+ZERO, mW, wW, 0, iv6r3L2, iv3r3L2) *
   propcolor(+3, iv4r1C3, iv6r2C3) *
   proplorentz(+1, k1-k3-k4+ZERO, mD, 0, 0, iv4r1L1, iv6r2L1) *
   propcolor(+3, iv6r1C3, iv5r2C3) *
   proplorentz(+1, -k2+k7+k8+ZERO, mU, 0, 0, iv6r1L1, iv5r2L1)
;
*--#] diagram13:
*--#[ diagram14:
*
Local diagram14 =
  QGRAFSIGN(-1) * PREFACTOR(1) *
   inp([field.U], k1) *
   inplorentz(+1, iv5r2L1, k1, mU) *
   inpcolor(1, iv5r2C3) *
   inp([field.Ubar], k2) *
   inplorentz(-1, iv4r1L1, k2, mU) *
   inpcolor(2, iv4r1C3) *
   out([field.ep], k3) *
   outlorentz(-1, iv3r2L1, k3, me) *
   outcolor(1, iv3r2C1) *
   out([field.ne], k4) *
   outlorentz(+1, iv3r1L1, k4, 0) *
   outcolor(2, iv3r1C1) *
   out([field.mum], k5) *
   outlorentz(+1, iv1r1L1, k5, mmu) *
   outcolor(3, iv1r1C1) *
   out([field.nmubar], k6) *
   outlorentz(-1, iv1r2L1, k6, 0) *
   outcolor(4, iv1r2C1) *
   out([field.B], k7) *
   outlorentz(+1, iv2r1L1, k7, mB) *
   outcolor(5, iv2r1C3) *
   out([field.Bbar], k8) *
   outlorentz(-1, iv2r2L1, k8, mB) *
   outcolor(6, iv2r2C3) *
   vertex(iv1,
      [field.mup], idx1r1, -1, -k5+ZERO, iv1r1L1, -1, iv1r1C1,
      [field.nmu], idx1r2, +1, -k6+ZERO, iv1r2L1, +1, iv1r2C1,
      [field.Wm], idx1r3, +2, k5+k6+ZERO, iv1r3L2, +1, iv1r3C1) *
   vertex(iv2,
      [field.Bbar], idx2r1, -1, -k7+ZERO, iv2r1L1, -3, iv2r1C3,
      [field.B], idx2r2, +1, -k8+ZERO, iv2r2L1, +3, iv2r2C3,
      [field.g], idx2r3, +2, k7+k8+ZERO, iv2r3L2, +8, iv2r3C8) *
   vertex(iv3,
      [field.nebar], idx3r1, -1, -k4+ZERO, iv3r1L1, -1, iv3r1C1,
      [field.em], idx3r2, +1, -k3+ZERO, iv3r2L1, +1, iv3r2C1,
      [field.Wp], idx3r3, +2, k3+k4+ZERO, iv3r3L2, +1, iv3r3C1) *
   vertex(iv4,
      [field.Ubar], idx4r1, -1, k2+ZERO, iv4r1L1, -3, iv4r1C3,
      [field.D], idx4r2, +1, -k2+k5+k6+ZERO, iv4r2L1, +3, iv4r2C3,
      [field.Wp], idx4r3, +2, -k5-k6+ZERO, iv4r3L2, +1, iv4r3C1) *
   vertex(iv5,
      [field.Ubar], idx5r1, -1, -k1+k7+k8+ZERO, iv5r1L1, -3, iv5r1C3,
      [field.U], idx5r2, +1, k1+ZERO, iv5r2L1, +3, iv5r2C3,
      [field.g], idx5r3, +2, -k7-k8+ZERO, iv5r3L2, +8, iv5r3C8) *
   vertex(iv6,
      [field.Dbar], idx6r1, -1, k2-k5-k6+ZERO, iv6r1L1, -3, iv6r1C3,
      [field.U], idx6r2, +1, k1-k7-k8+ZERO, iv6r2L1, +3, iv6r2C3,
      [field.Wm], idx6r3, +2, -k3-k4+ZERO, iv6r3L2, +1, iv6r3C1) *
   propcolor(+1, iv4r3C1, iv1r3C1) *
   proplorentz(+2, k5+k6+ZERO, mW, wW, 0, iv4r3L2, iv1r3L2) *
   propcolor(+8, iv5r3C8, iv2r3C8) *
   proplorentz(+2, k7+k8+ZERO, 0, 0, 0, iv5r3L2, iv2r3L2) *
   propcolor(+1, iv3r3C1, iv6r3C1) *
   proplorentz(+2, -k3-k4+ZERO, mW, wW, 0, iv3r3L2, iv6r3L2) *
   propcolor(+3, iv6r1C3, iv4r2C3) *
   proplorentz(+1, -k2+k5+k6+ZERO, mD, 0, 0, iv6r1L1, iv4r2L1) *
   propcolor(+3, iv5r1C3, iv6r2C3) *
   proplorentz(+1, k1-k7-k8+ZERO, mU, 0, 0, iv5r1L1, iv6r2L1)
;
*--#] diagram14:
*
* END OF DIAGRAMS
*
*--#]diagrams:
*--#[global:

#define DIAGRAMCOUNT "14"

*--#]global:


