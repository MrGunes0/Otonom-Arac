;; Auto-generated. Do not edit!


(when (boundp 'ogretici_paket::GorevDurumResult)
  (if (not (find-package "OGRETICI_PAKET"))
    (make-package "OGRETICI_PAKET"))
  (shadow 'GorevDurumResult (find-package "OGRETICI_PAKET")))
(unless (find-package "OGRETICI_PAKET::GOREVDURUMRESULT")
  (make-package "OGRETICI_PAKET::GOREVDURUMRESULT"))

(in-package "ROS")
;;//! \htmlinclude GorevDurumResult.msg.html


(defclass ogretici_paket::GorevDurumResult
  :super ros::object
  :slots (_sonuc ))

(defmethod ogretici_paket::GorevDurumResult
  (:init
   (&key
    ((:sonuc __sonuc) "")
    )
   (send-super :init)
   (setq _sonuc (string __sonuc))
   self)
  (:sonuc
   (&optional __sonuc)
   (if __sonuc (setq _sonuc __sonuc)) _sonuc)
  (:serialization-length
   ()
   (+
    ;; string _sonuc
    4 (length _sonuc)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _sonuc
       (write-long (length _sonuc) s) (princ _sonuc s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _sonuc
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _sonuc (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(setf (get ogretici_paket::GorevDurumResult :md5sum-) "4b7dca703b626d43925cc803ca5a123c")
(setf (get ogretici_paket::GorevDurumResult :datatype-) "ogretici_paket/GorevDurumResult")
(setf (get ogretici_paket::GorevDurumResult :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
string sonuc

")



(provide :ogretici_paket/GorevDurumResult "4b7dca703b626d43925cc803ca5a123c")

