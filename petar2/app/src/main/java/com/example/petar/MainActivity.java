package com.example.petar;

import androidx.appcompat.app.AppCompatActivity;
import com.unity3d.player.UnityPlayerActivity;
import android.content.Intent;
import android.media.Image;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    private ImageView iv_basket, iv_search, iv_order, iv_my;
    private LinearLayout quiz, clicker, music;
    private TextView arButton;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        iv_basket = findViewById(R.id.iv_basket);
        iv_basket.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent intent = new Intent(MainActivity.this , basket.class);
                startActivity(intent); //액티비티 이동
            }
        });


        arButton = findViewById(R.id.ar); // 'ar'라는 id를 가진 버튼을 찾습니다.
        arButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent intent = new Intent(MainActivity.this, UnityPlayerActivity.class);
                startActivity(intent); // Unity 액티비티를 시작합니다.
            }
        });







        music = findViewById(R.id.music);
        music.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent intent = new Intent(MainActivity.this , Music.class);
                startActivity(intent); //액티비티 이동
            }
        });


        clicker = findViewById(R.id.clicker);
        clicker.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent intent = new Intent(MainActivity.this , Clicker.class);
                startActivity(intent); //액티비티 이동
            }
        });




        quiz = findViewById(R.id.quiz);
        quiz.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent intent = new Intent(MainActivity.this , Quiz1.class);
                startActivity(intent); //액티비티 이동
            }
        });













        iv_search = findViewById(R.id.iv_search);
        iv_search.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent intent = new Intent(MainActivity.this , Search.class);
                startActivity(intent); //액티비티 이동
            }
        });

        iv_order = findViewById(R.id.iv_order);
        iv_order.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent intent = new Intent(MainActivity.this , sssss.class);
                startActivity(intent); //액티비티 이동
            }
        });

        iv_my = findViewById(R.id.iv_my);
        iv_my.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent intent = new Intent(MainActivity.this , My.class);
                startActivity(intent); //액티비티 이동
            }
        });

    }
}